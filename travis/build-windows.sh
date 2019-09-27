#!/bin/bash

export PATH=/c/Python38:/c/Python38/Scripts:$PATH
export PATH=/c/Python37:/c/Python37/Scripts:$PATH
export PATH=/c/Python36:/c/Python36/Scripts:$PATH
export PATH=/c/Python35:/c/Python35/Scripts:$PATH
export PATH=/c/Python34:/c/Python34/Scripts:$PATH

choco install python --version $PY_VERSION
python3 --version
pip3 install --upgrade pip
pip3 install -r dev-requirements.txt
pip3 --version
python3 setup.py install
python3 -m nose cbitstruct