from setuptools import find_packages
from setuptools import setup

setup(
    name='server_to_fms',
    version='0.0.0',
    packages=find_packages(
        include=('server_to_fms', 'server_to_fms.*')),
)
