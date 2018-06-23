#ifndef VERSION_S_H
#define VERSION_S_H

#define RC_FILENAME "{{cookiecutter.name}}\0"
#define RC_DESCRIPTION_STRING "{{cookiecutter.shortDescription}}\0"
#define RC_FILEVERSION_STRING "{cookiecutter.version}\0"

#define RC_PRODUCTNAME_STRING "{{cookiecutter.name}}\0"
#define RC_PRODUCTVERSION_STRING "0,0,0,0"

#define RC_COMPANYNAME "{{cookiecutter.website}}\0"
#define RC_COPYRIGHT_STRING "Copyright (C) {{cookiecutter.year}} {{cookiecutter.authorName}}\0"

#endif //VERSION_S_H
