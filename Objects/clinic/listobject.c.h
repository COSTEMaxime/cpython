/*[clinic input]
preserve
[clinic start generated code]*/

PyDoc_STRVAR(list_insert__doc__,
"insert($self, index, object, /)\n"
"--\n"
"\n"
"Insert object before index.");

#define LIST_INSERT_METHODDEF    \
    {"insert", (PyCFunction)list_insert, METH_FASTCALL, list_insert__doc__},

static PyObject *
list_insert_impl(PyListObject *self, Py_ssize_t index, PyObject *object);

static PyObject *
list_insert(PyListObject *self, PyObject **args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    Py_ssize_t index;
    PyObject *object;

    if (!_PyArg_NoStackKeywords("insert", kwnames)) {
        goto exit;
    }

    if (!_PyArg_ParseStack(args, nargs, "nO:insert",
        &index, &object)) {
        goto exit;
    }
    return_value = list_insert_impl(self, index, object);

exit:
    return return_value;
}

PyDoc_STRVAR(list_clear__doc__,
"clear($self, /)\n"
"--\n"
"\n"
"Remove all items from list.");

#define LIST_CLEAR_METHODDEF    \
    {"clear", (PyCFunction)list_clear, METH_NOARGS, list_clear__doc__},

static PyObject *
list_clear_impl(PyListObject *self);

static PyObject *
list_clear(PyListObject *self, PyObject *Py_UNUSED(ignored))
{
    return list_clear_impl(self);
}

PyDoc_STRVAR(list_copy__doc__,
"copy($self, /)\n"
"--\n"
"\n"
"Return a shallow copy of the list.");

#define LIST_COPY_METHODDEF    \
    {"copy", (PyCFunction)list_copy, METH_NOARGS, list_copy__doc__},

static PyObject *
list_copy_impl(PyListObject *self);

static PyObject *
list_copy(PyListObject *self, PyObject *Py_UNUSED(ignored))
{
    return list_copy_impl(self);
}

PyDoc_STRVAR(list_append__doc__,
"append($self, object, /)\n"
"--\n"
"\n"
"Append object to the end of the list.");

#define LIST_APPEND_METHODDEF    \
    {"append", (PyCFunction)list_append, METH_O, list_append__doc__},

PyDoc_STRVAR(list_extend__doc__,
"extend($self, iterable, /)\n"
"--\n"
"\n"
"Extend list by appending elements from the iterable.");

#define LIST_EXTEND_METHODDEF    \
    {"extend", (PyCFunction)list_extend, METH_O, list_extend__doc__},

PyDoc_STRVAR(list_pop__doc__,
"pop($self, index=-1, /)\n"
"--\n"
"\n"
"Remove and return item at index (default last).\n"
"\n"
"Raises IndexError if list is empty or index is out of range.");

#define LIST_POP_METHODDEF    \
    {"pop", (PyCFunction)list_pop, METH_FASTCALL, list_pop__doc__},

static PyObject *
list_pop_impl(PyListObject *self, Py_ssize_t index);

static PyObject *
list_pop(PyListObject *self, PyObject **args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    Py_ssize_t index = -1;

    if (!_PyArg_NoStackKeywords("pop", kwnames)) {
        goto exit;
    }

    if (!_PyArg_ParseStack(args, nargs, "|n:pop",
        &index)) {
        goto exit;
    }
    return_value = list_pop_impl(self, index);

exit:
    return return_value;
}

PyDoc_STRVAR(list_sort__doc__,
"sort($self, /, *, key=None, reverse=False)\n"
"--\n"
"\n"
"Stable sort *IN PLACE*.");

#define LIST_SORT_METHODDEF    \
    {"sort", (PyCFunction)list_sort, METH_FASTCALL, list_sort__doc__},

static PyObject *
list_sort_impl(PyListObject *self, PyObject *keyfunc, int reverse);

static PyObject *
list_sort(PyListObject *self, PyObject **args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"key", "reverse", NULL};
    static _PyArg_Parser _parser = {"|$Oi:sort", _keywords, 0};
    PyObject *keyfunc = Py_None;
    int reverse = 0;

    if (!_PyArg_ParseStackAndKeywords(args, nargs, kwnames, &_parser,
        &keyfunc, &reverse)) {
        goto exit;
    }
    return_value = list_sort_impl(self, keyfunc, reverse);

exit:
    return return_value;
}

