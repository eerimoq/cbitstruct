/*[clinic input]
preserve
[clinic start generated code]*/

PyDoc_STRVAR(CompiledFormat___init____doc__,
"CompiledFormat(fmt)\n"
"--\n"
"\n"
"Create a compiled bitstruct object.\n"
"\n"
"Return a new CompiledFormat object which writes and reads binary data\n"
"according to the format string.");

static int
CompiledFormat___init___impl(PyCompiledFormatObject *self, const char *fmt);

static int
CompiledFormat___init__(PyObject *self, PyObject *args, PyObject *kwargs)
{
    int return_value = -1;
    static const char * const _keywords[] = {"fmt", NULL};
    static _PyArg_Parser _parser = {"s:CompiledFormat", _keywords, 0};
    const char *fmt;

    if (!_PyArg_ParseTupleAndKeywordsFast(args, kwargs, &_parser,
        &fmt)) {
        goto exit;
    }
    return_value = CompiledFormat___init___impl((PyCompiledFormatObject *)self, fmt);

exit:
    return return_value;
}

PyDoc_STRVAR(CompiledFormat_calcsize__doc__,
"calcsize($self, /)\n"
"--\n"
"\n"
"Return size in bits of the bitDescribed by the format string.");

#define COMPILEDFORMAT_CALCSIZE_METHODDEF    \
    {"calcsize", (PyCFunction)CompiledFormat_calcsize, METH_NOARGS, CompiledFormat_calcsize__doc__},

static Py_ssize_t
CompiledFormat_calcsize_impl(PyCompiledFormatObject *self);

static PyObject *
CompiledFormat_calcsize(PyCompiledFormatObject *self, PyObject *Py_UNUSED(ignored))
{
    PyObject *return_value = NULL;
    Py_ssize_t _return_value;

    _return_value = CompiledFormat_calcsize_impl(self);
    if ((_return_value == -1) && PyErr_Occurred()) {
        goto exit;
    }
    return_value = PyLong_FromSsize_t(_return_value);

exit:
    return return_value;
}

PyDoc_STRVAR(CompiledFormat_unpack__doc__,
"unpack($self, /, data)\n"
"--\n"
"\n"
"Return a tuple containing unpacked values.");

#define COMPILEDFORMAT_UNPACK_METHODDEF    \
    {"unpack", (PyCFunction)CompiledFormat_unpack, METH_FASTCALL, CompiledFormat_unpack__doc__},

static PyObject *
CompiledFormat_unpack_impl(PyCompiledFormatObject *self, Py_buffer *data);

static PyObject *
CompiledFormat_unpack(PyCompiledFormatObject *self, PyObject **args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"data", NULL};
    static _PyArg_Parser _parser = {"y*:unpack", _keywords, 0};
    Py_buffer data = {NULL, NULL};

    if (!_PyArg_ParseStack(args, nargs, kwnames, &_parser,
        &data)) {
        goto exit;
    }
    return_value = CompiledFormat_unpack_impl(self, &data);

exit:
    /* Cleanup for data */
    if (data.obj) {
       PyBuffer_Release(&data);
    }

    return return_value;
}

PyDoc_STRVAR(CompiledFormat_unpack_from__doc__,
"unpack_from($self, /, data, offset=0)\n"
"--\n"
"\n"
"Return a tuple containing unpacked values starting at \'offset\' bits.");

#define COMPILEDFORMAT_UNPACK_FROM_METHODDEF    \
    {"unpack_from", (PyCFunction)CompiledFormat_unpack_from, METH_FASTCALL, CompiledFormat_unpack_from__doc__},

static PyObject *
CompiledFormat_unpack_from_impl(PyCompiledFormatObject *self,
                                Py_buffer *data, Py_ssize_t offset);

static PyObject *
CompiledFormat_unpack_from(PyCompiledFormatObject *self, PyObject **args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"data", "offset", NULL};
    static _PyArg_Parser _parser = {"y*|n:unpack_from", _keywords, 0};
    Py_buffer data = {NULL, NULL};
    Py_ssize_t offset = 0;

    if (!_PyArg_ParseStack(args, nargs, kwnames, &_parser,
        &data, &offset)) {
        goto exit;
    }
    return_value = CompiledFormat_unpack_from_impl(self, &data, offset);

exit:
    /* Cleanup for data */
    if (data.obj) {
       PyBuffer_Release(&data);
    }

    return return_value;
}

PyDoc_STRVAR(CompiledFormatDict___init____doc__,
"CompiledFormatDict(fmt, names)\n"
"--\n"
"\n"
"Create a compiled bitstruct object.\n"
"\n"
"Return a new CompiledFormatDict object which writes and reads binary data\n"
"according to the format string. The names list \'name\' will be used\n"
"as keys in data dictionaries.");

