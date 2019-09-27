#!/bin/bash

export PATH=/c/Python38:/c/Python38/Scripts:$PATH
export PATH=/c/Python37:/c/Python37/Scripts:$PATH
export PATH=/c/Python36:/c/Python36/Scripts:$PATH
export PATH=/c/Python35:/c/Python35/Scripts:$PATH
export PATH=/c/Python34:/c/Python34/Scripts:$PATH

choco install python --version $PY_VERSION
python --version
pip3 install --upgrade pip wheel setuptools
pip3 install -r dev-requirements.txt
pip3 --version
python setup.py install
python setup.py bdist_wheel
python -m nose cbitstruct
ls dist/
