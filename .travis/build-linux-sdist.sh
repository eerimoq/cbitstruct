#!/bin/bash

pip install -r dev-requirements.txt
python setup.py install
nosetests cbitstruct
python setup.py sdist

# deploy script uses wheelhouse/
mkdir wheelhouse/
cp dist/* wheelhouse/