static int
CompiledFormatDict___init___impl(PyCompiledFormatDictObject *self,
                                 const char *fmt, PyObject *names);

static int
CompiledFormatDict___init__(PyObject *self, PyObject *args, PyObject *kwargs)
{
    int return_value = -1;
    static const char * const _keywords[] = {"fmt", "names", NULL};
    static _PyArg_Parser _parser = {"sO:CompiledFormatDict", _keywords, 0};
    const char *fmt;
    PyObject *names;

    if (!_PyArg_ParseTupleAndKeywordsFast(args, kwargs, &_parser,
        &fmt, &names)) {
        goto exit;
    }
    return_value = CompiledFormatDict___init___impl((PyCompiledFormatDictObject *)self, fmt, names);

exit:
    return return_value;
}

PyDoc_STRVAR(CompiledFormatDict_pack__doc__,
"pack($self, /, data)\n"
"--\n"
"\n"
"Pack values from a dict into a bytes object\n"
"\n"
"Return a tuple containing unpacked values.\n"
"\'data\' is a dictionary containing values whic keys are the \'names\'\n"
"used when constructing this object.");

#define COMPILEDFORMATDICT_PACK_METHODDEF    \
    {"pack", (PyCFunction)CompiledFormatDict_pack, METH_FASTCALL, CompiledFormatDict_pack__doc__},

static PyObject *
CompiledFormatDict_pack_impl(PyCompiledFormatDictObject *self,
                             PyObject *data);

static PyObject *
CompiledFormatDict_pack(PyCompiledFormatDictObject *self, PyObject **args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"data", NULL};
    static _PyArg_Parser _parser = {"O:pack", _keywords, 0};
    PyObject *data;

    if (!_PyArg_ParseStack(args, nargs, kwnames, &_parser,
        &data)) {
        goto exit;
    }
    return_value = CompiledFormatDict_pack_impl(self, data);

exit:
    return return_value;
}

PyDoc_STRVAR(CompiledFormatDict_unpack__doc__,
"unpack($self, /, data)\n"
"--\n"
"\n"
"Unpack data into a dict which keys are the \'names\' used when constructing this object.\n"
"\n"
"Return a dict containing unpacked values.");

#define COMPILEDFORMATDICT_UNPACK_METHODDEF    \
    {"unpack", (PyCFunction)CompiledFormatDict_unpack, METH_FASTCALL, CompiledFormatDict_unpack__doc__},

static PyObject *
CompiledFormatDict_unpack_impl(PyCompiledFormatDictObject *self,
                               Py_buffer *data);

static PyObject *
CompiledFormatDict_unpack(PyCompiledFormatDictObject *self, PyObject **args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"data", NULL};
    static _PyArg_Parser _parser = {"y*:unpack", _keywords, 0};
    Py_buffer data = {NULL, NULL};

    if (!_PyArg_ParseStack(args, nargs, kwnames, &_parser,
        &data)) {
        goto exit;
    }
    return_value = CompiledFormatDict_unpack_impl(self, &data);

exit:
    /* Cleanup for data */
    if (data.obj) {
       PyBuffer_Release(&data);
    }

    return return_value;
}

PyDoc_STRVAR(CompiledFormatDict_unpack_from__doc__,
"unpack_from($self, /, data, offset=0)\n"
"--\n"
"\n"
"Unpack data into a dict starting at \'offset\' bits.\n"
"\n"
"Return a dict containing unpacked values.");

#define COMPILEDFORMATDICT_UNPACK_FROM_METHODDEF    \
    {"unpack_from", (PyCFunction)CompiledFormatDict_unpack_from, METH_FASTCALL, CompiledFormatDict_unpack_from__doc__},

static PyObject *
CompiledFormatDict_unpack_from_impl(PyCompiledFormatDictObject *self,
                                    Py_buffer *data, Py_ssize_t offset);

static PyObject *
CompiledFormatDict_unpack_from(PyCompiledFormatDictObject *self, PyObject **args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"data", "offset", NULL};
    static _PyArg_Parser _parser = {"y*|n:unpack_from", _keywords, 0};
    Py_buffer data = {NULL, NULL};
    Py_ssize_t offset = 0;

    if (!_PyArg_ParseStack(args, nargs, kwnames, &_parser,
        &data, &offset)) {
        goto exit;
    }
    return_value = CompiledFormatDict_unpack_from_impl(self, &data, offset);

exit:
    /* Cleanup for data */
    if (data.obj) {
       PyBuffer_Release(&data);
    }

    return return_value;
}

