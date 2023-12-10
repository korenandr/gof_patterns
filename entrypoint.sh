#!/bin/bash

# Trigger an error if non-zero exit code is encountered
set -e

# Decide what is to replace this process
if [ "${1}" == "-h" ] || [ "${1}" == "--help" ] || [ "${1}" == "-p" ] || [ "${1}" == "--pattern" ] ; then
    exec gof-patterns -l /usr/local/var/log4cplus_properties.ini "${@}"
else
    # An unknown command (debugging the container?): Forward as is
    exec "${@}"
fi