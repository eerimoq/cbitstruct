#!/bin/bash

export PYENV_VERSION=$PY_VERSION
export PATH="/Users/travis/.pyenv/shims:${PATH}"

brew update
brew install openssl readline
brew outdated pyenv || brew upgrade pyenv
brew install pyenv-virtualenv
pyenv install $PY_VERSION

pyenv-virtualenv venv

pip3 install --upgrade pip
pip3 install -r dev-requirements.txt
python3 --version
pip3 --version
python3 setup.py install
python3 setup.py bdist_wheel
python3 -m nose cbitstruct
ls dist/
