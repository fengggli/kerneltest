#!/bin/bash
apt-get update
apt-get install -y wget git gcc libpciaccess-dev make libcunit1-dev pkg-config \
  linux-headers-`uname -r`
# optional
#
# apt-get install emacs elpa-company 
#
