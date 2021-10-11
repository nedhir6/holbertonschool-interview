#!/usr/bin/python3
"""UTF8 validator"""


def validUTF8(data):
    """method that determines if a given data set
    represents a valid UTF-8 encoding
    data: list of integers"""
    try:
        bytes([i & 255 for i in data]).decode('utf-8')
        return True
    except UnicodeDecodeError:
        return False
