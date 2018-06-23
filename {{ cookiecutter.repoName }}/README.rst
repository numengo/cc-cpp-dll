========
Overview
========

.. start-badges

.. list-table::
    :stub-columns: 1

    * - docs
      - |docs|
{{ '' }}
    * - package
      - | |version| |wheel| |supported-versions| |supported-implementations|
        | |commits-since|

.. |docs| image:: https://readthedocs.org/projects/{{ cookiecutter.repoName }}/badge/?style=flat
    :target: https://readthedocs.org/projects/{{ cookiecutter.repoName|replace('.', '') }}
    :alt: Documentation Status
{{ '' }}
{%- if cookiecutter.travis == 'yes' %}
.. |travis| image:: https://travis-ci.org/{{ cookiecutter.github_username }}/{{ cookiecutter.repoName }}.svg?branch=master
    :alt: Travis-CI Build Status
    :target: https://travis-ci.org/{{ cookiecutter.github_username }}/{{ cookiecutter.repoName }}
{% endif %}
{%- if cookiecutter.appveyor == 'yes' %}
.. |appveyor| image:: https://ci.appveyor.com/api/projects/status/github/{{ cookiecutter.github_username }}/{{ cookiecutter.repoName }}?branch=master&svg=true
    :alt: AppVeyor Build Status
    :target: https://ci.appveyor.com/project/{{ cookiecutter.githubUsername }}/{{ cookiecutter.repoName }}
{% endif %}
{%- if cookiecutter.requiresio == 'yes' %}
.. |requires| image:: https://requires.io/github/{{ cookiecutter.githubUsername }}/{{ cookiecutter.repoName }}/requirements.svg?branch=master
    :alt: Requirements Status
    :target: https://requires.io/github/{{ cookiecutter.githubUsername }}/{{ cookiecutter.repoName }}/requirements/?branch=master
{% endif %}
{%- if cookiecutter.coveralls == 'yes' %}
.. |coveralls| image:: https://coveralls.io/repos/{{ cookiecutter.githubUsername }}/{{ cookiecutter.repoName }}/badge.svg?branch=master&service=github
    :alt: Coverage Status
    :target: https://coveralls.io/r/{{ cookiecutter.githubUsername }}/{{ cookiecutter.repoName }}
{% endif %}
{%- if cookiecutter.codecov == 'yes' %}
.. |codecov| image:: https://codecov.io/github/{{ cookiecutter.githubUsername }}/{{ cookiecutter.repoName }}/coverage.svg?branch=master
    :alt: Coverage Status
    :target: https://codecov.io/github/{{ cookiecutter.githubUsername }}/{{ cookiecutter.repoName }}
{% endif %}
{%- if cookiecutter.landscape == 'yes' %}
.. |landscape| image:: https://landscape.io/github/{{ cookiecutter.githubUsername }}/{{ cookiecutter.repoName }}/master/landscape.svg?style=flat
    :target: https://landscape.io/github/{{ cookiecutter.githubUsername }}/{{ cookiecutter.repoName }}/master
    :alt: Code Quality Status
{% endif %}
{%- if cookiecutter.codacy == 'yes' %}
.. |codacy| image:: https://img.shields.io/codacy/REPLACE_WITH_PROJECT_ID.svg
    :target: https://www.codacy.com/app/{{ cookiecutter.githubUsername }}/{{ cookiecutter.repoName }}
    :alt: Codacy Code Quality Status
{% endif %}
{%- if cookiecutter.codeclimate == 'yes' %}
.. |codeclimate| image:: https://codeclimate.com/github/{{ cookiecutter.githubUsername }}/{{ cookiecutter.repoName }}/badges/gpa.svg
   :target: https://codeclimate.com/github/{{ cookiecutter.githubUsername }}/{{ cookiecutter.repoName }}
   :alt: CodeClimate Quality Status
{% endif %}

.. |commits-since| image:: https://img.shields.io/github/commits-since/{{ cookiecutter.githubUsername }}/{{ cookiecutter.repoName }}/v{{ cookiecutter.version }}.svg
    :alt: Commits since latest release
    :target: https://github.com/{{ cookiecutter.githubUsername }}/{{ cookiecutter.repoName }}/compare/v{{ cookiecutter.version }}...master

{% if cookiecutter.scrutinizer == 'yes' %}
.. |scrutinizer| image:: https://img.shields.io/scrutinizer/g/{{ cookiecutter.githubUsername }}/{{ cookiecutter.repoName }}/master.svg
    :alt: Scrutinizer Status
    :target: https://scrutinizer-ci.com/g/{{ cookiecutter.githubUsername }}/{{ cookiecutter.repoName }}/
{% endif %}

.. end-badges

{{ cookiecutter.shortDescription|wordwrap(119) }}

* Free software: {{ cookiecutter.license }}

Installation
============

::

    pip install {{ cookiecutter.distributionName }}

Documentation
=============

https://{{ cookiecutter.repoName|replace('.', '') }}.readthedocs.io/

Development
===========

To run the all tests run::

    tox

Note, to combine the coverage data from all the tox environments run:

.. list-table::
    :widths: 10 90
    :stub-columns: 1

    - - Windows
      - ::

            set PYTEST_ADDOPTS=--cov-append
            tox

    - - Other
      - ::

            PYTEST_ADDOPTS=--cov-append tox
