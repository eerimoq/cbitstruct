#!/bin/bash

docker pull $DOCKER_IMAGE
docker run --rm -e PLAT=$PLAT -v `pwd`:/io $DOCKER_IMAGE $PRE_CMD /io/travis/build-manylinux-docker.sh
ls wheelhouse/