PyDoc_STRVAR(pack_dict__doc__,
"pack_dict($module, /, fmt, names, data)\n"
"--\n"
"\n"
"Pack the dict data into a bytes object according to format.\n"
"\n"
"The order of value is determines by the list \'names\'.");

#define PACK_DICT_METHODDEF    \
    {"pack_dict", (PyCFunction)pack_dict, METH_FASTCALL, pack_dict__doc__},

static PyObject *
pack_dict_impl(PyObject *module, const char *fmt, PyObject *names,
               PyObject *data);

static PyObject *
pack_dict(PyObject *module, PyObject **args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"fmt", "names", "data", NULL};
    static _PyArg_Parser _parser = {"sOO:pack_dict", _keywords, 0};
    const char *fmt;
    PyObject *names;
    PyObject *data;

    if (!_PyArg_ParseStack(args, nargs, kwnames, &_parser,
        &fmt, &names, &data)) {
        goto exit;
    }
    return_value = pack_dict_impl(module, fmt, names, data);

exit:
    return return_value;
}

PyDoc_STRVAR(unpack__doc__,
"unpack($module, /, fmt, data)\n"
"--\n"
"\n"
"Unpack data according to the format \'fmt\'. Returns a tuple.");

#define UNPACK_METHODDEF    \
    {"unpack", (PyCFunction)unpack, METH_FASTCALL, unpack__doc__},

static PyObject *
unpack_impl(PyObject *module, const char *fmt, Py_buffer *data);

static PyObject *
unpack(PyObject *module, PyObject **args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"fmt", "data", NULL};
    static _PyArg_Parser _parser = {"sy*:unpack", _keywords, 0};
    const char *fmt;
    Py_buffer data = {NULL, NULL};

    if (!_PyArg_ParseStack(args, nargs, kwnames, &_parser,
        &fmt, &data)) {
        goto exit;
    }
    return_value = unpack_impl(module, fmt, &data);

exit:
    /* Cleanup for data */
    if (data.obj) {
       PyBuffer_Release(&data);
    }

    return return_value;
}

PyDoc_STRVAR(unpack_from__doc__,
"unpack_from($module, /, fmt, data, offset=0)\n"
"--\n"
"\n"
"Unpack data according to the format \'fmt\', starting at bit offset \'offset.\n"
"\n"
"Returns a tuple.");

#define UNPACK_FROM_METHODDEF    \
    {"unpack_from", (PyCFunction)unpack_from, METH_FASTCALL, unpack_from__doc__},

static PyObject *
unpack_from_impl(PyObject *module, const char *fmt, Py_buffer *data,
                 Py_ssize_t offset);

static PyObject *
unpack_from(PyObject *module, PyObject **args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"fmt", "data", "offset", NULL};
    static _PyArg_Parser _parser = {"sy*|n:unpack_from", _keywords, 0};
    const char *fmt;
    Py_buffer data = {NULL, NULL};
    Py_ssize_t offset = 0;

    if (!_PyArg_ParseStack(args, nargs, kwnames, &_parser,
        &fmt, &data, &offset)) {
        goto exit;
    }
    return_value = unpack_from_impl(module, fmt, &data, offset);

exit:
    /* Cleanup for data */
    if (data.obj) {
       PyBuffer_Release(&data);
    }

    return return_value;
}

PyDoc_STRVAR(unpack_dict__doc__,
"unpack_dict($module, /, fmt, names, data)\n"
"--\n"
"\n"
"Unpack data according to \'fmt\'.\n"
"\n"
"Returns a dict which keys are \'names\'.");

#define UNPACK_DICT_METHODDEF    \
    {"unpack_dict", (PyCFunction)unpack_dict, METH_FASTCALL, unpack_dict__doc__},

static PyObject *
unpack_dict_impl(PyObject *module, const char *fmt, PyObject *names,
                 Py_buffer *data);

static PyObject *
unpack_dict(PyObject *module, PyObject **args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"fmt", "names", "data", NULL};
    static _PyArg_Parser _parser = {"sOy*:unpack_dict", _keywords, 0};
    const char *fmt;
    PyObject *names;
    Py_buffer data = {NULL, NULL};

    if (!_PyArg_ParseStack(args, nargs, kwnames, &_parser,
        &fmt, &names, &data)) {
        goto exit;
    }
    return_value = unpack_dict_impl(module, fmt, names, &data);

exit:
    /* Cleanup for data */
    if (data.obj) {
       PyBuffer_Release(&data);
    }

    return return_value;
}

PyDoc_STRVAR(unpack_from_dict__doc__,
"unpack_from_dict($module, /, fmt, names, data, offset=0)\n"
"--\n"
"\n"
"Unpack data according to \'fmt\' starting at bit offset \'offset\'.\n"
"\n"
"Returns a dict which keys are \'names\'.");