PyDoc_STRVAR(list_reverse__doc__,
"reverse($self, /)\n"
"--\n"
"\n"
"Reverse *IN PLACE*.");

#define LIST_REVERSE_METHODDEF    \
    {"reverse", (PyCFunction)list_reverse, METH_NOARGS, list_reverse__doc__},

static PyObject *
list_reverse_impl(PyListObject *self);

static PyObject *
list_reverse(PyListObject *self, PyObject *Py_UNUSED(ignored))
{
    return list_reverse_impl(self);
}

PyDoc_STRVAR(list_index__doc__,
"index($self, value, start=0, stop=sys.maxsize, /)\n"
"--\n"
"\n"
"Return first index of value.\n"
"\n"
"Raises ValueError if the value is not present.");

#define LIST_INDEX_METHODDEF    \
    {"index", (PyCFunction)list_index, METH_FASTCALL, list_index__doc__},

static PyObject *
list_index_impl(PyListObject *self, PyObject *value, Py_ssize_t start,
                Py_ssize_t stop);

static PyObject *
list_index(PyListObject *self, PyObject **args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    PyObject *value;
    Py_ssize_t start = 0;
    Py_ssize_t stop = PY_SSIZE_T_MAX;

    if (!_PyArg_NoStackKeywords("index", kwnames)) {
        goto exit;
    }

    if (!_PyArg_ParseStack(args, nargs, "O|O&O&:index",
        &value, _PyEval_SliceIndexNotNone, &start, _PyEval_SliceIndexNotNone, &stop)) {
        goto exit;
    }
    return_value = list_index_impl(self, value, start, stop);

exit:
    return return_value;
}

PyDoc_STRVAR(list_count__doc__,
"count($self, value, /)\n"
"--\n"
"\n"
"Return number of occurrences of value.");

#define LIST_COUNT_METHODDEF    \
    {"count", (PyCFunction)list_count, METH_O, list_count__doc__},

PyDoc_STRVAR(list_remove__doc__,
"remove($self, value, /)\n"
"--\n"
"\n"
"Remove first occurrence of value.\n"
"\n"
"Raises ValueError if the value is not present.");

#define LIST_REMOVE_METHODDEF    \
    {"remove", (PyCFunction)list_remove, METH_O, list_remove__doc__},

PyDoc_STRVAR(list___init____doc__,
"list(iterable=(), /)\n"
"--\n"
"\n"
"Built-in mutable sequence.\n"
"\n"
"If no argument is given, the constructor creates a new empty list.\n"
"The argument must be an iterable if specified.");

static int
list___init___impl(PyListObject *self, PyObject *iterable);

static int
list___init__(PyObject *self, PyObject *args, PyObject *kwargs)
{
    int return_value = -1;
    PyObject *iterable = NULL;

    if ((Py_TYPE(self) == &PyList_Type) &&
        !_PyArg_NoKeywords("list", kwargs)) {
        goto exit;
    }
    if (!PyArg_UnpackTuple(args, "list",
        0, 1,
        &iterable)) {
        goto exit;
    }
    return_value = list___init___impl((PyListObject *)self, iterable);

exit:
    return return_value;
}

PyDoc_STRVAR(list___sizeof____doc__,
"__sizeof__($self, /)\n"
"--\n"
"\n"
"Return the size of the list in memory, in bytes.");

#define LIST___SIZEOF___METHODDEF    \
    {"__sizeof__", (PyCFunction)list___sizeof__, METH_NOARGS, list___sizeof____doc__},

static PyObject *
list___sizeof___impl(PyListObject *self);

static PyObject *
list___sizeof__(PyListObject *self, PyObject *Py_UNUSED(ignored))
{
    return list___sizeof___impl(self);
}

PyDoc_STRVAR(list___reversed____doc__,
"__reversed__($self, /)\n"
"--\n"
"\n"
"Return a reverse iterator over the list.");

#define LIST___REVERSED___METHODDEF    \
    {"__reversed__", (PyCFunction)list___reversed__, METH_NOARGS, list___reversed____doc__},

static PyObject *
list___reversed___impl(PyListObject *self);

static PyObject *
list___reversed__(PyListObject *self, PyObject *Py_UNUSED(ignored))
{
    return list___reversed___impl(self);
}
/*[clinic end generated code: output=63cbe6d6320e916f input=a9049054013a1b77]*/