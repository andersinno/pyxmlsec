typedef struct {
    PyObject_HEAD
    xmlSecEncCtxPtr obj;
} xmlSecEncCtxPtr_object;

#define xmlSecEncCtxPtr_get(v) (((v) == Py_None) ? NULL : (((xmlSecEncCtxPtr_object *)(PyObject_GetAttr(v, PyString_FromString("_o"))))->obj))

PyObject *wrap_xmlSecEncCtxPtr(xmlSecEncCtxPtr ctx);

PyObject *xmlsec_EncCtxCreate(PyObject *self, PyObject *args);
PyObject *xmlsec_EncCtxDestroy(PyObject *self, PyObject *args);
PyObject *xmlsec_EncCtxInitialize(PyObject *self, PyObject *args);
PyObject *xmlsec_EncCtxFinalize(PyObject *self, PyObject *args);
PyObject *xmlsec_EncCtxCopyUserPref(PyObject *self, PyObject *args);
PyObject *xmlsec_EncCtxReset(PyObject *self, PyObject *args);
PyObject *xmlsec_EncCtxBinaryEncrypt(PyObject *self, PyObject *args);
PyObject *xmlsec_EncCtxXmlEncrypt(PyObject *self, PyObject *args);
PyObject *xmlsec_EncCtxUriEncrypt(PyObject *self, PyObject *args);
PyObject *xmlsec_EncCtxDecrypt(PyObject *self, PyObject *args);
PyObject *xmlsec_EncCtxDecryptToBuffer(PyObject *self, PyObject *args);
PyObject *xmlsec_EncCtxDebugDump(PyObject *self, PyObject *args);
PyObject *xmlsec_EncCtxDebugXmlDump(PyObject *self, PyObject *args);

PyObject *xmlenc_set_encKey(PyObject *self, PyObject *args);
PyObject *xmlenc_get_result(PyObject *self, PyObject *args);
PyObject *xmlenc_get_resultBase64Encoded(PyObject *self, PyObject *args);
PyObject *xmlenc_get_resultReplaced(PyObject *self, PyObject *args);
