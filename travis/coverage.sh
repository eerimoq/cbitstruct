#!/bin/bash

export COVERAGE=1

pip install -r dev-requirements.txt
pip install cpp-coveralls
python setup.py install
nosetests cbitstruct
coveralls --exclude clinic --gcov-options '\-lp'