#define UNPACK_FROM_DICT_METHODDEF    \
    {"unpack_from_dict", (PyCFunction)unpack_from_dict, METH_FASTCALL, unpack_from_dict__doc__},

static PyObject *
unpack_from_dict_impl(PyObject *module, const char *fmt, PyObject *names,
                      Py_buffer *data, Py_ssize_t offset);

static PyObject *
unpack_from_dict(PyObject *module, PyObject **args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"fmt", "names", "data", "offset", NULL};
    static _PyArg_Parser _parser = {"sOy*|n:unpack_from_dict", _keywords, 0};
    const char *fmt;
    PyObject *names;
    Py_buffer data = {NULL, NULL};
    Py_ssize_t offset = 0;

    if (!_PyArg_ParseStack(args, nargs, kwnames, &_parser,
        &fmt, &names, &data, &offset)) {
        goto exit;
    }
    return_value = unpack_from_dict_impl(module, fmt, names, &data, offset);

exit:
    /* Cleanup for data */
    if (data.obj) {
       PyBuffer_Release(&data);
    }

    return return_value;
}

PyDoc_STRVAR(compile__doc__,
"compile($module, /, fmt, names=None)\n"
"--\n"
"\n"
"Returns a compiled object for the format \'fmt\'.");

#define COMPILE_METHODDEF    \
    {"compile", (PyCFunction)compile, METH_FASTCALL, compile__doc__},

static PyObject *
compile_impl(PyObject *module, const char *fmt, PyObject *names);

static PyObject *
compile(PyObject *module, PyObject **args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"fmt", "names", NULL};
    static _PyArg_Parser _parser = {"s|O:compile", _keywords, 0};
    const char *fmt;
    PyObject *names = Py_None;

    if (!_PyArg_ParseStack(args, nargs, kwnames, &_parser,
        &fmt, &names)) {
        goto exit;
    }
    return_value = compile_impl(module, fmt, names);

exit:
    return return_value;
}

PyDoc_STRVAR(calcsize__doc__,
"calcsize($module, /, fmt)\n"
"--\n"
"\n"
"Return size in bits of the bit described by the format string.");

#define CALCSIZE_METHODDEF    \
    {"calcsize", (PyCFunction)calcsize, METH_FASTCALL, calcsize__doc__},

static Py_ssize_t
calcsize_impl(PyObject *module, const char *fmt);

static PyObject *
calcsize(PyObject *module, PyObject **args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"fmt", NULL};
    static _PyArg_Parser _parser = {"s:calcsize", _keywords, 0};
    const char *fmt;
    Py_ssize_t _return_value;

    if (!_PyArg_ParseStack(args, nargs, kwnames, &_parser,
        &fmt)) {
        goto exit;
    }
    _return_value = calcsize_impl(module, fmt);
    if ((_return_value == -1) && PyErr_Occurred()) {
        goto exit;
    }
    return_value = PyLong_FromSsize_t(_return_value);

exit:
    return return_value;
}

PyDoc_STRVAR(byteswap__doc__,
"byteswap($module, /, fmt, data, offset=0)\n"
"--\n"
"\n"
"Swap bytes in `data` according to `fmt`, starting at byte `offset` and return the result.\n"
"\n"
"`fmt` must be an iterable, iterating over\n"
"number of bytes to swap. For example, the format string ``\'24\'``\n"
"applied to the bytes ``b\'\\x00\\x11\\x22\\x33\\x44\\x55\'`` will\n"
"produce the result ``b\'\\x11\\x00\\x55\\x44\\x33\\x22\'``.");

#define BYTESWAP_METHODDEF    \
    {"byteswap", (PyCFunction)byteswap, METH_FASTCALL, byteswap__doc__},

static PyObject *
byteswap_impl(PyObject *module, PyObject *fmt, Py_buffer *data,
              Py_ssize_t offset);

static PyObject *
byteswap(PyObject *module, PyObject **args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"fmt", "data", "offset", NULL};
    static _PyArg_Parser _parser = {"Oy*|n:byteswap", _keywords, 0};
    PyObject *fmt;
    Py_buffer data = {NULL, NULL};
    Py_ssize_t offset = 0;

    if (!_PyArg_ParseStack(args, nargs, kwnames, &_parser,
        &fmt, &data, &offset)) {
        goto exit;
    }
    return_value = byteswap_impl(module, fmt, &data, offset);

exit:
    /* Cleanup for data */
    if (data.obj) {
       PyBuffer_Release(&data);
    }

    return return_value;
}
/*[clinic end generated code: output=dcfb6ee6b91c44c1 input=a9049054013a1b77]*/
