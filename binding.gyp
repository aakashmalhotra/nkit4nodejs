{
    'includes': ['deps/common.gypi'],
    "targets": [
        {
            "target_name": "nkit4nodejs",
            "sources": [
                "src/nkit4nodejs_module.cpp",
                "src/xml2var_builder_wrapper.cpp",
                "src/xml2var_builder_wrapper.h",
                "src/anyxml2var_builder_wrapper.cpp",
                "src/anyxml2var_builder_wrapper.h",
                "src/v8_var_policy.cpp",
                "src/v8_var_policy.h"
            ],
            "include_dirs": [
                "deps/include",
                "deps/nan",
                'deps/nkit/src',
            ],
            'dependencies': [
                'deps/expat.gyp:expat',
                'deps/yajl.gyp:yajl',
                'deps/nkit.gyp:nkit',
            ],
        }
    ]
}
