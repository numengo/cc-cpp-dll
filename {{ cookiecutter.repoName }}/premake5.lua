dofile (path.join(os.getenv("DIR_SCRIPTS_ROOT"),"premake5_common.lua"))

workspace "{{cookiecutter.name}}" 

    SolutionConfiguration()
    defines {
        {% for dep in cookiecutter.deps.split(',') %}
        "{{dep|upper|replace(' ','_')|replace('-','_')}}_USE_DYN",
        {% endfor %}
        "{{cookiecutter.macroPrefix}}_USE_DYN"
    }
    local _exportSymbol = "{{cookiecutter.macroPrefix}}_MAKE_DLL"
    links { 
        "{{cookiecutter.deps}}"
    }
    
    -- PROTECTED REGION ID({{cookiecutter.name}}.premake.solution) ENABLED START

    -- PROTECTED REGION END
    
    {% if cookiecutter.RlmLicFeature %}
    LicenseOptions()
    {% endif %}

project "{{cookiecutter.name}}"

    PrefilterSharedLibBuildOptions("{{cookiecutter.name}}")
    defines {_exportSymbol}
    
    -- PROTECTED REGION ID({{cookiecutter.name}}.premake.sharedlib) ENABLED START

    -- PROTECTED REGION END

    FilterSharedLibBuildOptions("{{cookiecutter.name}}")


project "test_{{cookiecutter.name}}"

    PrefilterTestBuildOptions("test_{{cookiecutter.name}}")
    links { "{{cookiecutter.name}}"}
    
    -- PROTECTED REGION ID({{cookiecutter.name}}.premake.test) ENABLED START

    -- PROTECTED REGION END

    FilterTestBuildOptions("test_{{cookiecutter.name}}")
