#!/usr/bin/bash

# All operations performed relative to the git top level dir
# This means consistent operations regardless of where the script is run from
cd $(git rev-parse --show-toplevel)

# Update version to match git tag
LATEST_TAG=$(git tag -l v* | grep 'v[0-9]\+\.[0-9]\+\.[0-9]\+' | sort -r | head -n 1)
# CLI_SRC='./cmd/masa/main.go'

# echo "Updating version string in $CLI_SRC to match latest git tag ($LATEST_TAG)"
# sed -i "s/Version:.*/Version: \"$LATEST_TAG\",/g" "$CLI_SRC"

# This script is used to tidy everything and prepare for a new release
echo
echo "Update ADR doc table of contents"
adrs generate toc >doc/adr/toc.md

echo
echo "The next release would be ($(git cliff --bumped-version))"
