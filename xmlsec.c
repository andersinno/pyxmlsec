/* $Id$ 
 *
 * PyXMLSec -- Python bindings for XML Security library (XMLSec)
 *
 * Copyright (C) 2003
 * http://pyxmlsec.labs.libre-entreprise.org
 * 
 * Author: Valery Febvre <vfebvre@easter-eggs.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "xmlsecmod.h"
#include "xmlsec.h"

PyObject *xmlsec_Init(PyObject *self, PyObject *args) {
  int result;
  result = xmlSecInit();
  if (result < 0) {
    PyErr_SetFromErrno(xmlsec_error);
  }
  return Py_BuildValue("i", result);
}

PyObject *xmlsec_Shutdown(PyObject *self, PyObject *args) {
  int result;
  result = xmlSecShutdown();
  if (result < 0) {
    PyErr_SetFromErrno(xmlsec_error);
  }
  return Py_BuildValue("i", result);
}

PyObject *xmlsec_CheckVersionExact(PyObject *self, PyObject *args) {
  return Py_BuildValue("i", xmlSecCheckVersionExact());
}

PyObject *xmlsec_CheckVersion(PyObject *self, PyObject *args) {
  return Py_BuildValue("i", xmlSecCheckVersion());
}
