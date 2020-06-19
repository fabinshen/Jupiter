add_library(JupiterApi SHARED JupiterApi.cpp KMPSearch.cpp)

set_target_properties(JupiterApi PROPERTIES
   VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}
   SOVERSION ${VERSION_MAJOR})

install(TARGETS JupiterApi
   LIBRARY
   DESTINATION lib
   COMPONENT Libraries)

