dofile (path.join(os.getenv("DIR_SCRIPTS_ROOT"),"premake5_common.lua"))

workspace "{{cookiecutter.library_name}}"

    SolutionConfiguration()
    defines {
        {% for dep in cookiecutter.dependencies.split(',') %}
        "{{dep|upper|replace(' ','_')|replace('-','_')}}_USE_DYN",
        {% endfor %}
        "{{cookiecutter.macro_prefix}}_USE_DYN"
    }
    local _exportSymbol = "{{cookiecutter.macro_prefix}}_MAKE_DLL"
    links { 
        "{{cookiecutter.dependencies}}"
    }
    
    -- PROTECTED REGION ID({{cookiecutter.library_name}}.premake.solution) ENABLED START

    -- PROTECTED REGION END
    
    {% if cookiecutter.rlm_lic_feature %}
    LicenseOptions()
    {% endif %}

project "{{cookiecutter.library_name}}"

    PrefilterSharedLibBuildOptions("{{cookiecutter.library_name}}")
    defines {_exportSymbol}
    
    -- PROTECTED REGION ID({{cookiecutter.library_name}}.premake.sharedlib) ENABLED START

    -- PROTECTED REGION END

    FilterSharedLibBuildOptions("{{cookiecutter.library_name}}")


project "test_{{cookiecutter.library_name}}"

    PrefilterTestBuildOptions("test_{{cookiecutter.library_name}}")
    links { "{{cookiecutter.library_name}}"}
    
    -- PROTECTED REGION ID({{cookiecutter.library_name}}.premake.test) ENABLED START

    -- PROTECTED REGION END

    FilterTestBuildOptions("test_{{cookiecutter.library_name}}")
