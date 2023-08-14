#! /bin/bash

if ! [[ -x egg ]]; then
    echo "egg executable does not exist"
    exit 1
fi

./run-tests.sh $*


