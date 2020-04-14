{{cookiecutter.library_name}} - {{cookiecutter.short_description}}
===============================================

{{cookiecutter.short_description}}

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

.. |docs| image:: https://readthedocs.org/projects/{{ cookiecutter.repo_name }}/badge/?style=flat
    :target: https://readthedocs.org/projects/{{ cookiecutter.repo_name|replace('.', '') }}
    :alt: Documentation Status
{{ '' }}
{%- if cookiecutter.travis == 'yes' %}
.. |travis| image:: https://travis-ci.org/{{ cookiecutter.github_username }}/{{ cookiecutter.repo_name }}.svg?branch=master
    :alt: Travis-CI Build Status
    :target: https://travis-ci.org/{{ cookiecutter.github_username }}/{{ cookiecutter.repo_name }}
{% endif %}
{%- if cookiecutter.appveyor == 'yes' %}
.. |appveyor| image:: https://ci.appveyor.com/api/projects/status/github/{{ cookiecutter.github_username }}/{{ cookiecutter.repo_name }}?branch=master&svg=true
    :alt: AppVeyor Build Status
    :target: https://ci.appveyor.com/project/{{ cookiecutter.github_username }}/{{ cookiecutter.repo_name }}
{% endif %}
{%- if cookiecutter.requiresio == 'yes' %}
.. |requires| image:: https://requires.io/github/{{ cookiecutter.github_username }}/{{ cookiecutter.repo_name }}/requirements.svg?branch=master
    :alt: Requirements Status
    :target: https://requires.io/github/{{ cookiecutter.github_username }}/{{ cookiecutter.repo_name }}/requirements/?branch=master
{% endif %}
{%- if cookiecutter.coveralls == 'yes' %}
.. |coveralls| image:: https://coveralls.io/repos/{{ cookiecutter.github_username }}/{{ cookiecutter.repo_name }}/badge.svg?branch=master&service=github
    :alt: Coverage Status
    :target: https://coveralls.io/r/{{ cookiecutter.github_username }}/{{ cookiecutter.repo_name }}
{% endif %}
{%- if cookiecutter.codecov == 'yes' %}
.. |codecov| image:: https://codecov.io/github/{{ cookiecutter.github_username }}/{{ cookiecutter.repo_name }}/coverage.svg?branch=master
    :alt: Coverage Status
    :target: https://codecov.io/github/{{ cookiecutter.github_username }}/{{ cookiecutter.repo_name }}
{% endif %}
{%- if cookiecutter.landscape == 'yes' %}
.. |landscape| image:: https://landscape.io/github/{{ cookiecutter.github_username }}/{{ cookiecutter.repo_name }}/master/landscape.svg?style=flat
    :target: https://landscape.io/github/{{ cookiecutter.github_username }}/{{ cookiecutter.repo_name }}/master
    :alt: Code Quality Status
{% endif %}
{%- if cookiecutter.codacy == 'yes' %}
.. |codacy| image:: https://img.shields.io/codacy/REPLACE_WITH_PROJECT_ID.svg
    :target: https://www.codacy.com/app/{{ cookiecutter.github_username }}/{{ cookiecutter.repo_name }}
    :alt: Codacy Code Quality Status
{% endif %}
{%- if cookiecutter.codeclimate == 'yes' %}
.. |codeclimate| image:: https://codeclimate.com/github/{{ cookiecutter.github_username }}/{{ cookiecutter.repo_name }}/badges/gpa.svg
   :target: https://codeclimate.com/github/{{ cookiecutter.github_username }}/{{ cookiecutter.repo_name }}
   :alt: CodeClimate Quality Status
{% endif %}

.. |commits-since| image:: https://img.shields.io/github/commits-since/{{ cookiecutter.github_username }}/{{ cookiecutter.repo_name }}/v{{ cookiecutter.version }}.svg
    :alt: Commits since latest release
    :target: https://github.com/{{ cookiecutter.github_username }}/{{ cookiecutter.repo_name }}/compare/v{{ cookiecutter.version }}...master

{% if cookiecutter.scrutinizer == 'yes' %}
.. |scrutinizer| image:: https://img.shields.io/scrutinizer/g/{{ cookiecutter.github_username }}/{{ cookiecutter.repo_name }}/master.svg
    :alt: Scrutinizer Status
    :target: https://scrutinizer-ci.com/g/{{ cookiecutter.github_username }}/{{ cookiecutter.repo_name }}/
{% endif %}

.. end-badges

{{ cookiecutter.short_description|wordwrap(119) }}

* {{ cookiecutter.license }}

Getting Started
---------------

These instructions will get you a copy of the project up and running on
your local machine for development and testing purposes. See deployment
for notes on how to deploy the project on a live system.

Prerequisites
~~~~~~~~~~~~~

What things you need to install the software and how to install them

::

    Give examples

Installing
~~~~~~~~~~

A step by step series of examples that tell you how to get a development
env running

Say what the step will be

::

    Give the example

And repeat

::

    until finished

End with an example of getting some data out of the system or using it
for a little demo

Running the tests
-----------------

Explain how to run the automated tests for this system

Break down into end to end tests
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Explain what these tests test and why

::

    Give an example

And coding style tests
~~~~~~~~~~~~~~~~~~~~~~

Explain what these tests test and why

::

    Give an example

Deployment
----------

Add additional notes about how to deploy this on a live system

Contributing
------------

Please read [CONTRIBUTING.rst] for details on our code of conduct, and
the process for submitting pull requests to us.

Versioning
----------

We use `SemVer <http://semver.org/>`__ for versioning and `bumpversion 
<https://asciinema.org/a/3828>`__. For the versions available, see the `tags on this
repository <https://github.com/{{cookiecutter.github_username}}/{{cookiecutter.repo_name}}/tags>`__.

Authors
-------

-  **{{cookiecutter.full_name}}** - *Initial work*

See also the list of
`contributors <https://github.com/{{cookiecutter.github_username}}/{{cookiecutter.repo_name}}/contributors>`__
who participated in this cookiecutter.

License
-------

This project is licensed under the {{cookiecutter.license}} - see the
`LICENSE <LICENSE>`__ file for details

Acknowledgments
---------------


