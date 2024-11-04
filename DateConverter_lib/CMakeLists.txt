project(DateConverter_lib)



set(HEADER_FILES
       testhead.h
        )

set(SOURCE_FILES
        testc.c
        )

add_library(DateConverter_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})


