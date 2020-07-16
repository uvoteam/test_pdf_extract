#!/bin/bash

rm ./output/*
for file in ./pdfs/*;do
    echo $file
    out=`basename "$file"`
    time ./parser "$file" > "./output/$out"
done

