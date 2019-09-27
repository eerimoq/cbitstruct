#!/bin/bash

pip install -r dev-requirements.txt
python setup.py install
nosetests cbitstruct
