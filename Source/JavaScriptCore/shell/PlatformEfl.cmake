LIST(APPEND JSC_LIBRARIES
    ${GLIB_LIBRARIES}
    ${ECORE_LIBRARIES}
    ${CMAKE_DL_LIBS}
)

LIST(APPEND JSC_LINK_FLAGS
    ${ECORE_LDFLAGS}
)
