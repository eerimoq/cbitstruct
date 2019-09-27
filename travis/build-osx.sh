#!/bin/bash

export PATH=$PATH:/Users/travis/Library/Python/$PYTHON/bin;

yes | sudo port install python$PYTHON;
yes | sudo port install py$PYTHON-pip;
sudo port select --set python3 python$PYTHON;
sudo port select --set pip pip$PYTHON;

pip3 install --upgrade pip
pip3 install -r dev-requirements.txt
python3 --version
pip3 --version
python3 setup.py install
python3 setup.py bdist_wheel
python3 -m nose cbitstruct
ls dist/
