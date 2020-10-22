# This file was automatically generated by SWIG (http://www.swig.org).
# Version 4.0.1
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

from sys import version_info as _swig_python_version_info
if _swig_python_version_info < (2, 7, 0):
    raise RuntimeError("Python 2.7 or later required")

# Import the low-level C/C++ module
if __package__ or "." in __name__:
    from . import _auto_ABReaction_vf
else:
    import _auto_ABReaction_vf

try:
    import builtins as __builtin__
except ImportError:
    import __builtin__

def _swig_repr(self):
    try:
        strthis = "proxy of " + self.this.__repr__()
    except __builtin__.Exception:
        strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)


def _swig_setattr_nondynamic_instance_variable(set):
    def set_instance_attr(self, name, value):
        if name == "thisown":
            self.this.own(value)
        elif name == "this":
            set(self, name, value)
        elif hasattr(self, name) and isinstance(getattr(type(self), name), property):
            set(self, name, value)
        else:
            raise AttributeError("You cannot add instance attributes to %s" % self)
    return set_instance_attr


def _swig_setattr_nondynamic_class_variable(set):
    def set_class_attr(cls, name, value):
        if hasattr(cls, name) and not isinstance(getattr(cls, name), property):
            set(cls, name, value)
        else:
            raise AttributeError("You cannot add class attributes to %s" % cls)
    return set_class_attr


def _swig_add_metaclass(metaclass):
    """Class decorator for adding a metaclass to a SWIG wrapped class - a slimmed down version of six.add_metaclass"""
    def wrapper(cls):
        return metaclass(cls.__name__, cls.__bases__, cls.__dict__.copy())
    return wrapper


class _SwigNonDynamicMeta(type):
    """Meta class to enforce nondynamic attributes (no new attributes) for a class"""
    __setattr__ = _swig_setattr_nondynamic_class_variable(type.__setattr__)



def Initialize():
    return _auto_ABReaction_vf.Initialize()

def SetData(ips, ilp, isw, isp, sjac, sflow, nsm, nmx, ndim, ntst, ncol, iad, epsl, epsu, epss, itmx, itnw, ds, dsmin, dsmax, npr, iid, nicp, icp, nuzr, iuz, vuz):
    return _auto_ABReaction_vf.SetData(ips, ilp, isw, isp, sjac, sflow, nsm, nmx, ndim, ntst, ncol, iad, epsl, epsu, epss, itmx, itnw, ds, dsmin, dsmax, npr, iid, nicp, icp, nuzr, iuz, vuz)

def SetInitPoint(u, npar, ipar, par, icp, nups, ups, udotps, rldot, adaptcycle):
    return _auto_ABReaction_vf.SetInitPoint(u, npar, ipar, par, icp, nups, ups, udotps, rldot, adaptcycle)

def Compute():
    return _auto_ABReaction_vf.Compute()

def ClearAll():
    return _auto_ABReaction_vf.ClearAll()

def getSolutionNum():
    return _auto_ABReaction_vf.getSolutionNum()

def getSolutionVar(A):
    return _auto_ABReaction_vf.getSolutionVar(A)

def getSolutionPar(A):
    return _auto_ABReaction_vf.getSolutionPar(A)

def getFloquetMultipliers(A):
    return _auto_ABReaction_vf.getFloquetMultipliers(A)

def getJacobians(A):
    return _auto_ABReaction_vf.getJacobians(A)

def getNumIters(A):
    return _auto_ABReaction_vf.getNumIters(A)

def getSpecPtNum():
    return _auto_ABReaction_vf.getSpecPtNum()

def getSpecPtDims(i, A):
    return _auto_ABReaction_vf.getSpecPtDims(i, A)

def getSpecPtFlags(i, A):
    return _auto_ABReaction_vf.getSpecPtFlags(i, A)

def getSpecPt_ups(i, A):
    return _auto_ABReaction_vf.getSpecPt_ups(i, A)

def getSpecPt_udotps(i, A):
    return _auto_ABReaction_vf.getSpecPt_udotps(i, A)

def getSpecPt_rldot(i, A):
    return _auto_ABReaction_vf.getSpecPt_rldot(i, A)

def getSpecPt_flow1(i, A):
    return _auto_ABReaction_vf.getSpecPt_flow1(i, A)

def getSpecPt_flow2(i, A):
    return _auto_ABReaction_vf.getSpecPt_flow2(i, A)


