#!/bin/bash

pip install -r dev-requirements.txt
python setup.py install
python cbitstruct/tests/test_perf.py
