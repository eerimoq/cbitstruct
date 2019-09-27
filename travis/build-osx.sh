#!/bin/bash

pip3 install --upgrade pip
pip3 install -r dev-requirements.txt
python3 --version
pip3 --version
python3 setup.py install
python3 -m nose cbitstruct
