#!/bin/bash

echo "Enter directory path:"
read dir

files=$(find "$dir" -typef|wc -l)
dirs=$(find "$dir" -typed|wc -l)

echo "Files	:$files"
echo "Directories: $dirs"
