//================================================================================
// AKAZE (Generic)
//================================================================================

// GetSet (AKAZE)



// Methods (AKAZE)

static PyObject* pyopencv_cv_AKAZE_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    int descriptor_type=AKAZE::DESCRIPTOR_MLDB;
    int descriptor_size=0;
    int descriptor_channels=3;
    float threshold=0.001f;
    int nOctaves=4;
    int nOctaveLayers=4;
    int diffusivity=KAZE::DIFF_PM_G2;
    Ptr<AKAZE> retval;

    const char* keywords[] = { "descriptor_type", "descriptor_size", "descriptor_channels", "threshold", "nOctaves", "nOctaveLayers", "diffusivity", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|iiifiii:AKAZE.create", (char**)keywords, &descriptor_type, &descriptor_size, &descriptor_channels, &threshold, &nOctaves, &nOctaveLayers, &diffusivity) )
    {
        ERRWRAP2(retval = cv::AKAZE::create(descriptor_type, descriptor_size, descriptor_channels, threshold, nOctaves, nOctaveLayers, diffusivity));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getDefaultName(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    String retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getDescriptorChannels(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDescriptorChannels());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getDescriptorSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDescriptorSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getDescriptorType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDescriptorType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getDiffusivity(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDiffusivity());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getNOctaveLayers(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNOctaveLayers());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getNOctaves(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNOctaves());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_setDescriptorChannels(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    int dch=0;

    const char* keywords[] = { "dch", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:AKAZE.setDescriptorChannels", (char**)keywords, &dch) )
    {
        ERRWRAP2(_self_->setDescriptorChannels(dch));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_setDescriptorSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    int dsize=0;

    const char* keywords[] = { "dsize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:AKAZE.setDescriptorSize", (char**)keywords, &dsize) )
    {
        ERRWRAP2(_self_->setDescriptorSize(dsize));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_setDescriptorType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    int dtype=0;

    const char* keywords[] = { "dtype", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:AKAZE.setDescriptorType", (char**)keywords, &dtype) )
    {
        ERRWRAP2(_self_->setDescriptorType(dtype));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_setDiffusivity(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    int diff=0;

    const char* keywords[] = { "diff", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:AKAZE.setDiffusivity", (char**)keywords, &diff) )
    {
        ERRWRAP2(_self_->setDiffusivity(diff));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_setNOctaveLayers(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    int octaveLayers=0;

    const char* keywords[] = { "octaveLayers", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:AKAZE.setNOctaveLayers", (char**)keywords, &octaveLayers) )
    {
        ERRWRAP2(_self_->setNOctaveLayers(octaveLayers));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_setNOctaves(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    int octaves=0;

    const char* keywords[] = { "octaves", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:AKAZE.setNOctaves", (char**)keywords, &octaves) )
    {
        ERRWRAP2(_self_->setNOctaves(octaves));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_setThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    double threshold=0;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:AKAZE.setThreshold", (char**)keywords, &threshold) )
    {
        ERRWRAP2(_self_->setThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (AKAZE)

static PyGetSetDef pyopencv_AKAZE_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_AKAZE_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_create_static, METH_STATIC), "create([, descriptor_type[, descriptor_size[, descriptor_channels[, threshold[, nOctaves[, nOctaveLayers[, diffusivity]]]]]]]) -> retval\n.   @brief The AKAZE constructor\n.   \n.       @param descriptor_type Type of the extracted descriptor: DESCRIPTOR_KAZE,\n.       DESCRIPTOR_KAZE_UPRIGHT, DESCRIPTOR_MLDB or DESCRIPTOR_MLDB_UPRIGHT.\n.       @param descriptor_size Size of the descriptor in bits. 0 -\\> Full size\n.       @param descriptor_channels Number of channels in the descriptor (1, 2, 3)\n.       @param threshold Detector response threshold to accept point\n.       @param nOctaves Maximum octave evolution of the image\n.       @param nOctaveLayers Default number of sublevels per scale level\n.       @param diffusivity Diffusivity type. DIFF_PM_G1, DIFF_PM_G2, DIFF_WEICKERT or\n.       DIFF_CHARBONNIER"},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_getDefaultName, 0), "getDefaultName() -> retval\n."},
    {"getDescriptorChannels", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_getDescriptorChannels, 0), "getDescriptorChannels() -> retval\n."},
    {"getDescriptorSize", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_getDescriptorSize, 0), "getDescriptorSize() -> retval\n."},
    {"getDescriptorType", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_getDescriptorType, 0), "getDescriptorType() -> retval\n."},
    {"getDiffusivity", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_getDiffusivity, 0), "getDiffusivity() -> retval\n."},
    {"getNOctaveLayers", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_getNOctaveLayers, 0), "getNOctaveLayers() -> retval\n."},
    {"getNOctaves", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_getNOctaves, 0), "getNOctaves() -> retval\n."},
    {"getThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_getThreshold, 0), "getThreshold() -> retval\n."},
    {"setDescriptorChannels", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_setDescriptorChannels, 0), "setDescriptorChannels(dch) -> None\n."},
    {"setDescriptorSize", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_setDescriptorSize, 0), "setDescriptorSize(dsize) -> None\n."},
    {"setDescriptorType", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_setDescriptorType, 0), "setDescriptorType(dtype) -> None\n."},
    {"setDiffusivity", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_setDiffusivity, 0), "setDiffusivity(diff) -> None\n."},
    {"setNOctaveLayers", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_setNOctaveLayers, 0), "setNOctaveLayers(octaveLayers) -> None\n."},
    {"setNOctaves", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_setNOctaves, 0), "setNOctaves(octaves) -> None\n."},
    {"setThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_setThreshold, 0), "setThreshold(threshold) -> None\n."},

    {NULL,          NULL}
};

// Converter (AKAZE)

template<>
struct PyOpenCV_Converter< Ptr<cv::AKAZE> >
{
    static PyObject* from(const Ptr<cv::AKAZE>& r)
    {
        return pyopencv_AKAZE_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::AKAZE>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::AKAZE> * dst_;
        if (pyopencv_AKAZE_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::AKAZE> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// AgastFeatureDetector (Generic)
//================================================================================

// GetSet (AgastFeatureDetector)



// Methods (AgastFeatureDetector)

static PyObject* pyopencv_cv_AgastFeatureDetector_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    int threshold=10;
    bool nonmaxSuppression=true;
    int type=AgastFeatureDetector::OAST_9_16;
    Ptr<AgastFeatureDetector> retval;

    const char* keywords[] = { "threshold", "nonmaxSuppression", "type", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|ibi:AgastFeatureDetector.create", (char**)keywords, &threshold, &nonmaxSuppression, &type) )
    {
        ERRWRAP2(retval = cv::AgastFeatureDetector::create(threshold, nonmaxSuppression, type));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AgastFeatureDetector_getDefaultName(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AgastFeatureDetector> * self1 = 0;
    if (!pyopencv_AgastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AgastFeatureDetector' or its derivative)");
    Ptr<cv::AgastFeatureDetector> _self_ = *(self1);
    String retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AgastFeatureDetector_getNonmaxSuppression(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AgastFeatureDetector> * self1 = 0;
    if (!pyopencv_AgastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AgastFeatureDetector' or its derivative)");
    Ptr<cv::AgastFeatureDetector> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNonmaxSuppression());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AgastFeatureDetector_getThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AgastFeatureDetector> * self1 = 0;
    if (!pyopencv_AgastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AgastFeatureDetector' or its derivative)");
    Ptr<cv::AgastFeatureDetector> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AgastFeatureDetector_getType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AgastFeatureDetector> * self1 = 0;
    if (!pyopencv_AgastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AgastFeatureDetector' or its derivative)");
    Ptr<cv::AgastFeatureDetector> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AgastFeatureDetector_setNonmaxSuppression(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AgastFeatureDetector> * self1 = 0;
    if (!pyopencv_AgastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AgastFeatureDetector' or its derivative)");
    Ptr<cv::AgastFeatureDetector> _self_ = *(self1);
    bool f=0;

    const char* keywords[] = { "f", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:AgastFeatureDetector.setNonmaxSuppression", (char**)keywords, &f) )
    {
        ERRWRAP2(_self_->setNonmaxSuppression(f));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AgastFeatureDetector_setThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AgastFeatureDetector> * self1 = 0;
    if (!pyopencv_AgastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AgastFeatureDetector' or its derivative)");
    Ptr<cv::AgastFeatureDetector> _self_ = *(self1);
    int threshold=0;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:AgastFeatureDetector.setThreshold", (char**)keywords, &threshold) )
    {
        ERRWRAP2(_self_->setThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AgastFeatureDetector_setType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AgastFeatureDetector> * self1 = 0;
    if (!pyopencv_AgastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AgastFeatureDetector' or its derivative)");
    Ptr<cv::AgastFeatureDetector> _self_ = *(self1);
    int type=0;

    const char* keywords[] = { "type", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:AgastFeatureDetector.setType", (char**)keywords, &type) )
    {
        ERRWRAP2(_self_->setType(type));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (AgastFeatureDetector)

static PyGetSetDef pyopencv_AgastFeatureDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_AgastFeatureDetector_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_AgastFeatureDetector_create_static, METH_STATIC), "create([, threshold[, nonmaxSuppression[, type]]]) -> retval\n."},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_AgastFeatureDetector_getDefaultName, 0), "getDefaultName() -> retval\n."},
    {"getNonmaxSuppression", CV_PY_FN_WITH_KW_(pyopencv_cv_AgastFeatureDetector_getNonmaxSuppression, 0), "getNonmaxSuppression() -> retval\n."},
    {"getThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_AgastFeatureDetector_getThreshold, 0), "getThreshold() -> retval\n."},
    {"getType", CV_PY_FN_WITH_KW_(pyopencv_cv_AgastFeatureDetector_getType, 0), "getType() -> retval\n."},
    {"setNonmaxSuppression", CV_PY_FN_WITH_KW_(pyopencv_cv_AgastFeatureDetector_setNonmaxSuppression, 0), "setNonmaxSuppression(f) -> None\n."},
    {"setThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_AgastFeatureDetector_setThreshold, 0), "setThreshold(threshold) -> None\n."},
    {"setType", CV_PY_FN_WITH_KW_(pyopencv_cv_AgastFeatureDetector_setType, 0), "setType(type) -> None\n."},

    {NULL,          NULL}
};

// Converter (AgastFeatureDetector)

template<>
struct PyOpenCV_Converter< Ptr<cv::AgastFeatureDetector> >
{
    static PyObject* from(const Ptr<cv::AgastFeatureDetector>& r)
    {
        return pyopencv_AgastFeatureDetector_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::AgastFeatureDetector>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::AgastFeatureDetector> * dst_;
        if (pyopencv_AgastFeatureDetector_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::AgastFeatureDetector> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// Algorithm (Generic)
//================================================================================

// GetSet (Algorithm)



// Methods (Algorithm)

static PyObject* pyopencv_cv_Algorithm_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Algorithm> * self1 = 0;
    if (!pyopencv_Algorithm_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    Ptr<cv::Algorithm> _self_ = *(self1);

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_Algorithm_empty(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Algorithm> * self1 = 0;
    if (!pyopencv_Algorithm_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    Ptr<cv::Algorithm> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Algorithm_getDefaultName(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Algorithm> * self1 = 0;
    if (!pyopencv_Algorithm_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    Ptr<cv::Algorithm> _self_ = *(self1);
    String retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Algorithm_read(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Algorithm> * self1 = 0;
    if (!pyopencv_Algorithm_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    Ptr<cv::Algorithm> _self_ = *(self1);
    PyObject* pyobj_fn = NULL;
    FileNode fn;

    const char* keywords[] = { "fn", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Algorithm.read", (char**)keywords, &pyobj_fn) &&
        pyopencv_to(pyobj_fn, fn, ArgInfo("fn", 0)) )
    {
        ERRWRAP2(_self_->read(fn));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_Algorithm_save(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Algorithm> * self1 = 0;
    if (!pyopencv_Algorithm_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    Ptr<cv::Algorithm> _self_ = *(self1);
    PyObject* pyobj_filename = NULL;
    String filename;

    const char* keywords[] = { "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Algorithm.save", (char**)keywords, &pyobj_filename) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(_self_->save(filename));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_Algorithm_write(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Algorithm> * self1 = 0;
    if (!pyopencv_Algorithm_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    Ptr<cv::Algorithm> _self_ = *(self1);
    PyObject* pyobj_fs = NULL;
    Ptr<FileStorage> fs;
    PyObject* pyobj_name = NULL;
    String name;

    const char* keywords[] = { "fs", "name", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:Algorithm.write", (char**)keywords, &pyobj_fs, &pyobj_name) &&
        pyopencv_to(pyobj_fs, fs, ArgInfo("fs", 0)) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) )
    {
        ERRWRAP2(_self_->write(fs, name));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (Algorithm)

static PyGetSetDef pyopencv_Algorithm_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_Algorithm_methods[] =
{
    {"clear", CV_PY_FN_WITH_KW_(pyopencv_cv_Algorithm_clear, 0), "clear() -> None\n.   @brief Clears the algorithm state"},
    {"empty", CV_PY_FN_WITH_KW_(pyopencv_cv_Algorithm_empty, 0), "empty() -> retval\n.   @brief Returns true if the Algorithm is empty (e.g. in the very beginning or after unsuccessful read"},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_Algorithm_getDefaultName, 0), "getDefaultName() -> retval\n.   Returns the algorithm string identifier.\n.   This string is used as top level xml/yml node tag when the object is saved to a file or string."},
    {"read", CV_PY_FN_WITH_KW_(pyopencv_cv_Algorithm_read, 0), "read(fn) -> None\n.   @brief Reads algorithm parameters from a file storage"},
    {"save", CV_PY_FN_WITH_KW_(pyopencv_cv_Algorithm_save, 0), "save(filename) -> None\n.   Saves the algorithm to a file.\n.   In order to make this method work, the derived class must implement Algorithm::write(FileStorage& fs)."},
    {"write", CV_PY_FN_WITH_KW_(pyopencv_cv_Algorithm_write, 0), "write(fs[, name]) -> None\n.   @brief simplified API for language bindings\n.       * @overload"},

    {NULL,          NULL}
};

// Converter (Algorithm)

template<>
struct PyOpenCV_Converter< Ptr<cv::Algorithm> >
{
    static PyObject* from(const Ptr<cv::Algorithm>& r)
    {
        return pyopencv_Algorithm_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::Algorithm>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::Algorithm> * dst_;
        if (pyopencv_Algorithm_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::Algorithm> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// BFMatcher (Generic)
//================================================================================

// GetSet (BFMatcher)



// Methods (BFMatcher)

static int pyopencv_cv_BFMatcher_BFMatcher(pyopencv_BFMatcher_t* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    int normType=NORM_L2;
    bool crossCheck=false;

    const char* keywords[] = { "normType", "crossCheck", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|ib:BFMatcher", (char**)keywords, &normType, &crossCheck) )
    {
        new (&(self->v)) Ptr<cv::BFMatcher>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::BFMatcher(normType, crossCheck)));
        return 0;
    }

    return -1;
}

static PyObject* pyopencv_cv_BFMatcher_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    int normType=NORM_L2;
    bool crossCheck=false;
    Ptr<BFMatcher> retval;

    const char* keywords[] = { "normType", "crossCheck", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|ib:BFMatcher.create", (char**)keywords, &normType, &crossCheck) )
    {
        ERRWRAP2(retval = cv::BFMatcher::create(normType, crossCheck));
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (BFMatcher)

static PyGetSetDef pyopencv_BFMatcher_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_BFMatcher_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_BFMatcher_create_static, METH_STATIC), "create([, normType[, crossCheck]]) -> retval\n.   @brief Brute-force matcher create method.\n.       @param normType One of NORM_L1, NORM_L2, NORM_HAMMING, NORM_HAMMING2. L1 and L2 norms are\n.       preferable choices for SIFT and SURF descriptors, NORM_HAMMING should be used with ORB, BRISK and\n.       BRIEF, NORM_HAMMING2 should be used with ORB when WTA_K==3 or 4 (see ORB::ORB constructor\n.       description).\n.       @param crossCheck If it is false, this is will be default BFMatcher behaviour when it finds the k\n.       nearest neighbors for each query descriptor. If crossCheck==true, then the knnMatch() method with\n.       k=1 will only return pairs (i,j) such that for i-th query descriptor the j-th descriptor in the\n.       matcher's collection is the nearest and vice versa, i.e. the BFMatcher will only return consistent\n.       pairs. Such technique usually produces best results with minimal number of outliers when there are\n.       enough matches. This is alternative to the ratio test, used by D. Lowe in SIFT paper."},

    {NULL,          NULL}
};

// Converter (BFMatcher)

template<>
struct PyOpenCV_Converter< Ptr<cv::BFMatcher> >
{
    static PyObject* from(const Ptr<cv::BFMatcher>& r)
    {
        return pyopencv_BFMatcher_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::BFMatcher>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::BFMatcher> * dst_;
        if (pyopencv_BFMatcher_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::BFMatcher> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// BOWImgDescriptorExtractor (Generic)
//================================================================================

// GetSet (BOWImgDescriptorExtractor)



// Methods (BOWImgDescriptorExtractor)

static int pyopencv_cv_BOWImgDescriptorExtractor_BOWImgDescriptorExtractor(pyopencv_BOWImgDescriptorExtractor_t* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_dextractor = NULL;
    Ptr<DescriptorExtractor> dextractor;
    PyObject* pyobj_dmatcher = NULL;
    Ptr<DescriptorMatcher> dmatcher;

    const char* keywords[] = { "dextractor", "dmatcher", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:BOWImgDescriptorExtractor", (char**)keywords, &pyobj_dextractor, &pyobj_dmatcher) &&
        pyopencv_to(pyobj_dextractor, dextractor, ArgInfo("dextractor", 0)) &&
        pyopencv_to(pyobj_dmatcher, dmatcher, ArgInfo("dmatcher", 0)) )
    {
        new (&(self->v)) Ptr<cv::BOWImgDescriptorExtractor>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::BOWImgDescriptorExtractor(dextractor, dmatcher)));
        return 0;
    }

    return -1;
}

static PyObject* pyopencv_cv_BOWImgDescriptorExtractor_compute(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BOWImgDescriptorExtractor> * self1 = 0;
    if (!pyopencv_BOWImgDescriptorExtractor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BOWImgDescriptorExtractor' or its derivative)");
    Ptr<cv::BOWImgDescriptorExtractor> _self_ = *(self1);
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_keypoints = NULL;
    vector_KeyPoint keypoints;
    PyObject* pyobj_imgDescriptor = NULL;
    Mat imgDescriptor;

    const char* keywords[] = { "image", "keypoints", "imgDescriptor", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:BOWImgDescriptorExtractor.compute", (char**)keywords, &pyobj_image, &pyobj_keypoints, &pyobj_imgDescriptor) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_keypoints, keypoints, ArgInfo("keypoints", 0)) &&
        pyopencv_to(pyobj_imgDescriptor, imgDescriptor, ArgInfo("imgDescriptor", 1)) )
    {
        ERRWRAP2(_self_->compute2(image, keypoints, imgDescriptor));
        return pyopencv_from(imgDescriptor);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_keypoints = NULL;
    vector_KeyPoint keypoints;
    PyObject* pyobj_imgDescriptor = NULL;
    Mat imgDescriptor;

    const char* keywords[] = { "image", "keypoints", "imgDescriptor", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:BOWImgDescriptorExtractor.compute", (char**)keywords, &pyobj_image, &pyobj_keypoints, &pyobj_imgDescriptor) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_keypoints, keypoints, ArgInfo("keypoints", 0)) &&
        pyopencv_to(pyobj_imgDescriptor, imgDescriptor, ArgInfo("imgDescriptor", 1)) )
    {
        ERRWRAP2(_self_->compute2(image, keypoints, imgDescriptor));
        return pyopencv_from(imgDescriptor);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWImgDescriptorExtractor_descriptorSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BOWImgDescriptorExtractor> * self1 = 0;
    if (!pyopencv_BOWImgDescriptorExtractor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BOWImgDescriptorExtractor' or its derivative)");
    Ptr<cv::BOWImgDescriptorExtractor> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->descriptorSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWImgDescriptorExtractor_descriptorType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BOWImgDescriptorExtractor> * self1 = 0;
    if (!pyopencv_BOWImgDescriptorExtractor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BOWImgDescriptorExtractor' or its derivative)");
    Ptr<cv::BOWImgDescriptorExtractor> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->descriptorType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWImgDescriptorExtractor_getVocabulary(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BOWImgDescriptorExtractor> * self1 = 0;
    if (!pyopencv_BOWImgDescriptorExtractor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BOWImgDescriptorExtractor' or its derivative)");
    Ptr<cv::BOWImgDescriptorExtractor> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVocabulary());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWImgDescriptorExtractor_setVocabulary(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BOWImgDescriptorExtractor> * self1 = 0;
    if (!pyopencv_BOWImgDescriptorExtractor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BOWImgDescriptorExtractor' or its derivative)");
    Ptr<cv::BOWImgDescriptorExtractor> _self_ = *(self1);
    {
    PyObject* pyobj_vocabulary = NULL;
    Mat vocabulary;

    const char* keywords[] = { "vocabulary", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:BOWImgDescriptorExtractor.setVocabulary", (char**)keywords, &pyobj_vocabulary) &&
        pyopencv_to(pyobj_vocabulary, vocabulary, ArgInfo("vocabulary", 0)) )
    {
        ERRWRAP2(_self_->setVocabulary(vocabulary));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_vocabulary = NULL;
    Mat vocabulary;

    const char* keywords[] = { "vocabulary", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:BOWImgDescriptorExtractor.setVocabulary", (char**)keywords, &pyobj_vocabulary) &&
        pyopencv_to(pyobj_vocabulary, vocabulary, ArgInfo("vocabulary", 0)) )
    {
        ERRWRAP2(_self_->setVocabulary(vocabulary));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}



// Tables (BOWImgDescriptorExtractor)

static PyGetSetDef pyopencv_BOWImgDescriptorExtractor_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_BOWImgDescriptorExtractor_methods[] =
{
    {"compute", CV_PY_FN_WITH_KW_(pyopencv_cv_BOWImgDescriptorExtractor_compute, 0), "compute(image, keypoints[, imgDescriptor]) -> imgDescriptor\n.   @overload\n.       @param keypointDescriptors Computed descriptors to match with vocabulary.\n.       @param imgDescriptor Computed output image descriptor.\n.       @param pointIdxsOfClusters Indices of keypoints that belong to the cluster. This means that\n.       pointIdxsOfClusters[i] are keypoint indices that belong to the i -th cluster (word of vocabulary)\n.       returned if it is non-zero."},
    {"descriptorSize", CV_PY_FN_WITH_KW_(pyopencv_cv_BOWImgDescriptorExtractor_descriptorSize, 0), "descriptorSize() -> retval\n.   @brief Returns an image descriptor size if the vocabulary is set. Otherwise, it returns 0."},
    {"descriptorType", CV_PY_FN_WITH_KW_(pyopencv_cv_BOWImgDescriptorExtractor_descriptorType, 0), "descriptorType() -> retval\n.   @brief Returns an image descriptor type."},
    {"getVocabulary", CV_PY_FN_WITH_KW_(pyopencv_cv_BOWImgDescriptorExtractor_getVocabulary, 0), "getVocabulary() -> retval\n.   @brief Returns the set vocabulary."},
    {"setVocabulary", CV_PY_FN_WITH_KW_(pyopencv_cv_BOWImgDescriptorExtractor_setVocabulary, 0), "setVocabulary(vocabulary) -> None\n.   @brief Sets a visual vocabulary.\n.   \n.       @param vocabulary Vocabulary (can be trained using the inheritor of BOWTrainer ). Each row of the\n.       vocabulary is a visual word (cluster center)."},

    {NULL,          NULL}
};

// Converter (BOWImgDescriptorExtractor)

template<>
struct PyOpenCV_Converter< Ptr<cv::BOWImgDescriptorExtractor> >
{
    static PyObject* from(const Ptr<cv::BOWImgDescriptorExtractor>& r)
    {
        return pyopencv_BOWImgDescriptorExtractor_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::BOWImgDescriptorExtractor>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::BOWImgDescriptorExtractor> * dst_;
        if (pyopencv_BOWImgDescriptorExtractor_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::BOWImgDescriptorExtractor> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// BOWKMeansTrainer (Generic)
//================================================================================

// GetSet (BOWKMeansTrainer)



// Methods (BOWKMeansTrainer)

static int pyopencv_cv_BOWKMeansTrainer_BOWKMeansTrainer(pyopencv_BOWKMeansTrainer_t* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    int clusterCount=0;
    PyObject* pyobj_termcrit = NULL;
    TermCriteria termcrit;
    int attempts=3;
    int flags=KMEANS_PP_CENTERS;

    const char* keywords[] = { "clusterCount", "termcrit", "attempts", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i|Oii:BOWKMeansTrainer", (char**)keywords, &clusterCount, &pyobj_termcrit, &attempts, &flags) &&
        pyopencv_to(pyobj_termcrit, termcrit, ArgInfo("termcrit", 0)) )
    {
        new (&(self->v)) Ptr<cv::BOWKMeansTrainer>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::BOWKMeansTrainer(clusterCount, termcrit, attempts, flags)));
        return 0;
    }

    return -1;
}

static PyObject* pyopencv_cv_BOWKMeansTrainer_cluster(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BOWKMeansTrainer> * self1 = 0;
    if (!pyopencv_BOWKMeansTrainer_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BOWKMeansTrainer' or its derivative)");
    Ptr<cv::BOWKMeansTrainer> _self_ = *(self1);
    {
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->cluster());
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;
    Mat retval;

    const char* keywords[] = { "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:BOWKMeansTrainer.cluster", (char**)keywords, &pyobj_descriptors) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 0)) )
    {
        ERRWRAP2(retval = _self_->cluster(descriptors));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;
    Mat retval;

    const char* keywords[] = { "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:BOWKMeansTrainer.cluster", (char**)keywords, &pyobj_descriptors) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 0)) )
    {
        ERRWRAP2(retval = _self_->cluster(descriptors));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}



// Tables (BOWKMeansTrainer)

static PyGetSetDef pyopencv_BOWKMeansTrainer_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_BOWKMeansTrainer_methods[] =
{
    {"cluster", CV_PY_FN_WITH_KW_(pyopencv_cv_BOWKMeansTrainer_cluster, 0), "cluster() -> retval\n.   \n\n\n\ncluster(descriptors) -> retval\n."},

    {NULL,          NULL}
};

// Converter (BOWKMeansTrainer)

template<>
struct PyOpenCV_Converter< Ptr<cv::BOWKMeansTrainer> >
{
    static PyObject* from(const Ptr<cv::BOWKMeansTrainer>& r)
    {
        return pyopencv_BOWKMeansTrainer_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::BOWKMeansTrainer>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::BOWKMeansTrainer> * dst_;
        if (pyopencv_BOWKMeansTrainer_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::BOWKMeansTrainer> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// BOWTrainer (Generic)
//================================================================================

// GetSet (BOWTrainer)



// Methods (BOWTrainer)

static PyObject* pyopencv_cv_BOWTrainer_add(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BOWTrainer> * self1 = 0;
    if (!pyopencv_BOWTrainer_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BOWTrainer' or its derivative)");
    Ptr<cv::BOWTrainer> _self_ = *(self1);
    {
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;

    const char* keywords[] = { "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:BOWTrainer.add", (char**)keywords, &pyobj_descriptors) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 0)) )
    {
        ERRWRAP2(_self_->add(descriptors));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;

    const char* keywords[] = { "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:BOWTrainer.add", (char**)keywords, &pyobj_descriptors) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 0)) )
    {
        ERRWRAP2(_self_->add(descriptors));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWTrainer_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BOWTrainer> * self1 = 0;
    if (!pyopencv_BOWTrainer_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BOWTrainer' or its derivative)");
    Ptr<cv::BOWTrainer> _self_ = *(self1);

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWTrainer_cluster(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BOWTrainer> * self1 = 0;
    if (!pyopencv_BOWTrainer_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BOWTrainer' or its derivative)");
    Ptr<cv::BOWTrainer> _self_ = *(self1);
    {
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->cluster());
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;
    Mat retval;

    const char* keywords[] = { "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:BOWTrainer.cluster", (char**)keywords, &pyobj_descriptors) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 0)) )
    {
        ERRWRAP2(retval = _self_->cluster(descriptors));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;
    Mat retval;

    const char* keywords[] = { "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:BOWTrainer.cluster", (char**)keywords, &pyobj_descriptors) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 0)) )
    {
        ERRWRAP2(retval = _self_->cluster(descriptors));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWTrainer_descriptorsCount(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BOWTrainer> * self1 = 0;
    if (!pyopencv_BOWTrainer_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BOWTrainer' or its derivative)");
    Ptr<cv::BOWTrainer> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->descriptorsCount());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWTrainer_getDescriptors(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BOWTrainer> * self1 = 0;
    if (!pyopencv_BOWTrainer_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BOWTrainer' or its derivative)");
    Ptr<cv::BOWTrainer> _self_ = *(self1);
    std::vector<Mat> retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDescriptors());
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (BOWTrainer)

static PyGetSetDef pyopencv_BOWTrainer_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_BOWTrainer_methods[] =
{
    {"add", CV_PY_FN_WITH_KW_(pyopencv_cv_BOWTrainer_add, 0), "add(descriptors) -> None\n.   @brief Adds descriptors to a training set.\n.   \n.       @param descriptors Descriptors to add to a training set. Each row of the descriptors matrix is a\n.       descriptor.\n.   \n.       The training set is clustered using clustermethod to construct the vocabulary."},
    {"clear", CV_PY_FN_WITH_KW_(pyopencv_cv_BOWTrainer_clear, 0), "clear() -> None\n."},
    {"cluster", CV_PY_FN_WITH_KW_(pyopencv_cv_BOWTrainer_cluster, 0), "cluster() -> retval\n.   @overload\n\n\n\ncluster(descriptors) -> retval\n.   @brief Clusters train descriptors.\n.   \n.       @param descriptors Descriptors to cluster. Each row of the descriptors matrix is a descriptor.\n.       Descriptors are not added to the inner train descriptor set.\n.   \n.       The vocabulary consists of cluster centers. So, this method returns the vocabulary. In the first\n.       variant of the method, train descriptors stored in the object are clustered. In the second variant,\n.       input descriptors are clustered."},
    {"descriptorsCount", CV_PY_FN_WITH_KW_(pyopencv_cv_BOWTrainer_descriptorsCount, 0), "descriptorsCount() -> retval\n.   @brief Returns the count of all descriptors stored in the training set."},
    {"getDescriptors", CV_PY_FN_WITH_KW_(pyopencv_cv_BOWTrainer_getDescriptors, 0), "getDescriptors() -> retval\n.   @brief Returns a training set of descriptors."},

    {NULL,          NULL}
};

// Converter (BOWTrainer)

template<>
struct PyOpenCV_Converter< Ptr<cv::BOWTrainer> >
{
    static PyObject* from(const Ptr<cv::BOWTrainer>& r)
    {
        return pyopencv_BOWTrainer_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::BOWTrainer>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::BOWTrainer> * dst_;
        if (pyopencv_BOWTrainer_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::BOWTrainer> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// BRISK (Generic)
//================================================================================

// GetSet (BRISK)



// Methods (BRISK)

static PyObject* pyopencv_cv_BRISK_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    {
    int thresh=30;
    int octaves=3;
    float patternScale=1.0f;
    Ptr<BRISK> retval;

    const char* keywords[] = { "thresh", "octaves", "patternScale", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|iif:BRISK.create", (char**)keywords, &thresh, &octaves, &patternScale) )
    {
        ERRWRAP2(retval = cv::BRISK::create(thresh, octaves, patternScale));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_radiusList = NULL;
    vector_float radiusList;
    PyObject* pyobj_numberList = NULL;
    vector_int numberList;
    float dMax=5.85f;
    float dMin=8.2f;
    PyObject* pyobj_indexChange = NULL;
    vector_int indexChange=std::vector<int>();
    Ptr<BRISK> retval;

    const char* keywords[] = { "radiusList", "numberList", "dMax", "dMin", "indexChange", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|ffO:BRISK.create", (char**)keywords, &pyobj_radiusList, &pyobj_numberList, &dMax, &dMin, &pyobj_indexChange) &&
        pyopencv_to(pyobj_radiusList, radiusList, ArgInfo("radiusList", 0)) &&
        pyopencv_to(pyobj_numberList, numberList, ArgInfo("numberList", 0)) &&
        pyopencv_to(pyobj_indexChange, indexChange, ArgInfo("indexChange", 0)) )
    {
        ERRWRAP2(retval = cv::BRISK::create(radiusList, numberList, dMax, dMin, indexChange));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    int thresh=0;
    int octaves=0;
    PyObject* pyobj_radiusList = NULL;
    vector_float radiusList;
    PyObject* pyobj_numberList = NULL;
    vector_int numberList;
    float dMax=5.85f;
    float dMin=8.2f;
    PyObject* pyobj_indexChange = NULL;
    vector_int indexChange=std::vector<int>();
    Ptr<BRISK> retval;

    const char* keywords[] = { "thresh", "octaves", "radiusList", "numberList", "dMax", "dMin", "indexChange", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "iiOO|ffO:BRISK.create", (char**)keywords, &thresh, &octaves, &pyobj_radiusList, &pyobj_numberList, &dMax, &dMin, &pyobj_indexChange) &&
        pyopencv_to(pyobj_radiusList, radiusList, ArgInfo("radiusList", 0)) &&
        pyopencv_to(pyobj_numberList, numberList, ArgInfo("numberList", 0)) &&
        pyopencv_to(pyobj_indexChange, indexChange, ArgInfo("indexChange", 0)) )
    {
        ERRWRAP2(retval = cv::BRISK::create(thresh, octaves, radiusList, numberList, dMax, dMin, indexChange));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_BRISK_getDefaultName(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BRISK> * self1 = 0;
    if (!pyopencv_BRISK_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BRISK' or its derivative)");
    Ptr<cv::BRISK> _self_ = *(self1);
    String retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (BRISK)

static PyGetSetDef pyopencv_BRISK_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_BRISK_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_BRISK_create_static, METH_STATIC), "create([, thresh[, octaves[, patternScale]]]) -> retval\n.   @brief The BRISK constructor\n.   \n.       @param thresh AGAST detection threshold score.\n.       @param octaves detection octaves. Use 0 to do single scale.\n.       @param patternScale apply this scale to the pattern used for sampling the neighbourhood of a\n.       keypoint.\n\n\n\ncreate(radiusList, numberList[, dMax[, dMin[, indexChange]]]) -> retval\n.   @brief The BRISK constructor for a custom pattern\n.   \n.       @param radiusList defines the radii (in pixels) where the samples around a keypoint are taken (for\n.       keypoint scale 1).\n.       @param numberList defines the number of sampling points on the sampling circle. Must be the same\n.       size as radiusList..\n.       @param dMax threshold for the short pairings used for descriptor formation (in pixels for keypoint\n.       scale 1).\n.       @param dMin threshold for the long pairings used for orientation determination (in pixels for\n.       keypoint scale 1).\n.   @param indexChange index remapping of the bits.\n\n\n\ncreate(thresh, octaves, radiusList, numberList[, dMax[, dMin[, indexChange]]]) -> retval\n.   @brief The BRISK constructor for a custom pattern, detection threshold and octaves\n.   \n.       @param thresh AGAST detection threshold score.\n.       @param octaves detection octaves. Use 0 to do single scale.\n.       @param radiusList defines the radii (in pixels) where the samples around a keypoint are taken (for\n.       keypoint scale 1).\n.       @param numberList defines the number of sampling points on the sampling circle. Must be the same\n.       size as radiusList..\n.       @param dMax threshold for the short pairings used for descriptor formation (in pixels for keypoint\n.       scale 1).\n.       @param dMin threshold for the long pairings used for orientation determination (in pixels for\n.       keypoint scale 1).\n.   @param indexChange index remapping of the bits."},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_BRISK_getDefaultName, 0), "getDefaultName() -> retval\n."},

    {NULL,          NULL}
};

// Converter (BRISK)

template<>
struct PyOpenCV_Converter< Ptr<cv::BRISK> >
{
    static PyObject* from(const Ptr<cv::BRISK>& r)
    {
        return pyopencv_BRISK_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::BRISK>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::BRISK> * dst_;
        if (pyopencv_BRISK_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::BRISK> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// BackgroundSubtractor (Generic)
//================================================================================

// GetSet (BackgroundSubtractor)



// Methods (BackgroundSubtractor)

static PyObject* pyopencv_cv_BackgroundSubtractor_apply(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractor> * self1 = 0;
    if (!pyopencv_BackgroundSubtractor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractor' or its derivative)");
    Ptr<cv::BackgroundSubtractor> _self_ = *(self1);
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_fgmask = NULL;
    Mat fgmask;
    double learningRate=-1;

    const char* keywords[] = { "image", "fgmask", "learningRate", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Od:BackgroundSubtractor.apply", (char**)keywords, &pyobj_image, &pyobj_fgmask, &learningRate) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_fgmask, fgmask, ArgInfo("fgmask", 1)) )
    {
        ERRWRAP2(_self_->apply(image, fgmask, learningRate));
        return pyopencv_from(fgmask);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    PyObject* pyobj_fgmask = NULL;
    UMat fgmask;
    double learningRate=-1;

    const char* keywords[] = { "image", "fgmask", "learningRate", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Od:BackgroundSubtractor.apply", (char**)keywords, &pyobj_image, &pyobj_fgmask, &learningRate) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_fgmask, fgmask, ArgInfo("fgmask", 1)) )
    {
        ERRWRAP2(_self_->apply(image, fgmask, learningRate));
        return pyopencv_from(fgmask);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractor_getBackgroundImage(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractor> * self1 = 0;
    if (!pyopencv_BackgroundSubtractor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractor' or its derivative)");
    Ptr<cv::BackgroundSubtractor> _self_ = *(self1);
    {
    PyObject* pyobj_backgroundImage = NULL;
    Mat backgroundImage;

    const char* keywords[] = { "backgroundImage", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:BackgroundSubtractor.getBackgroundImage", (char**)keywords, &pyobj_backgroundImage) &&
        pyopencv_to(pyobj_backgroundImage, backgroundImage, ArgInfo("backgroundImage", 1)) )
    {
        ERRWRAP2(_self_->getBackgroundImage(backgroundImage));
        return pyopencv_from(backgroundImage);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_backgroundImage = NULL;
    UMat backgroundImage;

    const char* keywords[] = { "backgroundImage", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:BackgroundSubtractor.getBackgroundImage", (char**)keywords, &pyobj_backgroundImage) &&
        pyopencv_to(pyobj_backgroundImage, backgroundImage, ArgInfo("backgroundImage", 1)) )
    {
        ERRWRAP2(_self_->getBackgroundImage(backgroundImage));
        return pyopencv_from(backgroundImage);
    }
    }

    return NULL;
}



// Tables (BackgroundSubtractor)

static PyGetSetDef pyopencv_BackgroundSubtractor_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_BackgroundSubtractor_methods[] =
{
    {"apply", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractor_apply, 0), "apply(image[, fgmask[, learningRate]]) -> fgmask\n.   @brief Computes a foreground mask.\n.   \n.       @param image Next video frame.\n.       @param fgmask The output foreground mask as an 8-bit binary image.\n.       @param learningRate The value between 0 and 1 that indicates how fast the background model is\n.       learnt. Negative parameter value makes the algorithm to use some automatically chosen learning\n.       rate. 0 means that the background model is not updated at all, 1 means that the background model\n.       is completely reinitialized from the last frame."},
    {"getBackgroundImage", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractor_getBackgroundImage, 0), "getBackgroundImage([, backgroundImage]) -> backgroundImage\n.   @brief Computes a background image.\n.   \n.       @param backgroundImage The output background image.\n.   \n.       @note Sometimes the background image can be very blurry, as it contain the average background\n.       statistics."},

    {NULL,          NULL}
};

// Converter (BackgroundSubtractor)

template<>
struct PyOpenCV_Converter< Ptr<cv::BackgroundSubtractor> >
{
    static PyObject* from(const Ptr<cv::BackgroundSubtractor>& r)
    {
        return pyopencv_BackgroundSubtractor_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::BackgroundSubtractor>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::BackgroundSubtractor> * dst_;
        if (pyopencv_BackgroundSubtractor_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::BackgroundSubtractor> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// BackgroundSubtractorKNN (Generic)
//================================================================================

// GetSet (BackgroundSubtractorKNN)



// Methods (BackgroundSubtractorKNN)

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_getDetectShadows(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDetectShadows());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_getDist2Threshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDist2Threshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_getHistory(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getHistory());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_getNSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNSamples());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_getShadowThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getShadowThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_getShadowValue(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getShadowValue());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_getkNNSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getkNNSamples());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_setDetectShadows(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    bool detectShadows=0;

    const char* keywords[] = { "detectShadows", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:BackgroundSubtractorKNN.setDetectShadows", (char**)keywords, &detectShadows) )
    {
        ERRWRAP2(_self_->setDetectShadows(detectShadows));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_setDist2Threshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    double _dist2Threshold=0;

    const char* keywords[] = { "_dist2Threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorKNN.setDist2Threshold", (char**)keywords, &_dist2Threshold) )
    {
        ERRWRAP2(_self_->setDist2Threshold(_dist2Threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_setHistory(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    int history=0;

    const char* keywords[] = { "history", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorKNN.setHistory", (char**)keywords, &history) )
    {
        ERRWRAP2(_self_->setHistory(history));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_setNSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    int _nN=0;

    const char* keywords[] = { "_nN", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorKNN.setNSamples", (char**)keywords, &_nN) )
    {
        ERRWRAP2(_self_->setNSamples(_nN));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_setShadowThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    double threshold=0;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorKNN.setShadowThreshold", (char**)keywords, &threshold) )
    {
        ERRWRAP2(_self_->setShadowThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_setShadowValue(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    int value=0;

    const char* keywords[] = { "value", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorKNN.setShadowValue", (char**)keywords, &value) )
    {
        ERRWRAP2(_self_->setShadowValue(value));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_setkNNSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    int _nkNN=0;

    const char* keywords[] = { "_nkNN", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorKNN.setkNNSamples", (char**)keywords, &_nkNN) )
    {
        ERRWRAP2(_self_->setkNNSamples(_nkNN));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (BackgroundSubtractorKNN)

static PyGetSetDef pyopencv_BackgroundSubtractorKNN_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_BackgroundSubtractorKNN_methods[] =
{
    {"getDetectShadows", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_getDetectShadows, 0), "getDetectShadows() -> retval\n.   @brief Returns the shadow detection flag\n.   \n.       If true, the algorithm detects shadows and marks them. See createBackgroundSubtractorKNN for\n.       details."},
    {"getDist2Threshold", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_getDist2Threshold, 0), "getDist2Threshold() -> retval\n.   @brief Returns the threshold on the squared distance between the pixel and the sample\n.   \n.       The threshold on the squared distance between the pixel and the sample to decide whether a pixel is\n.       close to a data sample."},
    {"getHistory", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_getHistory, 0), "getHistory() -> retval\n.   @brief Returns the number of last frames that affect the background model"},
    {"getNSamples", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_getNSamples, 0), "getNSamples() -> retval\n.   @brief Returns the number of data samples in the background model"},
    {"getShadowThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_getShadowThreshold, 0), "getShadowThreshold() -> retval\n.   @brief Returns the shadow threshold\n.   \n.       A shadow is detected if pixel is a darker version of the background. The shadow threshold (Tau in\n.       the paper) is a threshold defining how much darker the shadow can be. Tau= 0.5 means that if a pixel\n.       is more than twice darker then it is not shadow. See Prati, Mikic, Trivedi and Cucchiara,\n.       *Detecting Moving Shadows...*, IEEE PAMI,2003."},
    {"getShadowValue", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_getShadowValue, 0), "getShadowValue() -> retval\n.   @brief Returns the shadow value\n.   \n.       Shadow value is the value used to mark shadows in the foreground mask. Default value is 127. Value 0\n.       in the mask always means background, 255 means foreground."},
    {"getkNNSamples", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_getkNNSamples, 0), "getkNNSamples() -> retval\n.   @brief Returns the number of neighbours, the k in the kNN.\n.   \n.       K is the number of samples that need to be within dist2Threshold in order to decide that that\n.       pixel is matching the kNN background model."},
    {"setDetectShadows", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_setDetectShadows, 0), "setDetectShadows(detectShadows) -> None\n.   @brief Enables or disables shadow detection"},
    {"setDist2Threshold", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_setDist2Threshold, 0), "setDist2Threshold(_dist2Threshold) -> None\n.   @brief Sets the threshold on the squared distance"},
    {"setHistory", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_setHistory, 0), "setHistory(history) -> None\n.   @brief Sets the number of last frames that affect the background model"},
    {"setNSamples", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_setNSamples, 0), "setNSamples(_nN) -> None\n.   @brief Sets the number of data samples in the background model.\n.   \n.       The model needs to be reinitalized to reserve memory."},
    {"setShadowThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_setShadowThreshold, 0), "setShadowThreshold(threshold) -> None\n.   @brief Sets the shadow threshold"},
    {"setShadowValue", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_setShadowValue, 0), "setShadowValue(value) -> None\n.   @brief Sets the shadow value"},
    {"setkNNSamples", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_setkNNSamples, 0), "setkNNSamples(_nkNN) -> None\n.   @brief Sets the k in the kNN. How many nearest neighbours need to match."},

    {NULL,          NULL}
};

// Converter (BackgroundSubtractorKNN)

template<>
struct PyOpenCV_Converter< Ptr<cv::BackgroundSubtractorKNN> >
{
    static PyObject* from(const Ptr<cv::BackgroundSubtractorKNN>& r)
    {
        return pyopencv_BackgroundSubtractorKNN_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::BackgroundSubtractorKNN>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::BackgroundSubtractorKNN> * dst_;
        if (pyopencv_BackgroundSubtractorKNN_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::BackgroundSubtractorKNN> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// BackgroundSubtractorMOG2 (Generic)
//================================================================================

// GetSet (BackgroundSubtractorMOG2)



// Methods (BackgroundSubtractorMOG2)

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_apply(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_fgmask = NULL;
    Mat fgmask;
    double learningRate=-1;

    const char* keywords[] = { "image", "fgmask", "learningRate", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Od:BackgroundSubtractorMOG2.apply", (char**)keywords, &pyobj_image, &pyobj_fgmask, &learningRate) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_fgmask, fgmask, ArgInfo("fgmask", 1)) )
    {
        ERRWRAP2(_self_->apply(image, fgmask, learningRate));
        return pyopencv_from(fgmask);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    PyObject* pyobj_fgmask = NULL;
    UMat fgmask;
    double learningRate=-1;

    const char* keywords[] = { "image", "fgmask", "learningRate", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Od:BackgroundSubtractorMOG2.apply", (char**)keywords, &pyobj_image, &pyobj_fgmask, &learningRate) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_fgmask, fgmask, ArgInfo("fgmask", 1)) )
    {
        ERRWRAP2(_self_->apply(image, fgmask, learningRate));
        return pyopencv_from(fgmask);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getBackgroundRatio(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getBackgroundRatio());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getComplexityReductionThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getComplexityReductionThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getDetectShadows(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDetectShadows());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getHistory(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getHistory());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getNMixtures(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNMixtures());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getShadowThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getShadowThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getShadowValue(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getShadowValue());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getVarInit(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarInit());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getVarMax(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarMax());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getVarMin(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarMin());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getVarThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getVarThresholdGen(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarThresholdGen());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setBackgroundRatio(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double ratio=0;

    const char* keywords[] = { "ratio", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setBackgroundRatio", (char**)keywords, &ratio) )
    {
        ERRWRAP2(_self_->setBackgroundRatio(ratio));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setComplexityReductionThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double ct=0;

    const char* keywords[] = { "ct", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setComplexityReductionThreshold", (char**)keywords, &ct) )
    {
        ERRWRAP2(_self_->setComplexityReductionThreshold(ct));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setDetectShadows(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    bool detectShadows=0;

    const char* keywords[] = { "detectShadows", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:BackgroundSubtractorMOG2.setDetectShadows", (char**)keywords, &detectShadows) )
    {
        ERRWRAP2(_self_->setDetectShadows(detectShadows));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setHistory(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    int history=0;

    const char* keywords[] = { "history", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorMOG2.setHistory", (char**)keywords, &history) )
    {
        ERRWRAP2(_self_->setHistory(history));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setNMixtures(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    int nmixtures=0;

    const char* keywords[] = { "nmixtures", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorMOG2.setNMixtures", (char**)keywords, &nmixtures) )
    {
        ERRWRAP2(_self_->setNMixtures(nmixtures));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setShadowThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double threshold=0;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setShadowThreshold", (char**)keywords, &threshold) )
    {
        ERRWRAP2(_self_->setShadowThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setShadowValue(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    int value=0;

    const char* keywords[] = { "value", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:BackgroundSubtractorMOG2.setShadowValue", (char**)keywords, &value) )
    {
        ERRWRAP2(_self_->setShadowValue(value));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setVarInit(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double varInit=0;

    const char* keywords[] = { "varInit", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setVarInit", (char**)keywords, &varInit) )
    {
        ERRWRAP2(_self_->setVarInit(varInit));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setVarMax(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double varMax=0;

    const char* keywords[] = { "varMax", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setVarMax", (char**)keywords, &varMax) )
    {
        ERRWRAP2(_self_->setVarMax(varMax));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setVarMin(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double varMin=0;

    const char* keywords[] = { "varMin", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setVarMin", (char**)keywords, &varMin) )
    {
        ERRWRAP2(_self_->setVarMin(varMin));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setVarThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double varThreshold=0;

    const char* keywords[] = { "varThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setVarThreshold", (char**)keywords, &varThreshold) )
    {
        ERRWRAP2(_self_->setVarThreshold(varThreshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setVarThresholdGen(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double varThresholdGen=0;

    const char* keywords[] = { "varThresholdGen", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:BackgroundSubtractorMOG2.setVarThresholdGen", (char**)keywords, &varThresholdGen) )
    {
        ERRWRAP2(_self_->setVarThresholdGen(varThresholdGen));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (BackgroundSubtractorMOG2)

static PyGetSetDef pyopencv_BackgroundSubtractorMOG2_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_BackgroundSubtractorMOG2_methods[] =
{
    {"apply", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_apply, 0), "apply(image[, fgmask[, learningRate]]) -> fgmask\n.   @brief Computes a foreground mask.\n.   \n.       @param image Next video frame. Floating point frame will be used without scaling and should be in range \\f$[0,255]\\f$.\n.       @param fgmask The output foreground mask as an 8-bit binary image.\n.       @param learningRate The value between 0 and 1 that indicates how fast the background model is\n.       learnt. Negative parameter value makes the algorithm to use some automatically chosen learning\n.       rate. 0 means that the background model is not updated at all, 1 means that the background model\n.       is completely reinitialized from the last frame."},
    {"getBackgroundRatio", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getBackgroundRatio, 0), "getBackgroundRatio() -> retval\n.   @brief Returns the \"background ratio\" parameter of the algorithm\n.   \n.       If a foreground pixel keeps semi-constant value for about backgroundRatio\\*history frames, it's\n.       considered background and added to the model as a center of a new component. It corresponds to TB\n.       parameter in the paper."},
    {"getComplexityReductionThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getComplexityReductionThreshold, 0), "getComplexityReductionThreshold() -> retval\n.   @brief Returns the complexity reduction threshold\n.   \n.       This parameter defines the number of samples needed to accept to prove the component exists. CT=0.05\n.       is a default value for all the samples. By setting CT=0 you get an algorithm very similar to the\n.       standard Stauffer&Grimson algorithm."},
    {"getDetectShadows", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getDetectShadows, 0), "getDetectShadows() -> retval\n.   @brief Returns the shadow detection flag\n.   \n.       If true, the algorithm detects shadows and marks them. See createBackgroundSubtractorMOG2 for\n.       details."},
    {"getHistory", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getHistory, 0), "getHistory() -> retval\n.   @brief Returns the number of last frames that affect the background model"},
    {"getNMixtures", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getNMixtures, 0), "getNMixtures() -> retval\n.   @brief Returns the number of gaussian components in the background model"},
    {"getShadowThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getShadowThreshold, 0), "getShadowThreshold() -> retval\n.   @brief Returns the shadow threshold\n.   \n.       A shadow is detected if pixel is a darker version of the background. The shadow threshold (Tau in\n.       the paper) is a threshold defining how much darker the shadow can be. Tau= 0.5 means that if a pixel\n.       is more than twice darker then it is not shadow. See Prati, Mikic, Trivedi and Cucchiara,\n.       *Detecting Moving Shadows...*, IEEE PAMI,2003."},
    {"getShadowValue", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getShadowValue, 0), "getShadowValue() -> retval\n.   @brief Returns the shadow value\n.   \n.       Shadow value is the value used to mark shadows in the foreground mask. Default value is 127. Value 0\n.       in the mask always means background, 255 means foreground."},
    {"getVarInit", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getVarInit, 0), "getVarInit() -> retval\n.   @brief Returns the initial variance of each gaussian component"},
    {"getVarMax", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getVarMax, 0), "getVarMax() -> retval\n."},
    {"getVarMin", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getVarMin, 0), "getVarMin() -> retval\n."},
    {"getVarThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getVarThreshold, 0), "getVarThreshold() -> retval\n.   @brief Returns the variance threshold for the pixel-model match\n.   \n.       The main threshold on the squared Mahalanobis distance to decide if the sample is well described by\n.       the background model or not. Related to Cthr from the paper."},
    {"getVarThresholdGen", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getVarThresholdGen, 0), "getVarThresholdGen() -> retval\n.   @brief Returns the variance threshold for the pixel-model match used for new mixture component generation\n.   \n.       Threshold for the squared Mahalanobis distance that helps decide when a sample is close to the\n.       existing components (corresponds to Tg in the paper). If a pixel is not close to any component, it\n.       is considered foreground or added as a new component. 3 sigma =\\> Tg=3\\*3=9 is default. A smaller Tg\n.       value generates more components. A higher Tg value may result in a small number of components but\n.       they can grow too large."},
    {"setBackgroundRatio", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setBackgroundRatio, 0), "setBackgroundRatio(ratio) -> None\n.   @brief Sets the \"background ratio\" parameter of the algorithm"},
    {"setComplexityReductionThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setComplexityReductionThreshold, 0), "setComplexityReductionThreshold(ct) -> None\n.   @brief Sets the complexity reduction threshold"},
    {"setDetectShadows", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setDetectShadows, 0), "setDetectShadows(detectShadows) -> None\n.   @brief Enables or disables shadow detection"},
    {"setHistory", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setHistory, 0), "setHistory(history) -> None\n.   @brief Sets the number of last frames that affect the background model"},
    {"setNMixtures", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setNMixtures, 0), "setNMixtures(nmixtures) -> None\n.   @brief Sets the number of gaussian components in the background model.\n.   \n.       The model needs to be reinitalized to reserve memory."},
    {"setShadowThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setShadowThreshold, 0), "setShadowThreshold(threshold) -> None\n.   @brief Sets the shadow threshold"},
    {"setShadowValue", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setShadowValue, 0), "setShadowValue(value) -> None\n.   @brief Sets the shadow value"},
    {"setVarInit", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setVarInit, 0), "setVarInit(varInit) -> None\n.   @brief Sets the initial variance of each gaussian component"},
    {"setVarMax", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setVarMax, 0), "setVarMax(varMax) -> None\n."},
    {"setVarMin", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setVarMin, 0), "setVarMin(varMin) -> None\n."},
    {"setVarThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setVarThreshold, 0), "setVarThreshold(varThreshold) -> None\n.   @brief Sets the variance threshold for the pixel-model match"},
    {"setVarThresholdGen", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setVarThresholdGen, 0), "setVarThresholdGen(varThresholdGen) -> None\n.   @brief Sets the variance threshold for the pixel-model match used for new mixture component generation"},

    {NULL,          NULL}
};

// Converter (BackgroundSubtractorMOG2)

template<>
struct PyOpenCV_Converter< Ptr<cv::BackgroundSubtractorMOG2> >
{
    static PyObject* from(const Ptr<cv::BackgroundSubtractorMOG2>& r)
    {
        return pyopencv_BackgroundSubtractorMOG2_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::BackgroundSubtractorMOG2>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::BackgroundSubtractorMOG2> * dst_;
        if (pyopencv_BackgroundSubtractorMOG2_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::BackgroundSubtractorMOG2> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// BaseCascadeClassifier (Generic)
//================================================================================

// GetSet (BaseCascadeClassifier)



// Methods (BaseCascadeClassifier)



// Tables (BaseCascadeClassifier)

static PyGetSetDef pyopencv_BaseCascadeClassifier_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_BaseCascadeClassifier_methods[] =
{

    {NULL,          NULL}
};

// Converter (BaseCascadeClassifier)

template<>
struct PyOpenCV_Converter< Ptr<cv::BaseCascadeClassifier> >
{
    static PyObject* from(const Ptr<cv::BaseCascadeClassifier>& r)
    {
        return pyopencv_BaseCascadeClassifier_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::BaseCascadeClassifier>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::BaseCascadeClassifier> * dst_;
        if (pyopencv_BaseCascadeClassifier_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::BaseCascadeClassifier> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// CLAHE (Generic)
//================================================================================

// GetSet (CLAHE)



// Methods (CLAHE)

static PyObject* pyopencv_cv_CLAHE_apply(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CLAHE> * self1 = 0;
    if (!pyopencv_CLAHE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CLAHE' or its derivative)");
    Ptr<cv::CLAHE> _self_ = *(self1);
    {
    PyObject* pyobj_src = NULL;
    Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;

    const char* keywords[] = { "src", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:CLAHE.apply", (char**)keywords, &pyobj_src, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->apply(src, dst));
        return pyopencv_from(dst);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_src = NULL;
    UMat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;

    const char* keywords[] = { "src", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:CLAHE.apply", (char**)keywords, &pyobj_src, &pyobj_dst) &&
        pyopencv_to(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->apply(src, dst));
        return pyopencv_from(dst);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_CLAHE_collectGarbage(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CLAHE> * self1 = 0;
    if (!pyopencv_CLAHE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CLAHE' or its derivative)");
    Ptr<cv::CLAHE> _self_ = *(self1);

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->collectGarbage());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_CLAHE_getClipLimit(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CLAHE> * self1 = 0;
    if (!pyopencv_CLAHE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CLAHE' or its derivative)");
    Ptr<cv::CLAHE> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getClipLimit());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CLAHE_getTilesGridSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CLAHE> * self1 = 0;
    if (!pyopencv_CLAHE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CLAHE' or its derivative)");
    Ptr<cv::CLAHE> _self_ = *(self1);
    Size retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTilesGridSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CLAHE_setClipLimit(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CLAHE> * self1 = 0;
    if (!pyopencv_CLAHE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CLAHE' or its derivative)");
    Ptr<cv::CLAHE> _self_ = *(self1);
    double clipLimit=0;

    const char* keywords[] = { "clipLimit", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:CLAHE.setClipLimit", (char**)keywords, &clipLimit) )
    {
        ERRWRAP2(_self_->setClipLimit(clipLimit));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_CLAHE_setTilesGridSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CLAHE> * self1 = 0;
    if (!pyopencv_CLAHE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CLAHE' or its derivative)");
    Ptr<cv::CLAHE> _self_ = *(self1);
    PyObject* pyobj_tileGridSize = NULL;
    Size tileGridSize;

    const char* keywords[] = { "tileGridSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:CLAHE.setTilesGridSize", (char**)keywords, &pyobj_tileGridSize) &&
        pyopencv_to(pyobj_tileGridSize, tileGridSize, ArgInfo("tileGridSize", 0)) )
    {
        ERRWRAP2(_self_->setTilesGridSize(tileGridSize));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (CLAHE)

static PyGetSetDef pyopencv_CLAHE_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_CLAHE_methods[] =
{
    {"apply", CV_PY_FN_WITH_KW_(pyopencv_cv_CLAHE_apply, 0), "apply(src[, dst]) -> dst\n.   @brief Equalizes the histogram of a grayscale image using Contrast Limited Adaptive Histogram Equalization.\n.   \n.       @param src Source image of type CV_8UC1 or CV_16UC1.\n.       @param dst Destination image."},
    {"collectGarbage", CV_PY_FN_WITH_KW_(pyopencv_cv_CLAHE_collectGarbage, 0), "collectGarbage() -> None\n."},
    {"getClipLimit", CV_PY_FN_WITH_KW_(pyopencv_cv_CLAHE_getClipLimit, 0), "getClipLimit() -> retval\n."},
    {"getTilesGridSize", CV_PY_FN_WITH_KW_(pyopencv_cv_CLAHE_getTilesGridSize, 0), "getTilesGridSize() -> retval\n."},
    {"setClipLimit", CV_PY_FN_WITH_KW_(pyopencv_cv_CLAHE_setClipLimit, 0), "setClipLimit(clipLimit) -> None\n.   @brief Sets threshold for contrast limiting.\n.   \n.       @param clipLimit threshold value."},
    {"setTilesGridSize", CV_PY_FN_WITH_KW_(pyopencv_cv_CLAHE_setTilesGridSize, 0), "setTilesGridSize(tileGridSize) -> None\n.   @brief Sets size of grid for histogram equalization. Input image will be divided into\n.       equally sized rectangular tiles.\n.   \n.       @param tileGridSize defines the number of tiles in row and column."},

    {NULL,          NULL}
};

// Converter (CLAHE)

template<>
struct PyOpenCV_Converter< Ptr<cv::CLAHE> >
{
    static PyObject* from(const Ptr<cv::CLAHE>& r)
    {
        return pyopencv_CLAHE_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::CLAHE>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::CLAHE> * dst_;
        if (pyopencv_CLAHE_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::CLAHE> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// CascadeClassifier (Generic)
//================================================================================

// GetSet (CascadeClassifier)



// Methods (CascadeClassifier)

static int pyopencv_cv_CascadeClassifier_CascadeClassifier(pyopencv_CascadeClassifier_t* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    {

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        new (&(self->v)) Ptr<cv::CascadeClassifier>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::CascadeClassifier()));
        return 0;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_filename = NULL;
    String filename;

    const char* keywords[] = { "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:CascadeClassifier", (char**)keywords, &pyobj_filename) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        new (&(self->v)) Ptr<cv::CascadeClassifier>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::CascadeClassifier(filename)));
        return 0;
    }
    }

    return -1;
}

static PyObject* pyopencv_cv_CascadeClassifier_convert_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_oldcascade = NULL;
    String oldcascade;
    PyObject* pyobj_newcascade = NULL;
    String newcascade;
    bool retval;

    const char* keywords[] = { "oldcascade", "newcascade", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:CascadeClassifier.convert", (char**)keywords, &pyobj_oldcascade, &pyobj_newcascade) &&
        pyopencv_to(pyobj_oldcascade, oldcascade, ArgInfo("oldcascade", 0)) &&
        pyopencv_to(pyobj_newcascade, newcascade, ArgInfo("newcascade", 0)) )
    {
        ERRWRAP2(retval = cv::CascadeClassifier::convert(oldcascade, newcascade));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CascadeClassifier_detectMultiScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CascadeClassifier> * self1 = 0;
    if (!pyopencv_CascadeClassifier_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    Ptr<cv::CascadeClassifier> _self_ = *(self1);
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    vector_Rect objects;
    double scaleFactor=1.1;
    int minNeighbors=3;
    int flags=0;
    PyObject* pyobj_minSize = NULL;
    Size minSize;
    PyObject* pyobj_maxSize = NULL;
    Size maxSize;

    const char* keywords[] = { "image", "scaleFactor", "minNeighbors", "flags", "minSize", "maxSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|diiOO:CascadeClassifier.detectMultiScale", (char**)keywords, &pyobj_image, &scaleFactor, &minNeighbors, &flags, &pyobj_minSize, &pyobj_maxSize) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_minSize, minSize, ArgInfo("minSize", 0)) &&
        pyopencv_to(pyobj_maxSize, maxSize, ArgInfo("maxSize", 0)) )
    {
        ERRWRAP2(_self_->detectMultiScale(image, objects, scaleFactor, minNeighbors, flags, minSize, maxSize));
        return pyopencv_from(objects);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    vector_Rect objects;
    double scaleFactor=1.1;
    int minNeighbors=3;
    int flags=0;
    PyObject* pyobj_minSize = NULL;
    Size minSize;
    PyObject* pyobj_maxSize = NULL;
    Size maxSize;

    const char* keywords[] = { "image", "scaleFactor", "minNeighbors", "flags", "minSize", "maxSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|diiOO:CascadeClassifier.detectMultiScale", (char**)keywords, &pyobj_image, &scaleFactor, &minNeighbors, &flags, &pyobj_minSize, &pyobj_maxSize) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_minSize, minSize, ArgInfo("minSize", 0)) &&
        pyopencv_to(pyobj_maxSize, maxSize, ArgInfo("maxSize", 0)) )
    {
        ERRWRAP2(_self_->detectMultiScale(image, objects, scaleFactor, minNeighbors, flags, minSize, maxSize));
        return pyopencv_from(objects);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_CascadeClassifier_detectMultiScale2(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CascadeClassifier> * self1 = 0;
    if (!pyopencv_CascadeClassifier_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    Ptr<cv::CascadeClassifier> _self_ = *(self1);
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    vector_Rect objects;
    vector_int numDetections;
    double scaleFactor=1.1;
    int minNeighbors=3;
    int flags=0;
    PyObject* pyobj_minSize = NULL;
    Size minSize;
    PyObject* pyobj_maxSize = NULL;
    Size maxSize;

    const char* keywords[] = { "image", "scaleFactor", "minNeighbors", "flags", "minSize", "maxSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|diiOO:CascadeClassifier.detectMultiScale2", (char**)keywords, &pyobj_image, &scaleFactor, &minNeighbors, &flags, &pyobj_minSize, &pyobj_maxSize) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_minSize, minSize, ArgInfo("minSize", 0)) &&
        pyopencv_to(pyobj_maxSize, maxSize, ArgInfo("maxSize", 0)) )
    {
        ERRWRAP2(_self_->detectMultiScale(image, objects, numDetections, scaleFactor, minNeighbors, flags, minSize, maxSize));
        return Py_BuildValue("(NN)", pyopencv_from(objects), pyopencv_from(numDetections));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    vector_Rect objects;
    vector_int numDetections;
    double scaleFactor=1.1;
    int minNeighbors=3;
    int flags=0;
    PyObject* pyobj_minSize = NULL;
    Size minSize;
    PyObject* pyobj_maxSize = NULL;
    Size maxSize;

    const char* keywords[] = { "image", "scaleFactor", "minNeighbors", "flags", "minSize", "maxSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|diiOO:CascadeClassifier.detectMultiScale2", (char**)keywords, &pyobj_image, &scaleFactor, &minNeighbors, &flags, &pyobj_minSize, &pyobj_maxSize) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_minSize, minSize, ArgInfo("minSize", 0)) &&
        pyopencv_to(pyobj_maxSize, maxSize, ArgInfo("maxSize", 0)) )
    {
        ERRWRAP2(_self_->detectMultiScale(image, objects, numDetections, scaleFactor, minNeighbors, flags, minSize, maxSize));
        return Py_BuildValue("(NN)", pyopencv_from(objects), pyopencv_from(numDetections));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_CascadeClassifier_detectMultiScale3(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CascadeClassifier> * self1 = 0;
    if (!pyopencv_CascadeClassifier_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    Ptr<cv::CascadeClassifier> _self_ = *(self1);
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    vector_Rect objects;
    vector_int rejectLevels;
    vector_double levelWeights;
    double scaleFactor=1.1;
    int minNeighbors=3;
    int flags=0;
    PyObject* pyobj_minSize = NULL;
    Size minSize;
    PyObject* pyobj_maxSize = NULL;
    Size maxSize;
    bool outputRejectLevels=false;

    const char* keywords[] = { "image", "scaleFactor", "minNeighbors", "flags", "minSize", "maxSize", "outputRejectLevels", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|diiOOb:CascadeClassifier.detectMultiScale3", (char**)keywords, &pyobj_image, &scaleFactor, &minNeighbors, &flags, &pyobj_minSize, &pyobj_maxSize, &outputRejectLevels) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_minSize, minSize, ArgInfo("minSize", 0)) &&
        pyopencv_to(pyobj_maxSize, maxSize, ArgInfo("maxSize", 0)) )
    {
        ERRWRAP2(_self_->detectMultiScale(image, objects, rejectLevels, levelWeights, scaleFactor, minNeighbors, flags, minSize, maxSize, outputRejectLevels));
        return Py_BuildValue("(NNN)", pyopencv_from(objects), pyopencv_from(rejectLevels), pyopencv_from(levelWeights));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    vector_Rect objects;
    vector_int rejectLevels;
    vector_double levelWeights;
    double scaleFactor=1.1;
    int minNeighbors=3;
    int flags=0;
    PyObject* pyobj_minSize = NULL;
    Size minSize;
    PyObject* pyobj_maxSize = NULL;
    Size maxSize;
    bool outputRejectLevels=false;

    const char* keywords[] = { "image", "scaleFactor", "minNeighbors", "flags", "minSize", "maxSize", "outputRejectLevels", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|diiOOb:CascadeClassifier.detectMultiScale3", (char**)keywords, &pyobj_image, &scaleFactor, &minNeighbors, &flags, &pyobj_minSize, &pyobj_maxSize, &outputRejectLevels) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_minSize, minSize, ArgInfo("minSize", 0)) &&
        pyopencv_to(pyobj_maxSize, maxSize, ArgInfo("maxSize", 0)) )
    {
        ERRWRAP2(_self_->detectMultiScale(image, objects, rejectLevels, levelWeights, scaleFactor, minNeighbors, flags, minSize, maxSize, outputRejectLevels));
        return Py_BuildValue("(NNN)", pyopencv_from(objects), pyopencv_from(rejectLevels), pyopencv_from(levelWeights));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_CascadeClassifier_empty(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CascadeClassifier> * self1 = 0;
    if (!pyopencv_CascadeClassifier_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    Ptr<cv::CascadeClassifier> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CascadeClassifier_getFeatureType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CascadeClassifier> * self1 = 0;
    if (!pyopencv_CascadeClassifier_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    Ptr<cv::CascadeClassifier> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFeatureType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CascadeClassifier_getOriginalWindowSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CascadeClassifier> * self1 = 0;
    if (!pyopencv_CascadeClassifier_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    Ptr<cv::CascadeClassifier> _self_ = *(self1);
    Size retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getOriginalWindowSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CascadeClassifier_isOldFormatCascade(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CascadeClassifier> * self1 = 0;
    if (!pyopencv_CascadeClassifier_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    Ptr<cv::CascadeClassifier> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isOldFormatCascade());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CascadeClassifier_load(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CascadeClassifier> * self1 = 0;
    if (!pyopencv_CascadeClassifier_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    Ptr<cv::CascadeClassifier> _self_ = *(self1);
    PyObject* pyobj_filename = NULL;
    String filename;
    bool retval;

    const char* keywords[] = { "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:CascadeClassifier.load", (char**)keywords, &pyobj_filename) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(retval = _self_->load(filename));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CascadeClassifier_read(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CascadeClassifier> * self1 = 0;
    if (!pyopencv_CascadeClassifier_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CascadeClassifier' or its derivative)");
    Ptr<cv::CascadeClassifier> _self_ = *(self1);
    PyObject* pyobj_node = NULL;
    FileNode node;
    bool retval;

    const char* keywords[] = { "node", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:CascadeClassifier.read", (char**)keywords, &pyobj_node) &&
        pyopencv_to(pyobj_node, node, ArgInfo("node", 0)) )
    {
        ERRWRAP2(retval = _self_->read(node));
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (CascadeClassifier)

static PyGetSetDef pyopencv_CascadeClassifier_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_CascadeClassifier_methods[] =
{
    {"convert", CV_PY_FN_WITH_KW_(pyopencv_cv_CascadeClassifier_convert_static, METH_STATIC), "convert(oldcascade, newcascade) -> retval\n."},
    {"detectMultiScale", CV_PY_FN_WITH_KW_(pyopencv_cv_CascadeClassifier_detectMultiScale, 0), "detectMultiScale(image[, scaleFactor[, minNeighbors[, flags[, minSize[, maxSize]]]]]) -> objects\n.   @brief Detects objects of different sizes in the input image. The detected objects are returned as a list\n.       of rectangles.\n.   \n.       @param image Matrix of the type CV_8U containing an image where objects are detected.\n.       @param objects Vector of rectangles where each rectangle contains the detected object, the\n.       rectangles may be partially outside the original image.\n.       @param scaleFactor Parameter specifying how much the image size is reduced at each image scale.\n.       @param minNeighbors Parameter specifying how many neighbors each candidate rectangle should have\n.       to retain it.\n.       @param flags Parameter with the same meaning for an old cascade as in the function\n.       cvHaarDetectObjects. It is not used for a new cascade.\n.       @param minSize Minimum possible object size. Objects smaller than that are ignored.\n.       @param maxSize Maximum possible object size. Objects larger than that are ignored. If `maxSize == minSize` model is evaluated on single scale.\n.   \n.       The function is parallelized with the TBB library.\n.   \n.       @note\n.          -   (Python) A face detection example using cascade classifiers can be found at\n.               opencv_source_code/samples/python/facedetect.py"},
    {"detectMultiScale2", CV_PY_FN_WITH_KW_(pyopencv_cv_CascadeClassifier_detectMultiScale2, 0), "detectMultiScale2(image[, scaleFactor[, minNeighbors[, flags[, minSize[, maxSize]]]]]) -> objects, numDetections\n.   @overload\n.       @param image Matrix of the type CV_8U containing an image where objects are detected.\n.       @param objects Vector of rectangles where each rectangle contains the detected object, the\n.       rectangles may be partially outside the original image.\n.       @param numDetections Vector of detection numbers for the corresponding objects. An object's number\n.       of detections is the number of neighboring positively classified rectangles that were joined\n.       together to form the object.\n.       @param scaleFactor Parameter specifying how much the image size is reduced at each image scale.\n.       @param minNeighbors Parameter specifying how many neighbors each candidate rectangle should have\n.       to retain it.\n.       @param flags Parameter with the same meaning for an old cascade as in the function\n.       cvHaarDetectObjects. It is not used for a new cascade.\n.       @param minSize Minimum possible object size. Objects smaller than that are ignored.\n.       @param maxSize Maximum possible object size. Objects larger than that are ignored. If `maxSize == minSize` model is evaluated on single scale."},
    {"detectMultiScale3", CV_PY_FN_WITH_KW_(pyopencv_cv_CascadeClassifier_detectMultiScale3, 0), "detectMultiScale3(image[, scaleFactor[, minNeighbors[, flags[, minSize[, maxSize[, outputRejectLevels]]]]]]) -> objects, rejectLevels, levelWeights\n.   @overload\n.       This function allows you to retrieve the final stage decision certainty of classification.\n.       For this, one needs to set `outputRejectLevels` on true and provide the `rejectLevels` and `levelWeights` parameter.\n.       For each resulting detection, `levelWeights` will then contain the certainty of classification at the final stage.\n.       This value can then be used to separate strong from weaker classifications.\n.   \n.       A code sample on how to use it efficiently can be found below:\n.       @code\n.       Mat img;\n.       vector<double> weights;\n.       vector<int> levels;\n.       vector<Rect> detections;\n.       CascadeClassifier model(\"/path/to/your/model.xml\");\n.       model.detectMultiScale(img, detections, levels, weights, 1.1, 3, 0, Size(), Size(), true);\n.       cerr << \"Detection \" << detections[0] << \" with weight \" << weights[0] << endl;\n.       @endcode"},
    {"empty", CV_PY_FN_WITH_KW_(pyopencv_cv_CascadeClassifier_empty, 0), "empty() -> retval\n.   @brief Checks whether the classifier has been loaded."},
    {"getFeatureType", CV_PY_FN_WITH_KW_(pyopencv_cv_CascadeClassifier_getFeatureType, 0), "getFeatureType() -> retval\n."},
    {"getOriginalWindowSize", CV_PY_FN_WITH_KW_(pyopencv_cv_CascadeClassifier_getOriginalWindowSize, 0), "getOriginalWindowSize() -> retval\n."},
    {"isOldFormatCascade", CV_PY_FN_WITH_KW_(pyopencv_cv_CascadeClassifier_isOldFormatCascade, 0), "isOldFormatCascade() -> retval\n."},
    {"load", CV_PY_FN_WITH_KW_(pyopencv_cv_CascadeClassifier_load, 0), "load(filename) -> retval\n.   @brief Loads a classifier from a file.\n.   \n.       @param filename Name of the file from which the classifier is loaded. The file may contain an old\n.       HAAR classifier trained by the haartraining application or a new cascade classifier trained by the\n.       traincascade application."},
    {"read", CV_PY_FN_WITH_KW_(pyopencv_cv_CascadeClassifier_read, 0), "read(node) -> retval\n.   @brief Reads a classifier from a FileStorage node.\n.   \n.       @note The file may contain a new cascade classifier (trained traincascade application) only."},

    {NULL,          NULL}
};

// Converter (CascadeClassifier)

template<>
struct PyOpenCV_Converter< Ptr<cv::CascadeClassifier> >
{
    static PyObject* from(const Ptr<cv::CascadeClassifier>& r)
    {
        return pyopencv_CascadeClassifier_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::CascadeClassifier>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::CascadeClassifier> * dst_;
        if (pyopencv_CascadeClassifier_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::CascadeClassifier> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// CirclesGridFinderParameters (Generic)
//================================================================================

// GetSet (CirclesGridFinderParameters)


static PyObject* pyopencv_CirclesGridFinderParameters_get_convexHullFactor(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.convexHullFactor);
}

static int pyopencv_CirclesGridFinderParameters_set_convexHullFactor(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the convexHullFactor attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.convexHullFactor, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_densityNeighborhoodSize(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.densityNeighborhoodSize);
}

static int pyopencv_CirclesGridFinderParameters_set_densityNeighborhoodSize(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the densityNeighborhoodSize attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.densityNeighborhoodSize, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_edgeGain(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.edgeGain);
}

static int pyopencv_CirclesGridFinderParameters_set_edgeGain(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the edgeGain attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.edgeGain, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_edgePenalty(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.edgePenalty);
}

static int pyopencv_CirclesGridFinderParameters_set_edgePenalty(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the edgePenalty attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.edgePenalty, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_existingVertexGain(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.existingVertexGain);
}

static int pyopencv_CirclesGridFinderParameters_set_existingVertexGain(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the existingVertexGain attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.existingVertexGain, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_keypointScale(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.keypointScale);
}

static int pyopencv_CirclesGridFinderParameters_set_keypointScale(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the keypointScale attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.keypointScale, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_kmeansAttempts(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.kmeansAttempts);
}

static int pyopencv_CirclesGridFinderParameters_set_kmeansAttempts(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the kmeansAttempts attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.kmeansAttempts, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_minDensity(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.minDensity);
}

static int pyopencv_CirclesGridFinderParameters_set_minDensity(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minDensity attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minDensity, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_minDistanceToAddKeypoint(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.minDistanceToAddKeypoint);
}

static int pyopencv_CirclesGridFinderParameters_set_minDistanceToAddKeypoint(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minDistanceToAddKeypoint attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minDistanceToAddKeypoint, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_minGraphConfidence(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.minGraphConfidence);
}

static int pyopencv_CirclesGridFinderParameters_set_minGraphConfidence(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minGraphConfidence attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minGraphConfidence, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_minRNGEdgeSwitchDist(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.minRNGEdgeSwitchDist);
}

static int pyopencv_CirclesGridFinderParameters_set_minRNGEdgeSwitchDist(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minRNGEdgeSwitchDist attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minRNGEdgeSwitchDist, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_vertexGain(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.vertexGain);
}

static int pyopencv_CirclesGridFinderParameters_set_vertexGain(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the vertexGain attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.vertexGain, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters_get_vertexPenalty(pyopencv_CirclesGridFinderParameters_t* p, void *closure)
{
    return pyopencv_from(p->v.vertexPenalty);
}

static int pyopencv_CirclesGridFinderParameters_set_vertexPenalty(pyopencv_CirclesGridFinderParameters_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the vertexPenalty attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.vertexPenalty, ArgInfo("value", false)) ? 0 : -1;
}


// Methods (CirclesGridFinderParameters)

static int pyopencv_cv_CirclesGridFinderParameters_CirclesGridFinderParameters(pyopencv_CirclesGridFinderParameters_t* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::CirclesGridFinderParameters());
        return 0;
    }

    return -1;
}



// Tables (CirclesGridFinderParameters)

static PyGetSetDef pyopencv_CirclesGridFinderParameters_getseters[] =
{
    {(char*)"convexHullFactor", (getter)pyopencv_CirclesGridFinderParameters_get_convexHullFactor, (setter)pyopencv_CirclesGridFinderParameters_set_convexHullFactor, (char*)"convexHullFactor", NULL},
    {(char*)"densityNeighborhoodSize", (getter)pyopencv_CirclesGridFinderParameters_get_densityNeighborhoodSize, (setter)pyopencv_CirclesGridFinderParameters_set_densityNeighborhoodSize, (char*)"densityNeighborhoodSize", NULL},
    {(char*)"edgeGain", (getter)pyopencv_CirclesGridFinderParameters_get_edgeGain, (setter)pyopencv_CirclesGridFinderParameters_set_edgeGain, (char*)"edgeGain", NULL},
    {(char*)"edgePenalty", (getter)pyopencv_CirclesGridFinderParameters_get_edgePenalty, (setter)pyopencv_CirclesGridFinderParameters_set_edgePenalty, (char*)"edgePenalty", NULL},
    {(char*)"existingVertexGain", (getter)pyopencv_CirclesGridFinderParameters_get_existingVertexGain, (setter)pyopencv_CirclesGridFinderParameters_set_existingVertexGain, (char*)"existingVertexGain", NULL},
    {(char*)"keypointScale", (getter)pyopencv_CirclesGridFinderParameters_get_keypointScale, (setter)pyopencv_CirclesGridFinderParameters_set_keypointScale, (char*)"keypointScale", NULL},
    {(char*)"kmeansAttempts", (getter)pyopencv_CirclesGridFinderParameters_get_kmeansAttempts, (setter)pyopencv_CirclesGridFinderParameters_set_kmeansAttempts, (char*)"kmeansAttempts", NULL},
    {(char*)"minDensity", (getter)pyopencv_CirclesGridFinderParameters_get_minDensity, (setter)pyopencv_CirclesGridFinderParameters_set_minDensity, (char*)"minDensity", NULL},
    {(char*)"minDistanceToAddKeypoint", (getter)pyopencv_CirclesGridFinderParameters_get_minDistanceToAddKeypoint, (setter)pyopencv_CirclesGridFinderParameters_set_minDistanceToAddKeypoint, (char*)"minDistanceToAddKeypoint", NULL},
    {(char*)"minGraphConfidence", (getter)pyopencv_CirclesGridFinderParameters_get_minGraphConfidence, (setter)pyopencv_CirclesGridFinderParameters_set_minGraphConfidence, (char*)"minGraphConfidence", NULL},
    {(char*)"minRNGEdgeSwitchDist", (getter)pyopencv_CirclesGridFinderParameters_get_minRNGEdgeSwitchDist, (setter)pyopencv_CirclesGridFinderParameters_set_minRNGEdgeSwitchDist, (char*)"minRNGEdgeSwitchDist", NULL},
    {(char*)"vertexGain", (getter)pyopencv_CirclesGridFinderParameters_get_vertexGain, (setter)pyopencv_CirclesGridFinderParameters_set_vertexGain, (char*)"vertexGain", NULL},
    {(char*)"vertexPenalty", (getter)pyopencv_CirclesGridFinderParameters_get_vertexPenalty, (setter)pyopencv_CirclesGridFinderParameters_set_vertexPenalty, (char*)"vertexPenalty", NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_CirclesGridFinderParameters_methods[] =
{

    {NULL,          NULL}
};

// Converter (CirclesGridFinderParameters)

template<>
struct PyOpenCV_Converter< cv::CirclesGridFinderParameters >
{
    static PyObject* from(const cv::CirclesGridFinderParameters& r)
    {
        return pyopencv_CirclesGridFinderParameters_Instance(r);
    }
    static bool to(PyObject* src, cv::CirclesGridFinderParameters& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        cv::CirclesGridFinderParameters * dst_;
        if (pyopencv_CirclesGridFinderParameters_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected cv::CirclesGridFinderParameters for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// CirclesGridFinderParameters2 (Generic)
//================================================================================

// GetSet (CirclesGridFinderParameters2)


static PyObject* pyopencv_CirclesGridFinderParameters2_get_maxRectifiedDistance(pyopencv_CirclesGridFinderParameters2_t* p, void *closure)
{
    return pyopencv_from(p->v.maxRectifiedDistance);
}

static int pyopencv_CirclesGridFinderParameters2_set_maxRectifiedDistance(pyopencv_CirclesGridFinderParameters2_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxRectifiedDistance attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.maxRectifiedDistance, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_CirclesGridFinderParameters2_get_squareSize(pyopencv_CirclesGridFinderParameters2_t* p, void *closure)
{
    return pyopencv_from(p->v.squareSize);
}

static int pyopencv_CirclesGridFinderParameters2_set_squareSize(pyopencv_CirclesGridFinderParameters2_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the squareSize attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.squareSize, ArgInfo("value", false)) ? 0 : -1;
}


// Methods (CirclesGridFinderParameters2)

static int pyopencv_cv_CirclesGridFinderParameters2_CirclesGridFinderParameters2(pyopencv_CirclesGridFinderParameters2_t* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::CirclesGridFinderParameters2());
        return 0;
    }

    return -1;
}



// Tables (CirclesGridFinderParameters2)

static PyGetSetDef pyopencv_CirclesGridFinderParameters2_getseters[] =
{
    {(char*)"maxRectifiedDistance", (getter)pyopencv_CirclesGridFinderParameters2_get_maxRectifiedDistance, (setter)pyopencv_CirclesGridFinderParameters2_set_maxRectifiedDistance, (char*)"maxRectifiedDistance", NULL},
    {(char*)"squareSize", (getter)pyopencv_CirclesGridFinderParameters2_get_squareSize, (setter)pyopencv_CirclesGridFinderParameters2_set_squareSize, (char*)"squareSize", NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_CirclesGridFinderParameters2_methods[] =
{

    {NULL,          NULL}
};

// Converter (CirclesGridFinderParameters2)

template<>
struct PyOpenCV_Converter< cv::CirclesGridFinderParameters2 >
{
    static PyObject* from(const cv::CirclesGridFinderParameters2& r)
    {
        return pyopencv_CirclesGridFinderParameters2_Instance(r);
    }
    static bool to(PyObject* src, cv::CirclesGridFinderParameters2& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        cv::CirclesGridFinderParameters2 * dst_;
        if (pyopencv_CirclesGridFinderParameters2_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected cv::CirclesGridFinderParameters2 for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// DenseOpticalFlow (Generic)
//================================================================================

// GetSet (DenseOpticalFlow)



// Methods (DenseOpticalFlow)

static PyObject* pyopencv_cv_DenseOpticalFlow_calc(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DenseOpticalFlow> * self1 = 0;
    if (!pyopencv_DenseOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DenseOpticalFlow' or its derivative)");
    Ptr<cv::DenseOpticalFlow> _self_ = *(self1);
    {
    PyObject* pyobj_I0 = NULL;
    Mat I0;
    PyObject* pyobj_I1 = NULL;
    Mat I1;
    PyObject* pyobj_flow = NULL;
    Mat flow;

    const char* keywords[] = { "I0", "I1", "flow", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO:DenseOpticalFlow.calc", (char**)keywords, &pyobj_I0, &pyobj_I1, &pyobj_flow) &&
        pyopencv_to(pyobj_I0, I0, ArgInfo("I0", 0)) &&
        pyopencv_to(pyobj_I1, I1, ArgInfo("I1", 0)) &&
        pyopencv_to(pyobj_flow, flow, ArgInfo("flow", 1)) )
    {
        ERRWRAP2(_self_->calc(I0, I1, flow));
        return pyopencv_from(flow);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_I0 = NULL;
    UMat I0;
    PyObject* pyobj_I1 = NULL;
    UMat I1;
    PyObject* pyobj_flow = NULL;
    UMat flow;

    const char* keywords[] = { "I0", "I1", "flow", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO:DenseOpticalFlow.calc", (char**)keywords, &pyobj_I0, &pyobj_I1, &pyobj_flow) &&
        pyopencv_to(pyobj_I0, I0, ArgInfo("I0", 0)) &&
        pyopencv_to(pyobj_I1, I1, ArgInfo("I1", 0)) &&
        pyopencv_to(pyobj_flow, flow, ArgInfo("flow", 1)) )
    {
        ERRWRAP2(_self_->calc(I0, I1, flow));
        return pyopencv_from(flow);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_DenseOpticalFlow_collectGarbage(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DenseOpticalFlow> * self1 = 0;
    if (!pyopencv_DenseOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DenseOpticalFlow' or its derivative)");
    Ptr<cv::DenseOpticalFlow> _self_ = *(self1);

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->collectGarbage());
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (DenseOpticalFlow)

static PyGetSetDef pyopencv_DenseOpticalFlow_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_DenseOpticalFlow_methods[] =
{
    {"calc", CV_PY_FN_WITH_KW_(pyopencv_cv_DenseOpticalFlow_calc, 0), "calc(I0, I1, flow) -> flow\n.   @brief Calculates an optical flow.\n.   \n.       @param I0 first 8-bit single-channel input image.\n.       @param I1 second input image of the same size and the same type as prev.\n.       @param flow computed flow image that has the same size as prev and type CV_32FC2."},
    {"collectGarbage", CV_PY_FN_WITH_KW_(pyopencv_cv_DenseOpticalFlow_collectGarbage, 0), "collectGarbage() -> None\n.   @brief Releases all inner buffers."},

    {NULL,          NULL}
};

// Converter (DenseOpticalFlow)

template<>
struct PyOpenCV_Converter< Ptr<cv::DenseOpticalFlow> >
{
    static PyObject* from(const Ptr<cv::DenseOpticalFlow>& r)
    {
        return pyopencv_DenseOpticalFlow_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::DenseOpticalFlow>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::DenseOpticalFlow> * dst_;
        if (pyopencv_DenseOpticalFlow_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::DenseOpticalFlow> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// DescriptorMatcher (Generic)
//================================================================================

// GetSet (DescriptorMatcher)



// Methods (DescriptorMatcher)

static PyObject* pyopencv_cv_DescriptorMatcher_add(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);
    {
    PyObject* pyobj_descriptors = NULL;
    vector_Mat descriptors;

    const char* keywords[] = { "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:DescriptorMatcher.add", (char**)keywords, &pyobj_descriptors) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 0)) )
    {
        ERRWRAP2(_self_->add(descriptors));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_descriptors = NULL;
    vector_Mat descriptors;

    const char* keywords[] = { "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:DescriptorMatcher.add", (char**)keywords, &pyobj_descriptors) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 0)) )
    {
        ERRWRAP2(_self_->add(descriptors));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_clear(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_clone(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);
    bool emptyTrainData=false;
    Ptr<DescriptorMatcher> retval;

    const char* keywords[] = { "emptyTrainData", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|b:DescriptorMatcher.clone", (char**)keywords, &emptyTrainData) )
    {
        ERRWRAP2(retval = _self_->clone(emptyTrainData));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    {
    PyObject* pyobj_descriptorMatcherType = NULL;
    String descriptorMatcherType;
    Ptr<DescriptorMatcher> retval;

    const char* keywords[] = { "descriptorMatcherType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:DescriptorMatcher.create", (char**)keywords, &pyobj_descriptorMatcherType) &&
        pyopencv_to(pyobj_descriptorMatcherType, descriptorMatcherType, ArgInfo("descriptorMatcherType", 0)) )
    {
        ERRWRAP2(retval = cv::DescriptorMatcher::create(descriptorMatcherType));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    int matcherType=0;
    Ptr<DescriptorMatcher> retval;

    const char* keywords[] = { "matcherType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:DescriptorMatcher.create", (char**)keywords, &matcherType) )
    {
        ERRWRAP2(retval = cv::DescriptorMatcher::create(matcherType));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_empty(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_getTrainDescriptors(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);
    std::vector<Mat> retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTrainDescriptors());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_isMaskSupported(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isMaskSupported());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_knnMatch(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);
    {
    PyObject* pyobj_queryDescriptors = NULL;
    Mat queryDescriptors;
    PyObject* pyobj_trainDescriptors = NULL;
    Mat trainDescriptors;
    vector_vector_DMatch matches;
    int k=0;
    PyObject* pyobj_mask = NULL;
    Mat mask;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "trainDescriptors", "k", "mask", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOi|Ob:DescriptorMatcher.knnMatch", (char**)keywords, &pyobj_queryDescriptors, &pyobj_trainDescriptors, &k, &pyobj_mask, &compactResult) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_trainDescriptors, trainDescriptors, ArgInfo("trainDescriptors", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->knnMatch(queryDescriptors, trainDescriptors, matches, k, mask, compactResult));
        return pyopencv_from(matches);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_queryDescriptors = NULL;
    UMat queryDescriptors;
    PyObject* pyobj_trainDescriptors = NULL;
    UMat trainDescriptors;
    vector_vector_DMatch matches;
    int k=0;
    PyObject* pyobj_mask = NULL;
    UMat mask;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "trainDescriptors", "k", "mask", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOi|Ob:DescriptorMatcher.knnMatch", (char**)keywords, &pyobj_queryDescriptors, &pyobj_trainDescriptors, &k, &pyobj_mask, &compactResult) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_trainDescriptors, trainDescriptors, ArgInfo("trainDescriptors", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->knnMatch(queryDescriptors, trainDescriptors, matches, k, mask, compactResult));
        return pyopencv_from(matches);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_queryDescriptors = NULL;
    Mat queryDescriptors;
    vector_vector_DMatch matches;
    int k=0;
    PyObject* pyobj_masks = NULL;
    vector_Mat masks;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "k", "masks", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|Ob:DescriptorMatcher.knnMatch", (char**)keywords, &pyobj_queryDescriptors, &k, &pyobj_masks, &compactResult) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_masks, masks, ArgInfo("masks", 0)) )
    {
        ERRWRAP2(_self_->knnMatch(queryDescriptors, matches, k, masks, compactResult));
        return pyopencv_from(matches);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_queryDescriptors = NULL;
    UMat queryDescriptors;
    vector_vector_DMatch matches;
    int k=0;
    PyObject* pyobj_masks = NULL;
    vector_Mat masks;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "k", "masks", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|Ob:DescriptorMatcher.knnMatch", (char**)keywords, &pyobj_queryDescriptors, &k, &pyobj_masks, &compactResult) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_masks, masks, ArgInfo("masks", 0)) )
    {
        ERRWRAP2(_self_->knnMatch(queryDescriptors, matches, k, masks, compactResult));
        return pyopencv_from(matches);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_match(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);
    {
    PyObject* pyobj_queryDescriptors = NULL;
    Mat queryDescriptors;
    PyObject* pyobj_trainDescriptors = NULL;
    Mat trainDescriptors;
    vector_DMatch matches;
    PyObject* pyobj_mask = NULL;
    Mat mask;

    const char* keywords[] = { "queryDescriptors", "trainDescriptors", "mask", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:DescriptorMatcher.match", (char**)keywords, &pyobj_queryDescriptors, &pyobj_trainDescriptors, &pyobj_mask) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_trainDescriptors, trainDescriptors, ArgInfo("trainDescriptors", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->match(queryDescriptors, trainDescriptors, matches, mask));
        return pyopencv_from(matches);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_queryDescriptors = NULL;
    UMat queryDescriptors;
    PyObject* pyobj_trainDescriptors = NULL;
    UMat trainDescriptors;
    vector_DMatch matches;
    PyObject* pyobj_mask = NULL;
    UMat mask;

    const char* keywords[] = { "queryDescriptors", "trainDescriptors", "mask", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:DescriptorMatcher.match", (char**)keywords, &pyobj_queryDescriptors, &pyobj_trainDescriptors, &pyobj_mask) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_trainDescriptors, trainDescriptors, ArgInfo("trainDescriptors", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->match(queryDescriptors, trainDescriptors, matches, mask));
        return pyopencv_from(matches);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_queryDescriptors = NULL;
    Mat queryDescriptors;
    vector_DMatch matches;
    PyObject* pyobj_masks = NULL;
    vector_Mat masks;

    const char* keywords[] = { "queryDescriptors", "masks", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:DescriptorMatcher.match", (char**)keywords, &pyobj_queryDescriptors, &pyobj_masks) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_masks, masks, ArgInfo("masks", 0)) )
    {
        ERRWRAP2(_self_->match(queryDescriptors, matches, masks));
        return pyopencv_from(matches);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_queryDescriptors = NULL;
    UMat queryDescriptors;
    vector_DMatch matches;
    PyObject* pyobj_masks = NULL;
    vector_Mat masks;

    const char* keywords[] = { "queryDescriptors", "masks", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:DescriptorMatcher.match", (char**)keywords, &pyobj_queryDescriptors, &pyobj_masks) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_masks, masks, ArgInfo("masks", 0)) )
    {
        ERRWRAP2(_self_->match(queryDescriptors, matches, masks));
        return pyopencv_from(matches);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_radiusMatch(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);
    {
    PyObject* pyobj_queryDescriptors = NULL;
    Mat queryDescriptors;
    PyObject* pyobj_trainDescriptors = NULL;
    Mat trainDescriptors;
    vector_vector_DMatch matches;
    float maxDistance=0.f;
    PyObject* pyobj_mask = NULL;
    Mat mask;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "trainDescriptors", "maxDistance", "mask", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOf|Ob:DescriptorMatcher.radiusMatch", (char**)keywords, &pyobj_queryDescriptors, &pyobj_trainDescriptors, &maxDistance, &pyobj_mask, &compactResult) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_trainDescriptors, trainDescriptors, ArgInfo("trainDescriptors", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->radiusMatch(queryDescriptors, trainDescriptors, matches, maxDistance, mask, compactResult));
        return pyopencv_from(matches);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_queryDescriptors = NULL;
    UMat queryDescriptors;
    PyObject* pyobj_trainDescriptors = NULL;
    UMat trainDescriptors;
    vector_vector_DMatch matches;
    float maxDistance=0.f;
    PyObject* pyobj_mask = NULL;
    UMat mask;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "trainDescriptors", "maxDistance", "mask", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOf|Ob:DescriptorMatcher.radiusMatch", (char**)keywords, &pyobj_queryDescriptors, &pyobj_trainDescriptors, &maxDistance, &pyobj_mask, &compactResult) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_trainDescriptors, trainDescriptors, ArgInfo("trainDescriptors", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->radiusMatch(queryDescriptors, trainDescriptors, matches, maxDistance, mask, compactResult));
        return pyopencv_from(matches);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_queryDescriptors = NULL;
    Mat queryDescriptors;
    vector_vector_DMatch matches;
    float maxDistance=0.f;
    PyObject* pyobj_masks = NULL;
    vector_Mat masks;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "maxDistance", "masks", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Of|Ob:DescriptorMatcher.radiusMatch", (char**)keywords, &pyobj_queryDescriptors, &maxDistance, &pyobj_masks, &compactResult) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_masks, masks, ArgInfo("masks", 0)) )
    {
        ERRWRAP2(_self_->radiusMatch(queryDescriptors, matches, maxDistance, masks, compactResult));
        return pyopencv_from(matches);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_queryDescriptors = NULL;
    UMat queryDescriptors;
    vector_vector_DMatch matches;
    float maxDistance=0.f;
    PyObject* pyobj_masks = NULL;
    vector_Mat masks;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "maxDistance", "masks", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Of|Ob:DescriptorMatcher.radiusMatch", (char**)keywords, &pyobj_queryDescriptors, &maxDistance, &pyobj_masks, &compactResult) &&
        pyopencv_to(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to(pyobj_masks, masks, ArgInfo("masks", 0)) )
    {
        ERRWRAP2(_self_->radiusMatch(queryDescriptors, matches, maxDistance, masks, compactResult));
        return pyopencv_from(matches);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_read(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);
    {
    PyObject* pyobj_fileName = NULL;
    String fileName;

    const char* keywords[] = { "fileName", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:DescriptorMatcher.read", (char**)keywords, &pyobj_fileName) &&
        pyopencv_to(pyobj_fileName, fileName, ArgInfo("fileName", 0)) )
    {
        ERRWRAP2(_self_->read(fileName));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_arg1 = NULL;
    FileNode arg1;

    const char* keywords[] = { "arg1", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:DescriptorMatcher.read", (char**)keywords, &pyobj_arg1) &&
        pyopencv_to(pyobj_arg1, arg1, ArgInfo("arg1", 0)) )
    {
        ERRWRAP2(_self_->read(arg1));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_train(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->train());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_write(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);
    {
    PyObject* pyobj_fileName = NULL;
    String fileName;

    const char* keywords[] = { "fileName", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:DescriptorMatcher.write", (char**)keywords, &pyobj_fileName) &&
        pyopencv_to(pyobj_fileName, fileName, ArgInfo("fileName", 0)) )
    {
        ERRWRAP2(_self_->write(fileName));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_fs = NULL;
    Ptr<FileStorage> fs;
    PyObject* pyobj_name = NULL;
    String name;

    const char* keywords[] = { "fs", "name", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:DescriptorMatcher.write", (char**)keywords, &pyobj_fs, &pyobj_name) &&
        pyopencv_to(pyobj_fs, fs, ArgInfo("fs", 0)) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) )
    {
        ERRWRAP2(_self_->write(fs, name));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}



// Tables (DescriptorMatcher)

static PyGetSetDef pyopencv_DescriptorMatcher_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_DescriptorMatcher_methods[] =
{
    {"add", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_add, 0), "add(descriptors) -> None\n.   @brief Adds descriptors to train a CPU(trainDescCollectionis) or GPU(utrainDescCollectionis) descriptor\n.       collection.\n.   \n.       If the collection is not empty, the new descriptors are added to existing train descriptors.\n.   \n.       @param descriptors Descriptors to add. Each descriptors[i] is a set of descriptors from the same\n.       train image."},
    {"clear", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_clear, 0), "clear() -> None\n.   @brief Clears the train descriptor collections."},
    {"clone", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_clone, 0), "clone([, emptyTrainData]) -> retval\n.   @brief Clones the matcher.\n.   \n.       @param emptyTrainData If emptyTrainData is false, the method creates a deep copy of the object,\n.       that is, copies both parameters and train data. If emptyTrainData is true, the method creates an\n.       object copy with the current parameters but with empty train data."},
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_create_static, METH_STATIC), "create(descriptorMatcherType) -> retval\n.   @brief Creates a descriptor matcher of a given type with the default parameters (using default\n.       constructor).\n.   \n.       @param descriptorMatcherType Descriptor matcher type. Now the following matcher types are\n.       supported:\n.       -   `BruteForce` (it uses L2 )\n.       -   `BruteForce-L1`\n.       -   `BruteForce-Hamming`\n.       -   `BruteForce-Hamming(2)`\n.       -   `FlannBased`\n\n\n\ncreate(matcherType) -> retval\n."},
    {"empty", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_empty, 0), "empty() -> retval\n.   @brief Returns true if there are no train descriptors in the both collections."},
    {"getTrainDescriptors", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_getTrainDescriptors, 0), "getTrainDescriptors() -> retval\n.   @brief Returns a constant link to the train descriptor collection trainDescCollection ."},
    {"isMaskSupported", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_isMaskSupported, 0), "isMaskSupported() -> retval\n.   @brief Returns true if the descriptor matcher supports masking permissible matches."},
    {"knnMatch", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_knnMatch, 0), "knnMatch(queryDescriptors, trainDescriptors, k[, mask[, compactResult]]) -> matches\n.   @brief Finds the k best matches for each descriptor from a query set.\n.   \n.       @param queryDescriptors Query set of descriptors.\n.       @param trainDescriptors Train set of descriptors. This set is not added to the train descriptors\n.       collection stored in the class object.\n.       @param mask Mask specifying permissible matches between an input query and train matrices of\n.       descriptors.\n.       @param matches Matches. Each matches[i] is k or less matches for the same query descriptor.\n.       @param k Count of best matches found per each query descriptor or less if a query descriptor has\n.       less than k possible matches in total.\n.       @param compactResult Parameter used when the mask (or masks) is not empty. If compactResult is\n.       false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,\n.       the matches vector does not contain matches for fully masked-out query descriptors.\n.   \n.       These extended variants of DescriptorMatcher::match methods find several best matches for each query\n.       descriptor. The matches are returned in the distance increasing order. See DescriptorMatcher::match\n.       for the details about query and train descriptors.\n\n\n\nknnMatch(queryDescriptors, k[, masks[, compactResult]]) -> matches\n.   @overload\n.       @param queryDescriptors Query set of descriptors.\n.       @param matches Matches. Each matches[i] is k or less matches for the same query descriptor.\n.       @param k Count of best matches found per each query descriptor or less if a query descriptor has\n.       less than k possible matches in total.\n.       @param masks Set of masks. Each masks[i] specifies permissible matches between the input query\n.       descriptors and stored train descriptors from the i-th image trainDescCollection[i].\n.       @param compactResult Parameter used when the mask (or masks) is not empty. If compactResult is\n.       false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,\n.       the matches vector does not contain matches for fully masked-out query descriptors."},
    {"match", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_match, 0), "match(queryDescriptors, trainDescriptors[, mask]) -> matches\n.   @brief Finds the best match for each descriptor from a query set.\n.   \n.       @param queryDescriptors Query set of descriptors.\n.       @param trainDescriptors Train set of descriptors. This set is not added to the train descriptors\n.       collection stored in the class object.\n.       @param matches Matches. If a query descriptor is masked out in mask , no match is added for this\n.       descriptor. So, matches size may be smaller than the query descriptors count.\n.       @param mask Mask specifying permissible matches between an input query and train matrices of\n.       descriptors.\n.   \n.       In the first variant of this method, the train descriptors are passed as an input argument. In the\n.       second variant of the method, train descriptors collection that was set by DescriptorMatcher::add is\n.       used. Optional mask (or masks) can be passed to specify which query and training descriptors can be\n.       matched. Namely, queryDescriptors[i] can be matched with trainDescriptors[j] only if\n.       mask.at\\<uchar\\>(i,j) is non-zero.\n\n\n\nmatch(queryDescriptors[, masks]) -> matches\n.   @overload\n.       @param queryDescriptors Query set of descriptors.\n.       @param matches Matches. If a query descriptor is masked out in mask , no match is added for this\n.       descriptor. So, matches size may be smaller than the query descriptors count.\n.       @param masks Set of masks. Each masks[i] specifies permissible matches between the input query\n.       descriptors and stored train descriptors from the i-th image trainDescCollection[i]."},
    {"radiusMatch", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_radiusMatch, 0), "radiusMatch(queryDescriptors, trainDescriptors, maxDistance[, mask[, compactResult]]) -> matches\n.   @brief For each query descriptor, finds the training descriptors not farther than the specified distance.\n.   \n.       @param queryDescriptors Query set of descriptors.\n.       @param trainDescriptors Train set of descriptors. This set is not added to the train descriptors\n.       collection stored in the class object.\n.       @param matches Found matches.\n.       @param compactResult Parameter used when the mask (or masks) is not empty. If compactResult is\n.       false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,\n.       the matches vector does not contain matches for fully masked-out query descriptors.\n.       @param maxDistance Threshold for the distance between matched descriptors. Distance means here\n.       metric distance (e.g. Hamming distance), not the distance between coordinates (which is measured\n.       in Pixels)!\n.       @param mask Mask specifying permissible matches between an input query and train matrices of\n.       descriptors.\n.   \n.       For each query descriptor, the methods find such training descriptors that the distance between the\n.       query descriptor and the training descriptor is equal or smaller than maxDistance. Found matches are\n.       returned in the distance increasing order.\n\n\n\nradiusMatch(queryDescriptors, maxDistance[, masks[, compactResult]]) -> matches\n.   @overload\n.       @param queryDescriptors Query set of descriptors.\n.       @param matches Found matches.\n.       @param maxDistance Threshold for the distance between matched descriptors. Distance means here\n.       metric distance (e.g. Hamming distance), not the distance between coordinates (which is measured\n.       in Pixels)!\n.       @param masks Set of masks. Each masks[i] specifies permissible matches between the input query\n.       descriptors and stored train descriptors from the i-th image trainDescCollection[i].\n.       @param compactResult Parameter used when the mask (or masks) is not empty. If compactResult is\n.       false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,\n.       the matches vector does not contain matches for fully masked-out query descriptors."},
    {"read", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_read, 0), "read(fileName) -> None\n.   \n\n\n\nread(arg1) -> None\n."},
    {"train", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_train, 0), "train() -> None\n.   @brief Trains a descriptor matcher\n.   \n.       Trains a descriptor matcher (for example, the flann index). In all methods to match, the method\n.       train() is run every time before matching. Some descriptor matchers (for example, BruteForceMatcher)\n.       have an empty implementation of this method. Other matchers really train their inner structures (for\n.       example, FlannBasedMatcher trains flann::Index )."},
    {"write", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_write, 0), "write(fileName) -> None\n.   \n\n\n\nwrite(fs[, name]) -> None\n."},

    {NULL,          NULL}
};

// Converter (DescriptorMatcher)

template<>
struct PyOpenCV_Converter< Ptr<cv::DescriptorMatcher> >
{
    static PyObject* from(const Ptr<cv::DescriptorMatcher>& r)
    {
        return pyopencv_DescriptorMatcher_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::DescriptorMatcher>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::DescriptorMatcher> * dst_;
        if (pyopencv_DescriptorMatcher_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::DescriptorMatcher> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// DualTVL1OpticalFlow (Generic)
//================================================================================

// GetSet (DualTVL1OpticalFlow)



// Methods (DualTVL1OpticalFlow)

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    double tau=0.25;
    double lambda=0.15;
    double theta=0.3;
    int nscales=5;
    int warps=5;
    double epsilon=0.01;
    int innnerIterations=30;
    int outerIterations=10;
    double scaleStep=0.8;
    double gamma=0.0;
    int medianFiltering=5;
    bool useInitialFlow=false;
    Ptr<DualTVL1OpticalFlow> retval;

    const char* keywords[] = { "tau", "lambda", "theta", "nscales", "warps", "epsilon", "innnerIterations", "outerIterations", "scaleStep", "gamma", "medianFiltering", "useInitialFlow", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|dddiidiiddib:DualTVL1OpticalFlow.create", (char**)keywords, &tau, &lambda, &theta, &nscales, &warps, &epsilon, &innnerIterations, &outerIterations, &scaleStep, &gamma, &medianFiltering, &useInitialFlow) )
    {
        ERRWRAP2(retval = cv::DualTVL1OpticalFlow::create(tau, lambda, theta, nscales, warps, epsilon, innnerIterations, outerIterations, scaleStep, gamma, medianFiltering, useInitialFlow));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getEpsilon(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getEpsilon());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getGamma(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getGamma());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getInnerIterations(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getInnerIterations());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getLambda(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getLambda());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getMedianFiltering(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMedianFiltering());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getOuterIterations(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getOuterIterations());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getScaleStep(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getScaleStep());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getScalesNumber(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getScalesNumber());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getTau(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTau());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getTheta(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTheta());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getUseInitialFlow(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getUseInitialFlow());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_getWarpingsNumber(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getWarpingsNumber());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setEpsilon(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:DualTVL1OpticalFlow.setEpsilon", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setEpsilon(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setGamma(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:DualTVL1OpticalFlow.setGamma", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setGamma(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setInnerIterations(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:DualTVL1OpticalFlow.setInnerIterations", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setInnerIterations(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setLambda(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:DualTVL1OpticalFlow.setLambda", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setLambda(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setMedianFiltering(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:DualTVL1OpticalFlow.setMedianFiltering", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setMedianFiltering(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setOuterIterations(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:DualTVL1OpticalFlow.setOuterIterations", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setOuterIterations(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setScaleStep(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:DualTVL1OpticalFlow.setScaleStep", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setScaleStep(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setScalesNumber(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:DualTVL1OpticalFlow.setScalesNumber", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setScalesNumber(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setTau(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:DualTVL1OpticalFlow.setTau", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setTau(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setTheta(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:DualTVL1OpticalFlow.setTheta", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setTheta(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setUseInitialFlow(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    bool val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:DualTVL1OpticalFlow.setUseInitialFlow", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setUseInitialFlow(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DualTVL1OpticalFlow_setWarpingsNumber(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DualTVL1OpticalFlow> * self1 = 0;
    if (!pyopencv_DualTVL1OpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DualTVL1OpticalFlow' or its derivative)");
    Ptr<cv::DualTVL1OpticalFlow> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:DualTVL1OpticalFlow.setWarpingsNumber", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setWarpingsNumber(val));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (DualTVL1OpticalFlow)

static PyGetSetDef pyopencv_DualTVL1OpticalFlow_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_DualTVL1OpticalFlow_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_create_static, METH_STATIC), "create([, tau[, lambda[, theta[, nscales[, warps[, epsilon[, innnerIterations[, outerIterations[, scaleStep[, gamma[, medianFiltering[, useInitialFlow]]]]]]]]]]]]) -> retval\n.   @brief Creates instance of cv::DualTVL1OpticalFlow"},
    {"getEpsilon", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_getEpsilon, 0), "getEpsilon() -> retval\n.   @see setEpsilon"},
    {"getGamma", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_getGamma, 0), "getGamma() -> retval\n.   @see setGamma"},
    {"getInnerIterations", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_getInnerIterations, 0), "getInnerIterations() -> retval\n.   @see setInnerIterations"},
    {"getLambda", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_getLambda, 0), "getLambda() -> retval\n.   @see setLambda"},
    {"getMedianFiltering", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_getMedianFiltering, 0), "getMedianFiltering() -> retval\n.   @see setMedianFiltering"},
    {"getOuterIterations", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_getOuterIterations, 0), "getOuterIterations() -> retval\n.   @see setOuterIterations"},
    {"getScaleStep", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_getScaleStep, 0), "getScaleStep() -> retval\n.   @see setScaleStep"},
    {"getScalesNumber", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_getScalesNumber, 0), "getScalesNumber() -> retval\n.   @see setScalesNumber"},
    {"getTau", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_getTau, 0), "getTau() -> retval\n.   @see setTau"},
    {"getTheta", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_getTheta, 0), "getTheta() -> retval\n.   @see setTheta"},
    {"getUseInitialFlow", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_getUseInitialFlow, 0), "getUseInitialFlow() -> retval\n.   @see setUseInitialFlow"},
    {"getWarpingsNumber", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_getWarpingsNumber, 0), "getWarpingsNumber() -> retval\n.   @see setWarpingsNumber"},
    {"setEpsilon", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_setEpsilon, 0), "setEpsilon(val) -> None\n.   @copybrief getEpsilon @see getEpsilon"},
    {"setGamma", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_setGamma, 0), "setGamma(val) -> None\n.   @copybrief getGamma @see getGamma"},
    {"setInnerIterations", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_setInnerIterations, 0), "setInnerIterations(val) -> None\n.   @copybrief getInnerIterations @see getInnerIterations"},
    {"setLambda", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_setLambda, 0), "setLambda(val) -> None\n.   @copybrief getLambda @see getLambda"},
    {"setMedianFiltering", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_setMedianFiltering, 0), "setMedianFiltering(val) -> None\n.   @copybrief getMedianFiltering @see getMedianFiltering"},
    {"setOuterIterations", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_setOuterIterations, 0), "setOuterIterations(val) -> None\n.   @copybrief getOuterIterations @see getOuterIterations"},
    {"setScaleStep", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_setScaleStep, 0), "setScaleStep(val) -> None\n.   @copybrief getScaleStep @see getScaleStep"},
    {"setScalesNumber", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_setScalesNumber, 0), "setScalesNumber(val) -> None\n.   @copybrief getScalesNumber @see getScalesNumber"},
    {"setTau", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_setTau, 0), "setTau(val) -> None\n.   @copybrief getTau @see getTau"},
    {"setTheta", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_setTheta, 0), "setTheta(val) -> None\n.   @copybrief getTheta @see getTheta"},
    {"setUseInitialFlow", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_setUseInitialFlow, 0), "setUseInitialFlow(val) -> None\n.   @copybrief getUseInitialFlow @see getUseInitialFlow"},
    {"setWarpingsNumber", CV_PY_FN_WITH_KW_(pyopencv_cv_DualTVL1OpticalFlow_setWarpingsNumber, 0), "setWarpingsNumber(val) -> None\n.   @copybrief getWarpingsNumber @see getWarpingsNumber"},

    {NULL,          NULL}
};

// Converter (DualTVL1OpticalFlow)

template<>
struct PyOpenCV_Converter< Ptr<cv::DualTVL1OpticalFlow> >
{
    static PyObject* from(const Ptr<cv::DualTVL1OpticalFlow>& r)
    {
        return pyopencv_DualTVL1OpticalFlow_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::DualTVL1OpticalFlow>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::DualTVL1OpticalFlow> * dst_;
        if (pyopencv_DualTVL1OpticalFlow_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::DualTVL1OpticalFlow> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// FarnebackOpticalFlow (Generic)
//================================================================================

// GetSet (FarnebackOpticalFlow)



// Methods (FarnebackOpticalFlow)

static PyObject* pyopencv_cv_FarnebackOpticalFlow_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    int numLevels=5;
    double pyrScale=0.5;
    bool fastPyramids=false;
    int winSize=13;
    int numIters=10;
    int polyN=5;
    double polySigma=1.1;
    int flags=0;
    Ptr<FarnebackOpticalFlow> retval;

    const char* keywords[] = { "numLevels", "pyrScale", "fastPyramids", "winSize", "numIters", "polyN", "polySigma", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|idbiiidi:FarnebackOpticalFlow.create", (char**)keywords, &numLevels, &pyrScale, &fastPyramids, &winSize, &numIters, &polyN, &polySigma, &flags) )
    {
        ERRWRAP2(retval = cv::FarnebackOpticalFlow::create(numLevels, pyrScale, fastPyramids, winSize, numIters, polyN, polySigma, flags));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getFastPyramids(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFastPyramids());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getFlags(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFlags());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getNumIters(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNumIters());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getNumLevels(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNumLevels());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getPolyN(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPolyN());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getPolySigma(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPolySigma());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getPyrScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPyrScale());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getWinSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getWinSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setFastPyramids(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    bool fastPyramids=0;

    const char* keywords[] = { "fastPyramids", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:FarnebackOpticalFlow.setFastPyramids", (char**)keywords, &fastPyramids) )
    {
        ERRWRAP2(_self_->setFastPyramids(fastPyramids));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setFlags(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    int flags=0;

    const char* keywords[] = { "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:FarnebackOpticalFlow.setFlags", (char**)keywords, &flags) )
    {
        ERRWRAP2(_self_->setFlags(flags));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setNumIters(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    int numIters=0;

    const char* keywords[] = { "numIters", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:FarnebackOpticalFlow.setNumIters", (char**)keywords, &numIters) )
    {
        ERRWRAP2(_self_->setNumIters(numIters));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setNumLevels(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    int numLevels=0;

    const char* keywords[] = { "numLevels", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:FarnebackOpticalFlow.setNumLevels", (char**)keywords, &numLevels) )
    {
        ERRWRAP2(_self_->setNumLevels(numLevels));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setPolyN(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    int polyN=0;

    const char* keywords[] = { "polyN", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:FarnebackOpticalFlow.setPolyN", (char**)keywords, &polyN) )
    {
        ERRWRAP2(_self_->setPolyN(polyN));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setPolySigma(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    double polySigma=0;

    const char* keywords[] = { "polySigma", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:FarnebackOpticalFlow.setPolySigma", (char**)keywords, &polySigma) )
    {
        ERRWRAP2(_self_->setPolySigma(polySigma));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setPyrScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    double pyrScale=0;

    const char* keywords[] = { "pyrScale", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:FarnebackOpticalFlow.setPyrScale", (char**)keywords, &pyrScale) )
    {
        ERRWRAP2(_self_->setPyrScale(pyrScale));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setWinSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    int winSize=0;

    const char* keywords[] = { "winSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:FarnebackOpticalFlow.setWinSize", (char**)keywords, &winSize) )
    {
        ERRWRAP2(_self_->setWinSize(winSize));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (FarnebackOpticalFlow)

static PyGetSetDef pyopencv_FarnebackOpticalFlow_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_FarnebackOpticalFlow_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_create_static, METH_STATIC), "create([, numLevels[, pyrScale[, fastPyramids[, winSize[, numIters[, polyN[, polySigma[, flags]]]]]]]]) -> retval\n."},
    {"getFastPyramids", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_getFastPyramids, 0), "getFastPyramids() -> retval\n."},
    {"getFlags", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_getFlags, 0), "getFlags() -> retval\n."},
    {"getNumIters", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_getNumIters, 0), "getNumIters() -> retval\n."},
    {"getNumLevels", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_getNumLevels, 0), "getNumLevels() -> retval\n."},
    {"getPolyN", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_getPolyN, 0), "getPolyN() -> retval\n."},
    {"getPolySigma", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_getPolySigma, 0), "getPolySigma() -> retval\n."},
    {"getPyrScale", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_getPyrScale, 0), "getPyrScale() -> retval\n."},
    {"getWinSize", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_getWinSize, 0), "getWinSize() -> retval\n."},
    {"setFastPyramids", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_setFastPyramids, 0), "setFastPyramids(fastPyramids) -> None\n."},
    {"setFlags", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_setFlags, 0), "setFlags(flags) -> None\n."},
    {"setNumIters", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_setNumIters, 0), "setNumIters(numIters) -> None\n."},
    {"setNumLevels", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_setNumLevels, 0), "setNumLevels(numLevels) -> None\n."},
    {"setPolyN", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_setPolyN, 0), "setPolyN(polyN) -> None\n."},
    {"setPolySigma", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_setPolySigma, 0), "setPolySigma(polySigma) -> None\n."},
    {"setPyrScale", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_setPyrScale, 0), "setPyrScale(pyrScale) -> None\n."},
    {"setWinSize", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_setWinSize, 0), "setWinSize(winSize) -> None\n."},

    {NULL,          NULL}
};

// Converter (FarnebackOpticalFlow)

template<>
struct PyOpenCV_Converter< Ptr<cv::FarnebackOpticalFlow> >
{
    static PyObject* from(const Ptr<cv::FarnebackOpticalFlow>& r)
    {
        return pyopencv_FarnebackOpticalFlow_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::FarnebackOpticalFlow>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::FarnebackOpticalFlow> * dst_;
        if (pyopencv_FarnebackOpticalFlow_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::FarnebackOpticalFlow> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// FastFeatureDetector (Generic)
//================================================================================

// GetSet (FastFeatureDetector)



// Methods (FastFeatureDetector)

static PyObject* pyopencv_cv_FastFeatureDetector_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    int threshold=10;
    bool nonmaxSuppression=true;
    int type=FastFeatureDetector::TYPE_9_16;
    Ptr<FastFeatureDetector> retval;

    const char* keywords[] = { "threshold", "nonmaxSuppression", "type", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|ibi:FastFeatureDetector.create", (char**)keywords, &threshold, &nonmaxSuppression, &type) )
    {
        ERRWRAP2(retval = cv::FastFeatureDetector::create(threshold, nonmaxSuppression, type));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FastFeatureDetector_getDefaultName(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FastFeatureDetector> * self1 = 0;
    if (!pyopencv_FastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FastFeatureDetector' or its derivative)");
    Ptr<cv::FastFeatureDetector> _self_ = *(self1);
    String retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FastFeatureDetector_getNonmaxSuppression(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FastFeatureDetector> * self1 = 0;
    if (!pyopencv_FastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FastFeatureDetector' or its derivative)");
    Ptr<cv::FastFeatureDetector> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNonmaxSuppression());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FastFeatureDetector_getThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FastFeatureDetector> * self1 = 0;
    if (!pyopencv_FastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FastFeatureDetector' or its derivative)");
    Ptr<cv::FastFeatureDetector> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FastFeatureDetector_getType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FastFeatureDetector> * self1 = 0;
    if (!pyopencv_FastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FastFeatureDetector' or its derivative)");
    Ptr<cv::FastFeatureDetector> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FastFeatureDetector_setNonmaxSuppression(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FastFeatureDetector> * self1 = 0;
    if (!pyopencv_FastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FastFeatureDetector' or its derivative)");
    Ptr<cv::FastFeatureDetector> _self_ = *(self1);
    bool f=0;

    const char* keywords[] = { "f", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:FastFeatureDetector.setNonmaxSuppression", (char**)keywords, &f) )
    {
        ERRWRAP2(_self_->setNonmaxSuppression(f));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FastFeatureDetector_setThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FastFeatureDetector> * self1 = 0;
    if (!pyopencv_FastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FastFeatureDetector' or its derivative)");
    Ptr<cv::FastFeatureDetector> _self_ = *(self1);
    int threshold=0;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:FastFeatureDetector.setThreshold", (char**)keywords, &threshold) )
    {
        ERRWRAP2(_self_->setThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FastFeatureDetector_setType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FastFeatureDetector> * self1 = 0;
    if (!pyopencv_FastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FastFeatureDetector' or its derivative)");
    Ptr<cv::FastFeatureDetector> _self_ = *(self1);
    int type=0;

    const char* keywords[] = { "type", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:FastFeatureDetector.setType", (char**)keywords, &type) )
    {
        ERRWRAP2(_self_->setType(type));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (FastFeatureDetector)

static PyGetSetDef pyopencv_FastFeatureDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_FastFeatureDetector_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_FastFeatureDetector_create_static, METH_STATIC), "create([, threshold[, nonmaxSuppression[, type]]]) -> retval\n."},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_FastFeatureDetector_getDefaultName, 0), "getDefaultName() -> retval\n."},
    {"getNonmaxSuppression", CV_PY_FN_WITH_KW_(pyopencv_cv_FastFeatureDetector_getNonmaxSuppression, 0), "getNonmaxSuppression() -> retval\n."},
    {"getThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_FastFeatureDetector_getThreshold, 0), "getThreshold() -> retval\n."},
    {"getType", CV_PY_FN_WITH_KW_(pyopencv_cv_FastFeatureDetector_getType, 0), "getType() -> retval\n."},
    {"setNonmaxSuppression", CV_PY_FN_WITH_KW_(pyopencv_cv_FastFeatureDetector_setNonmaxSuppression, 0), "setNonmaxSuppression(f) -> None\n."},
    {"setThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_FastFeatureDetector_setThreshold, 0), "setThreshold(threshold) -> None\n."},
    {"setType", CV_PY_FN_WITH_KW_(pyopencv_cv_FastFeatureDetector_setType, 0), "setType(type) -> None\n."},

    {NULL,          NULL}
};

// Converter (FastFeatureDetector)

template<>
struct PyOpenCV_Converter< Ptr<cv::FastFeatureDetector> >
{
    static PyObject* from(const Ptr<cv::FastFeatureDetector>& r)
    {
        return pyopencv_FastFeatureDetector_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::FastFeatureDetector>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::FastFeatureDetector> * dst_;
        if (pyopencv_FastFeatureDetector_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::FastFeatureDetector> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// Feature2D (Generic)
//================================================================================

// GetSet (Feature2D)



// Methods (Feature2D)

static PyObject* pyopencv_cv_Feature2D_compute(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Feature2D> * self1 = 0;
    if (!pyopencv_Feature2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    Ptr<cv::Feature2D> _self_ = *(self1);
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_keypoints = NULL;
    vector_KeyPoint keypoints;
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;

    const char* keywords[] = { "image", "keypoints", "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:Feature2D.compute", (char**)keywords, &pyobj_image, &pyobj_keypoints, &pyobj_descriptors) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_keypoints, keypoints, ArgInfo("keypoints", 1)) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 1)) )
    {
        ERRWRAP2(_self_->compute(image, keypoints, descriptors));
        return Py_BuildValue("(NN)", pyopencv_from(keypoints), pyopencv_from(descriptors));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    PyObject* pyobj_keypoints = NULL;
    vector_KeyPoint keypoints;
    PyObject* pyobj_descriptors = NULL;
    UMat descriptors;

    const char* keywords[] = { "image", "keypoints", "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:Feature2D.compute", (char**)keywords, &pyobj_image, &pyobj_keypoints, &pyobj_descriptors) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_keypoints, keypoints, ArgInfo("keypoints", 1)) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 1)) )
    {
        ERRWRAP2(_self_->compute(image, keypoints, descriptors));
        return Py_BuildValue("(NN)", pyopencv_from(keypoints), pyopencv_from(descriptors));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_images = NULL;
    vector_Mat images;
    PyObject* pyobj_keypoints = NULL;
    vector_vector_KeyPoint keypoints;
    PyObject* pyobj_descriptors = NULL;
    vector_Mat descriptors;

    const char* keywords[] = { "images", "keypoints", "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:Feature2D.compute", (char**)keywords, &pyobj_images, &pyobj_keypoints, &pyobj_descriptors) &&
        pyopencv_to(pyobj_images, images, ArgInfo("images", 0)) &&
        pyopencv_to(pyobj_keypoints, keypoints, ArgInfo("keypoints", 1)) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 1)) )
    {
        ERRWRAP2(_self_->compute(images, keypoints, descriptors));
        return Py_BuildValue("(NN)", pyopencv_from(keypoints), pyopencv_from(descriptors));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_images = NULL;
    vector_Mat images;
    PyObject* pyobj_keypoints = NULL;
    vector_vector_KeyPoint keypoints;
    PyObject* pyobj_descriptors = NULL;
    vector_Mat descriptors;

    const char* keywords[] = { "images", "keypoints", "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:Feature2D.compute", (char**)keywords, &pyobj_images, &pyobj_keypoints, &pyobj_descriptors) &&
        pyopencv_to(pyobj_images, images, ArgInfo("images", 0)) &&
        pyopencv_to(pyobj_keypoints, keypoints, ArgInfo("keypoints", 1)) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 1)) )
    {
        ERRWRAP2(_self_->compute(images, keypoints, descriptors));
        return Py_BuildValue("(NN)", pyopencv_from(keypoints), pyopencv_from(descriptors));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_defaultNorm(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Feature2D> * self1 = 0;
    if (!pyopencv_Feature2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    Ptr<cv::Feature2D> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->defaultNorm());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_descriptorSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Feature2D> * self1 = 0;
    if (!pyopencv_Feature2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    Ptr<cv::Feature2D> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->descriptorSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_descriptorType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Feature2D> * self1 = 0;
    if (!pyopencv_Feature2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    Ptr<cv::Feature2D> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->descriptorType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_detect(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Feature2D> * self1 = 0;
    if (!pyopencv_Feature2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    Ptr<cv::Feature2D> _self_ = *(self1);
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    vector_KeyPoint keypoints;
    PyObject* pyobj_mask = NULL;
    Mat mask;

    const char* keywords[] = { "image", "mask", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:Feature2D.detect", (char**)keywords, &pyobj_image, &pyobj_mask) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->detect(image, keypoints, mask));
        return pyopencv_from(keypoints);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    vector_KeyPoint keypoints;
    PyObject* pyobj_mask = NULL;
    UMat mask;

    const char* keywords[] = { "image", "mask", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:Feature2D.detect", (char**)keywords, &pyobj_image, &pyobj_mask) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->detect(image, keypoints, mask));
        return pyopencv_from(keypoints);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_images = NULL;
    vector_Mat images;
    vector_vector_KeyPoint keypoints;
    PyObject* pyobj_masks = NULL;
    vector_Mat masks;

    const char* keywords[] = { "images", "masks", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:Feature2D.detect", (char**)keywords, &pyobj_images, &pyobj_masks) &&
        pyopencv_to(pyobj_images, images, ArgInfo("images", 0)) &&
        pyopencv_to(pyobj_masks, masks, ArgInfo("masks", 0)) )
    {
        ERRWRAP2(_self_->detect(images, keypoints, masks));
        return pyopencv_from(keypoints);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_images = NULL;
    vector_Mat images;
    vector_vector_KeyPoint keypoints;
    PyObject* pyobj_masks = NULL;
    vector_Mat masks;

    const char* keywords[] = { "images", "masks", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:Feature2D.detect", (char**)keywords, &pyobj_images, &pyobj_masks) &&
        pyopencv_to(pyobj_images, images, ArgInfo("images", 0)) &&
        pyopencv_to(pyobj_masks, masks, ArgInfo("masks", 0)) )
    {
        ERRWRAP2(_self_->detect(images, keypoints, masks));
        return pyopencv_from(keypoints);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_detectAndCompute(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Feature2D> * self1 = 0;
    if (!pyopencv_Feature2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    Ptr<cv::Feature2D> _self_ = *(self1);
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_mask = NULL;
    Mat mask;
    vector_KeyPoint keypoints;
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;
    bool useProvidedKeypoints=false;

    const char* keywords[] = { "image", "mask", "descriptors", "useProvidedKeypoints", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|Ob:Feature2D.detectAndCompute", (char**)keywords, &pyobj_image, &pyobj_mask, &pyobj_descriptors, &useProvidedKeypoints) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 1)) )
    {
        ERRWRAP2(_self_->detectAndCompute(image, mask, keypoints, descriptors, useProvidedKeypoints));
        return Py_BuildValue("(NN)", pyopencv_from(keypoints), pyopencv_from(descriptors));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    PyObject* pyobj_mask = NULL;
    UMat mask;
    vector_KeyPoint keypoints;
    PyObject* pyobj_descriptors = NULL;
    UMat descriptors;
    bool useProvidedKeypoints=false;

    const char* keywords[] = { "image", "mask", "descriptors", "useProvidedKeypoints", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|Ob:Feature2D.detectAndCompute", (char**)keywords, &pyobj_image, &pyobj_mask, &pyobj_descriptors, &useProvidedKeypoints) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_mask, mask, ArgInfo("mask", 0)) &&
        pyopencv_to(pyobj_descriptors, descriptors, ArgInfo("descriptors", 1)) )
    {
        ERRWRAP2(_self_->detectAndCompute(image, mask, keypoints, descriptors, useProvidedKeypoints));
        return Py_BuildValue("(NN)", pyopencv_from(keypoints), pyopencv_from(descriptors));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_empty(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Feature2D> * self1 = 0;
    if (!pyopencv_Feature2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    Ptr<cv::Feature2D> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_getDefaultName(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Feature2D> * self1 = 0;
    if (!pyopencv_Feature2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    Ptr<cv::Feature2D> _self_ = *(self1);
    String retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_read(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Feature2D> * self1 = 0;
    if (!pyopencv_Feature2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    Ptr<cv::Feature2D> _self_ = *(self1);
    {
    PyObject* pyobj_fileName = NULL;
    String fileName;

    const char* keywords[] = { "fileName", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Feature2D.read", (char**)keywords, &pyobj_fileName) &&
        pyopencv_to(pyobj_fileName, fileName, ArgInfo("fileName", 0)) )
    {
        ERRWRAP2(_self_->read(fileName));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_arg1 = NULL;
    FileNode arg1;

    const char* keywords[] = { "arg1", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Feature2D.read", (char**)keywords, &pyobj_arg1) &&
        pyopencv_to(pyobj_arg1, arg1, ArgInfo("arg1", 0)) )
    {
        ERRWRAP2(_self_->read(arg1));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_write(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Feature2D> * self1 = 0;
    if (!pyopencv_Feature2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    Ptr<cv::Feature2D> _self_ = *(self1);
    {
    PyObject* pyobj_fileName = NULL;
    String fileName;

    const char* keywords[] = { "fileName", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Feature2D.write", (char**)keywords, &pyobj_fileName) &&
        pyopencv_to(pyobj_fileName, fileName, ArgInfo("fileName", 0)) )
    {
        ERRWRAP2(_self_->write(fileName));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_fs = NULL;
    Ptr<FileStorage> fs;
    PyObject* pyobj_name = NULL;
    String name;

    const char* keywords[] = { "fs", "name", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:Feature2D.write", (char**)keywords, &pyobj_fs, &pyobj_name) &&
        pyopencv_to(pyobj_fs, fs, ArgInfo("fs", 0)) &&
        pyopencv_to(pyobj_name, name, ArgInfo("name", 0)) )
    {
        ERRWRAP2(_self_->write(fs, name));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}



// Tables (Feature2D)

static PyGetSetDef pyopencv_Feature2D_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_Feature2D_methods[] =
{
    {"compute", CV_PY_FN_WITH_KW_(pyopencv_cv_Feature2D_compute, 0), "compute(image, keypoints[, descriptors]) -> keypoints, descriptors\n.   @brief Computes the descriptors for a set of keypoints detected in an image (first variant) or image set\n.       (second variant).\n.   \n.       @param image Image.\n.       @param keypoints Input collection of keypoints. Keypoints for which a descriptor cannot be\n.       computed are removed. Sometimes new keypoints can be added, for example: SIFT duplicates keypoint\n.       with several dominant orientations (for each orientation).\n.       @param descriptors Computed descriptors. In the second variant of the method descriptors[i] are\n.       descriptors computed for a keypoints[i]. Row j is the keypoints (or keypoints[i]) is the\n.       descriptor for keypoint j-th keypoint.\n\n\n\ncompute(images, keypoints[, descriptors]) -> keypoints, descriptors\n.   @overload\n.   \n.       @param images Image set.\n.       @param keypoints Input collection of keypoints. Keypoints for which a descriptor cannot be\n.       computed are removed. Sometimes new keypoints can be added, for example: SIFT duplicates keypoint\n.       with several dominant orientations (for each orientation).\n.       @param descriptors Computed descriptors. In the second variant of the method descriptors[i] are\n.       descriptors computed for a keypoints[i]. Row j is the keypoints (or keypoints[i]) is the\n.       descriptor for keypoint j-th keypoint."},
    {"defaultNorm", CV_PY_FN_WITH_KW_(pyopencv_cv_Feature2D_defaultNorm, 0), "defaultNorm() -> retval\n."},
    {"descriptorSize", CV_PY_FN_WITH_KW_(pyopencv_cv_Feature2D_descriptorSize, 0), "descriptorSize() -> retval\n."},
    {"descriptorType", CV_PY_FN_WITH_KW_(pyopencv_cv_Feature2D_descriptorType, 0), "descriptorType() -> retval\n."},
    {"detect", CV_PY_FN_WITH_KW_(pyopencv_cv_Feature2D_detect, 0), "detect(image[, mask]) -> keypoints\n.   @brief Detects keypoints in an image (first variant) or image set (second variant).\n.   \n.       @param image Image.\n.       @param keypoints The detected keypoints. In the second variant of the method keypoints[i] is a set\n.       of keypoints detected in images[i] .\n.       @param mask Mask specifying where to look for keypoints (optional). It must be a 8-bit integer\n.       matrix with non-zero values in the region of interest.\n\n\n\ndetect(images[, masks]) -> keypoints\n.   @overload\n.       @param images Image set.\n.       @param keypoints The detected keypoints. In the second variant of the method keypoints[i] is a set\n.       of keypoints detected in images[i] .\n.       @param masks Masks for each input image specifying where to look for keypoints (optional).\n.       masks[i] is a mask for images[i]."},
    {"detectAndCompute", CV_PY_FN_WITH_KW_(pyopencv_cv_Feature2D_detectAndCompute, 0), "detectAndCompute(image, mask[, descriptors[, useProvidedKeypoints]]) -> keypoints, descriptors\n.   Detects keypoints and computes the descriptors"},
    {"empty", CV_PY_FN_WITH_KW_(pyopencv_cv_Feature2D_empty, 0), "empty() -> retval\n."},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_Feature2D_getDefaultName, 0), "getDefaultName() -> retval\n."},
    {"read", CV_PY_FN_WITH_KW_(pyopencv_cv_Feature2D_read, 0), "read(fileName) -> None\n.   \n\n\n\nread(arg1) -> None\n."},
    {"write", CV_PY_FN_WITH_KW_(pyopencv_cv_Feature2D_write, 0), "write(fileName) -> None\n.   \n\n\n\nwrite(fs[, name]) -> None\n."},

    {NULL,          NULL}
};

// Converter (Feature2D)

template<>
struct PyOpenCV_Converter< Ptr<cv::Feature2D> >
{
    static PyObject* from(const Ptr<cv::Feature2D>& r)
    {
        return pyopencv_Feature2D_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::Feature2D>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::Feature2D> * dst_;
        if (pyopencv_Feature2D_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::Feature2D> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// FlannBasedMatcher (Generic)
//================================================================================

// GetSet (FlannBasedMatcher)



// Methods (FlannBasedMatcher)

static int pyopencv_cv_FlannBasedMatcher_FlannBasedMatcher(pyopencv_FlannBasedMatcher_t* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_indexParams = NULL;
    Ptr<flann::IndexParams> indexParams=makePtr<flann::KDTreeIndexParams>();
    PyObject* pyobj_searchParams = NULL;
    Ptr<flann::SearchParams> searchParams=makePtr<flann::SearchParams>();

    const char* keywords[] = { "indexParams", "searchParams", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|OO:FlannBasedMatcher", (char**)keywords, &pyobj_indexParams, &pyobj_searchParams) &&
        pyopencv_to(pyobj_indexParams, indexParams, ArgInfo("indexParams", 0)) &&
        pyopencv_to(pyobj_searchParams, searchParams, ArgInfo("searchParams", 0)) )
    {
        new (&(self->v)) Ptr<cv::FlannBasedMatcher>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::FlannBasedMatcher(indexParams, searchParams)));
        return 0;
    }

    return -1;
}

static PyObject* pyopencv_cv_FlannBasedMatcher_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    Ptr<FlannBasedMatcher> retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv::FlannBasedMatcher::create());
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (FlannBasedMatcher)

static PyGetSetDef pyopencv_FlannBasedMatcher_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_FlannBasedMatcher_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_FlannBasedMatcher_create_static, METH_STATIC), "create() -> retval\n."},

    {NULL,          NULL}
};

// Converter (FlannBasedMatcher)

template<>
struct PyOpenCV_Converter< Ptr<cv::FlannBasedMatcher> >
{
    static PyObject* from(const Ptr<cv::FlannBasedMatcher>& r)
    {
        return pyopencv_FlannBasedMatcher_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::FlannBasedMatcher>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::FlannBasedMatcher> * dst_;
        if (pyopencv_FlannBasedMatcher_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::FlannBasedMatcher> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// GFTTDetector (Generic)
//================================================================================

// GetSet (GFTTDetector)



// Methods (GFTTDetector)

static PyObject* pyopencv_cv_GFTTDetector_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    {
    int maxCorners=1000;
    double qualityLevel=0.01;
    double minDistance=1;
    int blockSize=3;
    bool useHarrisDetector=false;
    double k=0.04;
    Ptr<GFTTDetector> retval;

    const char* keywords[] = { "maxCorners", "qualityLevel", "minDistance", "blockSize", "useHarrisDetector", "k", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|iddibd:GFTTDetector.create", (char**)keywords, &maxCorners, &qualityLevel, &minDistance, &blockSize, &useHarrisDetector, &k) )
    {
        ERRWRAP2(retval = cv::GFTTDetector::create(maxCorners, qualityLevel, minDistance, blockSize, useHarrisDetector, k));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    int maxCorners=0;
    double qualityLevel=0;
    double minDistance=0;
    int blockSize=0;
    int gradiantSize=0;
    bool useHarrisDetector=false;
    double k=0.04;
    Ptr<GFTTDetector> retval;

    const char* keywords[] = { "maxCorners", "qualityLevel", "minDistance", "blockSize", "gradiantSize", "useHarrisDetector", "k", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "iddii|bd:GFTTDetector.create", (char**)keywords, &maxCorners, &qualityLevel, &minDistance, &blockSize, &gradiantSize, &useHarrisDetector, &k) )
    {
        ERRWRAP2(retval = cv::GFTTDetector::create(maxCorners, qualityLevel, minDistance, blockSize, gradiantSize, useHarrisDetector, k));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_getBlockSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getBlockSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_getDefaultName(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    String retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_getHarrisDetector(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getHarrisDetector());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_getK(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getK());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_getMaxFeatures(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxFeatures());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_getMinDistance(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMinDistance());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_getQualityLevel(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getQualityLevel());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_setBlockSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    int blockSize=0;

    const char* keywords[] = { "blockSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:GFTTDetector.setBlockSize", (char**)keywords, &blockSize) )
    {
        ERRWRAP2(_self_->setBlockSize(blockSize));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_setHarrisDetector(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    bool val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:GFTTDetector.setHarrisDetector", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setHarrisDetector(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_setK(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    double k=0;

    const char* keywords[] = { "k", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:GFTTDetector.setK", (char**)keywords, &k) )
    {
        ERRWRAP2(_self_->setK(k));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_setMaxFeatures(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    int maxFeatures=0;

    const char* keywords[] = { "maxFeatures", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:GFTTDetector.setMaxFeatures", (char**)keywords, &maxFeatures) )
    {
        ERRWRAP2(_self_->setMaxFeatures(maxFeatures));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_setMinDistance(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    double minDistance=0;

    const char* keywords[] = { "minDistance", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:GFTTDetector.setMinDistance", (char**)keywords, &minDistance) )
    {
        ERRWRAP2(_self_->setMinDistance(minDistance));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_setQualityLevel(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    double qlevel=0;

    const char* keywords[] = { "qlevel", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:GFTTDetector.setQualityLevel", (char**)keywords, &qlevel) )
    {
        ERRWRAP2(_self_->setQualityLevel(qlevel));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (GFTTDetector)

static PyGetSetDef pyopencv_GFTTDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_GFTTDetector_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_create_static, METH_STATIC), "create([, maxCorners[, qualityLevel[, minDistance[, blockSize[, useHarrisDetector[, k]]]]]]) -> retval\n.   \n\n\n\ncreate(maxCorners, qualityLevel, minDistance, blockSize, gradiantSize[, useHarrisDetector[, k]]) -> retval\n."},
    {"getBlockSize", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_getBlockSize, 0), "getBlockSize() -> retval\n."},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_getDefaultName, 0), "getDefaultName() -> retval\n."},
    {"getHarrisDetector", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_getHarrisDetector, 0), "getHarrisDetector() -> retval\n."},
    {"getK", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_getK, 0), "getK() -> retval\n."},
    {"getMaxFeatures", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_getMaxFeatures, 0), "getMaxFeatures() -> retval\n."},
    {"getMinDistance", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_getMinDistance, 0), "getMinDistance() -> retval\n."},
    {"getQualityLevel", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_getQualityLevel, 0), "getQualityLevel() -> retval\n."},
    {"setBlockSize", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_setBlockSize, 0), "setBlockSize(blockSize) -> None\n."},
    {"setHarrisDetector", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_setHarrisDetector, 0), "setHarrisDetector(val) -> None\n."},
    {"setK", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_setK, 0), "setK(k) -> None\n."},
    {"setMaxFeatures", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_setMaxFeatures, 0), "setMaxFeatures(maxFeatures) -> None\n."},
    {"setMinDistance", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_setMinDistance, 0), "setMinDistance(minDistance) -> None\n."},
    {"setQualityLevel", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_setQualityLevel, 0), "setQualityLevel(qlevel) -> None\n."},

    {NULL,          NULL}
};

// Converter (GFTTDetector)

template<>
struct PyOpenCV_Converter< Ptr<cv::GFTTDetector> >
{
    static PyObject* from(const Ptr<cv::GFTTDetector>& r)
    {
        return pyopencv_GFTTDetector_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::GFTTDetector>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::GFTTDetector> * dst_;
        if (pyopencv_GFTTDetector_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::GFTTDetector> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// GeneralizedHough (Generic)
//================================================================================

// GetSet (GeneralizedHough)



// Methods (GeneralizedHough)

static PyObject* pyopencv_cv_GeneralizedHough_detect(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_positions = NULL;
    Mat positions;
    PyObject* pyobj_votes = NULL;
    Mat votes;

    const char* keywords[] = { "image", "positions", "votes", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OO:GeneralizedHough.detect", (char**)keywords, &pyobj_image, &pyobj_positions, &pyobj_votes) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_positions, positions, ArgInfo("positions", 1)) &&
        pyopencv_to(pyobj_votes, votes, ArgInfo("votes", 1)) )
    {
        ERRWRAP2(_self_->detect(image, positions, votes));
        return Py_BuildValue("(NN)", pyopencv_from(positions), pyopencv_from(votes));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    PyObject* pyobj_positions = NULL;
    UMat positions;
    PyObject* pyobj_votes = NULL;
    UMat votes;

    const char* keywords[] = { "image", "positions", "votes", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OO:GeneralizedHough.detect", (char**)keywords, &pyobj_image, &pyobj_positions, &pyobj_votes) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to(pyobj_positions, positions, ArgInfo("positions", 1)) &&
        pyopencv_to(pyobj_votes, votes, ArgInfo("votes", 1)) )
    {
        ERRWRAP2(_self_->detect(image, positions, votes));
        return Py_BuildValue("(NN)", pyopencv_from(positions), pyopencv_from(votes));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_edges = NULL;
    Mat edges;
    PyObject* pyobj_dx = NULL;
    Mat dx;
    PyObject* pyobj_dy = NULL;
    Mat dy;
    PyObject* pyobj_positions = NULL;
    Mat positions;
    PyObject* pyobj_votes = NULL;
    Mat votes;

    const char* keywords[] = { "edges", "dx", "dy", "positions", "votes", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|OO:GeneralizedHough.detect", (char**)keywords, &pyobj_edges, &pyobj_dx, &pyobj_dy, &pyobj_positions, &pyobj_votes) &&
        pyopencv_to(pyobj_edges, edges, ArgInfo("edges", 0)) &&
        pyopencv_to(pyobj_dx, dx, ArgInfo("dx", 0)) &&
        pyopencv_to(pyobj_dy, dy, ArgInfo("dy", 0)) &&
        pyopencv_to(pyobj_positions, positions, ArgInfo("positions", 1)) &&
        pyopencv_to(pyobj_votes, votes, ArgInfo("votes", 1)) )
    {
        ERRWRAP2(_self_->detect(edges, dx, dy, positions, votes));
        return Py_BuildValue("(NN)", pyopencv_from(positions), pyopencv_from(votes));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_edges = NULL;
    UMat edges;
    PyObject* pyobj_dx = NULL;
    UMat dx;
    PyObject* pyobj_dy = NULL;
    UMat dy;
    PyObject* pyobj_positions = NULL;
    UMat positions;
    PyObject* pyobj_votes = NULL;
    UMat votes;

    const char* keywords[] = { "edges", "dx", "dy", "positions", "votes", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|OO:GeneralizedHough.detect", (char**)keywords, &pyobj_edges, &pyobj_dx, &pyobj_dy, &pyobj_positions, &pyobj_votes) &&
        pyopencv_to(pyobj_edges, edges, ArgInfo("edges", 0)) &&
        pyopencv_to(pyobj_dx, dx, ArgInfo("dx", 0)) &&
        pyopencv_to(pyobj_dy, dy, ArgInfo("dy", 0)) &&
        pyopencv_to(pyobj_positions, positions, ArgInfo("positions", 1)) &&
        pyopencv_to(pyobj_votes, votes, ArgInfo("votes", 1)) )
    {
        ERRWRAP2(_self_->detect(edges, dx, dy, positions, votes));
        return Py_BuildValue("(NN)", pyopencv_from(positions), pyopencv_from(votes));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHough_getCannyHighThresh(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getCannyHighThresh());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHough_getCannyLowThresh(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getCannyLowThresh());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHough_getDp(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDp());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHough_getMaxBufferSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxBufferSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHough_getMinDist(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMinDist());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHough_setCannyHighThresh(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    int cannyHighThresh=0;

    const char* keywords[] = { "cannyHighThresh", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:GeneralizedHough.setCannyHighThresh", (char**)keywords, &cannyHighThresh) )
    {
        ERRWRAP2(_self_->setCannyHighThresh(cannyHighThresh));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHough_setCannyLowThresh(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    int cannyLowThresh=0;

    const char* keywords[] = { "cannyLowThresh", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:GeneralizedHough.setCannyLowThresh", (char**)keywords, &cannyLowThresh) )
    {
        ERRWRAP2(_self_->setCannyLowThresh(cannyLowThresh));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHough_setDp(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    double dp=0;

    const char* keywords[] = { "dp", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:GeneralizedHough.setDp", (char**)keywords, &dp) )
    {
        ERRWRAP2(_self_->setDp(dp));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHough_setMaxBufferSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    int maxBufferSize=0;

    const char* keywords[] = { "maxBufferSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:GeneralizedHough.setMaxBufferSize", (char**)keywords, &maxBufferSize) )
    {
        ERRWRAP2(_self_->setMaxBufferSize(maxBufferSize));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHough_setMinDist(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    double minDist=0;

    const char* keywords[] = { "minDist", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:GeneralizedHough.setMinDist", (char**)keywords, &minDist) )
    {
        ERRWRAP2(_self_->setMinDist(minDist));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHough_setTemplate(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    {
    PyObject* pyobj_templ = NULL;
    Mat templ;
    PyObject* pyobj_templCenter = NULL;
    Point templCenter=Point(-1, -1);

    const char* keywords[] = { "templ", "templCenter", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:GeneralizedHough.setTemplate", (char**)keywords, &pyobj_templ, &pyobj_templCenter) &&
        pyopencv_to(pyobj_templ, templ, ArgInfo("templ", 0)) &&
        pyopencv_to(pyobj_templCenter, templCenter, ArgInfo("templCenter", 0)) )
    {
        ERRWRAP2(_self_->setTemplate(templ, templCenter));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_templ = NULL;
    UMat templ;
    PyObject* pyobj_templCenter = NULL;
    Point templCenter=Point(-1, -1);

    const char* keywords[] = { "templ", "templCenter", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:GeneralizedHough.setTemplate", (char**)keywords, &pyobj_templ, &pyobj_templCenter) &&
        pyopencv_to(pyobj_templ, templ, ArgInfo("templ", 0)) &&
        pyopencv_to(pyobj_templCenter, templCenter, ArgInfo("templCenter", 0)) )
    {
        ERRWRAP2(_self_->setTemplate(templ, templCenter));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_edges = NULL;
    Mat edges;
    PyObject* pyobj_dx = NULL;
    Mat dx;
    PyObject* pyobj_dy = NULL;
    Mat dy;
    PyObject* pyobj_templCenter = NULL;
    Point templCenter=Point(-1, -1);

    const char* keywords[] = { "edges", "dx", "dy", "templCenter", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|O:GeneralizedHough.setTemplate", (char**)keywords, &pyobj_edges, &pyobj_dx, &pyobj_dy, &pyobj_templCenter) &&
        pyopencv_to(pyobj_edges, edges, ArgInfo("edges", 0)) &&
        pyopencv_to(pyobj_dx, dx, ArgInfo("dx", 0)) &&
        pyopencv_to(pyobj_dy, dy, ArgInfo("dy", 0)) &&
        pyopencv_to(pyobj_templCenter, templCenter, ArgInfo("templCenter", 0)) )
    {
        ERRWRAP2(_self_->setTemplate(edges, dx, dy, templCenter));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_edges = NULL;
    UMat edges;
    PyObject* pyobj_dx = NULL;
    UMat dx;
    PyObject* pyobj_dy = NULL;
    UMat dy;
    PyObject* pyobj_templCenter = NULL;
    Point templCenter=Point(-1, -1);

    const char* keywords[] = { "edges", "dx", "dy", "templCenter", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|O:GeneralizedHough.setTemplate", (char**)keywords, &pyobj_edges, &pyobj_dx, &pyobj_dy, &pyobj_templCenter) &&
        pyopencv_to(pyobj_edges, edges, ArgInfo("edges", 0)) &&
        pyopencv_to(pyobj_dx, dx, ArgInfo("dx", 0)) &&
        pyopencv_to(pyobj_dy, dy, ArgInfo("dy", 0)) &&
        pyopencv_to(pyobj_templCenter, templCenter, ArgInfo("templCenter", 0)) )
    {
        ERRWRAP2(_self_->setTemplate(edges, dx, dy, templCenter));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}



// Tables (GeneralizedHough)

static PyGetSetDef pyopencv_GeneralizedHough_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_GeneralizedHough_methods[] =
{
    {"detect", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_detect, 0), "detect(image[, positions[, votes]]) -> positions, votes\n.   \n\n\n\ndetect(edges, dx, dy[, positions[, votes]]) -> positions, votes\n."},
    {"getCannyHighThresh", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_getCannyHighThresh, 0), "getCannyHighThresh() -> retval\n."},
    {"getCannyLowThresh", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_getCannyLowThresh, 0), "getCannyLowThresh() -> retval\n."},
    {"getDp", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_getDp, 0), "getDp() -> retval\n."},
    {"getMaxBufferSize", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_getMaxBufferSize, 0), "getMaxBufferSize() -> retval\n."},
    {"getMinDist", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_getMinDist, 0), "getMinDist() -> retval\n."},
    {"setCannyHighThresh", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_setCannyHighThresh, 0), "setCannyHighThresh(cannyHighThresh) -> None\n."},
    {"setCannyLowThresh", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_setCannyLowThresh, 0), "setCannyLowThresh(cannyLowThresh) -> None\n."},
    {"setDp", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_setDp, 0), "setDp(dp) -> None\n."},
    {"setMaxBufferSize", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_setMaxBufferSize, 0), "setMaxBufferSize(maxBufferSize) -> None\n."},
    {"setMinDist", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_setMinDist, 0), "setMinDist(minDist) -> None\n."},
    {"setTemplate", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_setTemplate, 0), "setTemplate(templ[, templCenter]) -> None\n.   \n\n\n\nsetTemplate(edges, dx, dy[, templCenter]) -> None\n."},

    {NULL,          NULL}
};

// Converter (GeneralizedHough)

template<>
struct PyOpenCV_Converter< Ptr<cv::GeneralizedHough> >
{
    static PyObject* from(const Ptr<cv::GeneralizedHough>& r)
    {
        return pyopencv_GeneralizedHough_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::GeneralizedHough>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::GeneralizedHough> * dst_;
        if (pyopencv_GeneralizedHough_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::GeneralizedHough> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// GeneralizedHoughBallard (Generic)
//================================================================================

// GetSet (GeneralizedHoughBallard)



// Methods (GeneralizedHoughBallard)

static PyObject* pyopencv_cv_GeneralizedHoughBallard_getLevels(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughBallard> * self1 = 0;
    if (!pyopencv_GeneralizedHoughBallard_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughBallard' or its derivative)");
    Ptr<cv::GeneralizedHoughBallard> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getLevels());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughBallard_getVotesThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughBallard> * self1 = 0;
    if (!pyopencv_GeneralizedHoughBallard_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughBallard' or its derivative)");
    Ptr<cv::GeneralizedHoughBallard> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVotesThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughBallard_setLevels(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughBallard> * self1 = 0;
    if (!pyopencv_GeneralizedHoughBallard_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughBallard' or its derivative)");
    Ptr<cv::GeneralizedHoughBallard> _self_ = *(self1);
    int levels=0;

    const char* keywords[] = { "levels", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:GeneralizedHoughBallard.setLevels", (char**)keywords, &levels) )
    {
        ERRWRAP2(_self_->setLevels(levels));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughBallard_setVotesThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughBallard> * self1 = 0;
    if (!pyopencv_GeneralizedHoughBallard_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughBallard' or its derivative)");
    Ptr<cv::GeneralizedHoughBallard> _self_ = *(self1);
    int votesThreshold=0;

    const char* keywords[] = { "votesThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:GeneralizedHoughBallard.setVotesThreshold", (char**)keywords, &votesThreshold) )
    {
        ERRWRAP2(_self_->setVotesThreshold(votesThreshold));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (GeneralizedHoughBallard)

static PyGetSetDef pyopencv_GeneralizedHoughBallard_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_GeneralizedHoughBallard_methods[] =
{
    {"getLevels", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughBallard_getLevels, 0), "getLevels() -> retval\n."},
    {"getVotesThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughBallard_getVotesThreshold, 0), "getVotesThreshold() -> retval\n."},
    {"setLevels", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughBallard_setLevels, 0), "setLevels(levels) -> None\n."},
    {"setVotesThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughBallard_setVotesThreshold, 0), "setVotesThreshold(votesThreshold) -> None\n."},

    {NULL,          NULL}
};

// Converter (GeneralizedHoughBallard)

template<>
struct PyOpenCV_Converter< Ptr<cv::GeneralizedHoughBallard> >
{
    static PyObject* from(const Ptr<cv::GeneralizedHoughBallard>& r)
    {
        return pyopencv_GeneralizedHoughBallard_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::GeneralizedHoughBallard>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::GeneralizedHoughBallard> * dst_;
        if (pyopencv_GeneralizedHoughBallard_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::GeneralizedHoughBallard> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// GeneralizedHoughGuil (Generic)
//================================================================================

// GetSet (GeneralizedHoughGuil)



// Methods (GeneralizedHoughGuil)

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getAngleEpsilon(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAngleEpsilon());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getAngleStep(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAngleStep());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getAngleThresh(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAngleThresh());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getLevels(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getLevels());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getMaxAngle(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxAngle());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getMaxScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxScale());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getMinAngle(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMinAngle());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getMinScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMinScale());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getPosThresh(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPosThresh());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getScaleStep(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getScaleStep());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getScaleThresh(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getScaleThresh());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getXi(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getXi());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setAngleEpsilon(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double angleEpsilon=0;

    const char* keywords[] = { "angleEpsilon", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:GeneralizedHoughGuil.setAngleEpsilon", (char**)keywords, &angleEpsilon) )
    {
        ERRWRAP2(_self_->setAngleEpsilon(angleEpsilon));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setAngleStep(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double angleStep=0;

    const char* keywords[] = { "angleStep", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:GeneralizedHoughGuil.setAngleStep", (char**)keywords, &angleStep) )
    {
        ERRWRAP2(_self_->setAngleStep(angleStep));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setAngleThresh(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    int angleThresh=0;

    const char* keywords[] = { "angleThresh", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:GeneralizedHoughGuil.setAngleThresh", (char**)keywords, &angleThresh) )
    {
        ERRWRAP2(_self_->setAngleThresh(angleThresh));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setLevels(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    int levels=0;

    const char* keywords[] = { "levels", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:GeneralizedHoughGuil.setLevels", (char**)keywords, &levels) )
    {
        ERRWRAP2(_self_->setLevels(levels));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setMaxAngle(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double maxAngle=0;

    const char* keywords[] = { "maxAngle", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:GeneralizedHoughGuil.setMaxAngle", (char**)keywords, &maxAngle) )
    {
        ERRWRAP2(_self_->setMaxAngle(maxAngle));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setMaxScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double maxScale=0;

    const char* keywords[] = { "maxScale", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:GeneralizedHoughGuil.setMaxScale", (char**)keywords, &maxScale) )
    {
        ERRWRAP2(_self_->setMaxScale(maxScale));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setMinAngle(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double minAngle=0;

    const char* keywords[] = { "minAngle", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:GeneralizedHoughGuil.setMinAngle", (char**)keywords, &minAngle) )
    {
        ERRWRAP2(_self_->setMinAngle(minAngle));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setMinScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double minScale=0;

    const char* keywords[] = { "minScale", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:GeneralizedHoughGuil.setMinScale", (char**)keywords, &minScale) )
    {
        ERRWRAP2(_self_->setMinScale(minScale));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setPosThresh(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    int posThresh=0;

    const char* keywords[] = { "posThresh", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:GeneralizedHoughGuil.setPosThresh", (char**)keywords, &posThresh) )
    {
        ERRWRAP2(_self_->setPosThresh(posThresh));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setScaleStep(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double scaleStep=0;

    const char* keywords[] = { "scaleStep", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:GeneralizedHoughGuil.setScaleStep", (char**)keywords, &scaleStep) )
    {
        ERRWRAP2(_self_->setScaleStep(scaleStep));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setScaleThresh(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    int scaleThresh=0;

    const char* keywords[] = { "scaleThresh", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:GeneralizedHoughGuil.setScaleThresh", (char**)keywords, &scaleThresh) )
    {
        ERRWRAP2(_self_->setScaleThresh(scaleThresh));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setXi(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double xi=0;

    const char* keywords[] = { "xi", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:GeneralizedHoughGuil.setXi", (char**)keywords, &xi) )
    {
        ERRWRAP2(_self_->setXi(xi));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (GeneralizedHoughGuil)

static PyGetSetDef pyopencv_GeneralizedHoughGuil_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_GeneralizedHoughGuil_methods[] =
{
    {"getAngleEpsilon", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getAngleEpsilon, 0), "getAngleEpsilon() -> retval\n."},
    {"getAngleStep", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getAngleStep, 0), "getAngleStep() -> retval\n."},
    {"getAngleThresh", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getAngleThresh, 0), "getAngleThresh() -> retval\n."},
    {"getLevels", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getLevels, 0), "getLevels() -> retval\n."},
    {"getMaxAngle", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getMaxAngle, 0), "getMaxAngle() -> retval\n."},
    {"getMaxScale", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getMaxScale, 0), "getMaxScale() -> retval\n."},
    {"getMinAngle", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getMinAngle, 0), "getMinAngle() -> retval\n."},
    {"getMinScale", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getMinScale, 0), "getMinScale() -> retval\n."},
    {"getPosThresh", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getPosThresh, 0), "getPosThresh() -> retval\n."},
    {"getScaleStep", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getScaleStep, 0), "getScaleStep() -> retval\n."},
    {"getScaleThresh", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getScaleThresh, 0), "getScaleThresh() -> retval\n."},
    {"getXi", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getXi, 0), "getXi() -> retval\n."},
    {"setAngleEpsilon", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setAngleEpsilon, 0), "setAngleEpsilon(angleEpsilon) -> None\n."},
    {"setAngleStep", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setAngleStep, 0), "setAngleStep(angleStep) -> None\n."},
    {"setAngleThresh", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setAngleThresh, 0), "setAngleThresh(angleThresh) -> None\n."},
    {"setLevels", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setLevels, 0), "setLevels(levels) -> None\n."},
    {"setMaxAngle", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setMaxAngle, 0), "setMaxAngle(maxAngle) -> None\n."},
    {"setMaxScale", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setMaxScale, 0), "setMaxScale(maxScale) -> None\n."},
    {"setMinAngle", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setMinAngle, 0), "setMinAngle(minAngle) -> None\n."},
    {"setMinScale", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setMinScale, 0), "setMinScale(minScale) -> None\n."},
    {"setPosThresh", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setPosThresh, 0), "setPosThresh(posThresh) -> None\n."},
    {"setScaleStep", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setScaleStep, 0), "setScaleStep(scaleStep) -> None\n."},
    {"setScaleThresh", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setScaleThresh, 0), "setScaleThresh(scaleThresh) -> None\n."},
    {"setXi", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setXi, 0), "setXi(xi) -> None\n."},

    {NULL,          NULL}
};

// Converter (GeneralizedHoughGuil)

template<>
struct PyOpenCV_Converter< Ptr<cv::GeneralizedHoughGuil> >
{
    static PyObject* from(const Ptr<cv::GeneralizedHoughGuil>& r)
    {
        return pyopencv_GeneralizedHoughGuil_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::GeneralizedHoughGuil>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::GeneralizedHoughGuil> * dst_;
        if (pyopencv_GeneralizedHoughGuil_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::GeneralizedHoughGuil> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// HOGDescriptor (Generic)
//================================================================================

// GetSet (HOGDescriptor)


static PyObject* pyopencv_HOGDescriptor_get_L2HysThreshold(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->L2HysThreshold);
}

static PyObject* pyopencv_HOGDescriptor_get_blockSize(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->blockSize);
}

static PyObject* pyopencv_HOGDescriptor_get_blockStride(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->blockStride);
}

static PyObject* pyopencv_HOGDescriptor_get_cellSize(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->cellSize);
}

static PyObject* pyopencv_HOGDescriptor_get_derivAperture(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->derivAperture);
}

static PyObject* pyopencv_HOGDescriptor_get_gammaCorrection(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->gammaCorrection);
}

static PyObject* pyopencv_HOGDescriptor_get_histogramNormType(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->histogramNormType);
}

static PyObject* pyopencv_HOGDescriptor_get_nbins(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->nbins);
}

static PyObject* pyopencv_HOGDescriptor_get_nlevels(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->nlevels);
}

static PyObject* pyopencv_HOGDescriptor_get_signedGradient(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->signedGradient);
}

static PyObject* pyopencv_HOGDescriptor_get_svmDetector(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->svmDetector);
}

static PyObject* pyopencv_HOGDescriptor_get_winSigma(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->winSigma);
}

static PyObject* pyopencv_HOGDescriptor_get_winSize(pyopencv_HOGDescriptor_t* p, void *closure)
{
    return pyopencv_from(p->v->winSize);
}


// Methods (HOGDescriptor)

static int pyopencv_cv_HOGDescriptor_HOGDescriptor(pyopencv_HOGDescriptor_t* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    {

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        new (&(self->v)) Ptr<cv::HOGDescriptor>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::HOGDescriptor()));
        return 0;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj__winSize = NULL;
    Size _winSize;
    PyObject* pyobj__blockSize = NULL;
    Size _blockSize;
    PyObject* pyobj__blockStride = NULL;
    Size _blockStride;
    PyObject* pyobj__cellSize = NULL;
    Size _cellSize;
    int _nbins=0;
    int _derivAperture=1;
    double _winSigma=-1;
    int _histogramNormType=HOGDescriptor::L2Hys;
    double _L2HysThreshold=0.2;
    bool _gammaCorrection=false;
    int _nlevels=HOGDescriptor::DEFAULT_NLEVELS;
    bool _signedGradient=false;

    const char* keywords[] = { "_winSize", "_blockSize", "_blockStride", "_cellSize", "_nbins", "_derivAperture", "_winSigma", "_histogramNormType", "_L2HysThreshold", "_gammaCorrection", "_nlevels", "_signedGradient", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOOOi|ididbib:HOGDescriptor", (char**)keywords, &pyobj__winSize, &pyobj__blockSize, &pyobj__blockStride, &pyobj__cellSize, &_nbins, &_derivAperture, &_winSigma, &_histogramNormType, &_L2HysThreshold, &_gammaCorrection, &_nlevels, &_signedGradient) &&
        pyopencv_to(pyobj__winSize, _winSize, ArgInfo("_winSize", 0)) &&
        pyopencv_to(pyobj__blockSize, _blockSize, ArgInfo("_blockSize", 0)) &&
        pyopencv_to(pyobj__blockStride, _blockStride, ArgInfo("_blockStride", 0)) &&
        pyopencv_to(pyobj__cellSize, _cellSize, ArgInfo("_cellSize", 0)) )
    {
        new (&(self->v)) Ptr<cv::HOGDescriptor>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::HOGDescriptor(_winSize, _blockSize, _blockStride, _cellSize, _nbins, _derivAperture, _winSigma, _histogramNormType, _L2HysThreshold, _gammaCorrection, _nlevels, _signedGradient)));
        return 0;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_filename = NULL;
    String filename;

    const char* keywords[] = { "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:HOGDescriptor", (char**)keywords, &pyobj_filename) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        new (&(self->v)) Ptr<cv::HOGDescriptor>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::HOGDescriptor(filename)));
        return 0;
    }
    }

    return -1;
}

static PyObject* pyopencv_cv_HOGDescriptor_checkDetectorSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::HOGDescriptor> * self1 = 0;
    if (!pyopencv_HOGDescriptor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    Ptr<cv::HOGDescriptor> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->checkDetectorSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_HOGDescriptor_compute(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::HOGDescriptor> * self1 = 0;
    if (!pyopencv_HOGDescriptor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    Ptr<cv::HOGDescriptor> _self_ = *(self1);
    {
    PyObject* pyobj_img = NULL;
    Mat img;
    vector_float descriptors;
    PyObject* pyobj_winStride = NULL;
    Size winStride;
    PyObject* pyobj_padding = NULL;
    Size padding;
    PyObject* pyobj_locations = NULL;
    vector_Point locations=std::vector<Point>();

    const char* keywords[] = { "img", "winStride", "padding", "locations", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOO:HOGDescriptor.compute", (char**)keywords, &pyobj_img, &pyobj_winStride, &pyobj_padding, &pyobj_locations) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_winStride, winStride, ArgInfo("winStride", 0)) &&
        pyopencv_to(pyobj_padding, padding, ArgInfo("padding", 0)) &&
        pyopencv_to(pyobj_locations, locations, ArgInfo("locations", 0)) )
    {
        ERRWRAP2(_self_->compute(img, descriptors, winStride, padding, locations));
        return pyopencv_from(descriptors);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_img = NULL;
    UMat img;
    vector_float descriptors;
    PyObject* pyobj_winStride = NULL;
    Size winStride;
    PyObject* pyobj_padding = NULL;
    Size padding;
    PyObject* pyobj_locations = NULL;
    vector_Point locations=std::vector<Point>();

    const char* keywords[] = { "img", "winStride", "padding", "locations", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOO:HOGDescriptor.compute", (char**)keywords, &pyobj_img, &pyobj_winStride, &pyobj_padding, &pyobj_locations) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_winStride, winStride, ArgInfo("winStride", 0)) &&
        pyopencv_to(pyobj_padding, padding, ArgInfo("padding", 0)) &&
        pyopencv_to(pyobj_locations, locations, ArgInfo("locations", 0)) )
    {
        ERRWRAP2(_self_->compute(img, descriptors, winStride, padding, locations));
        return pyopencv_from(descriptors);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_HOGDescriptor_computeGradient(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::HOGDescriptor> * self1 = 0;
    if (!pyopencv_HOGDescriptor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    Ptr<cv::HOGDescriptor> _self_ = *(self1);
    {
    PyObject* pyobj_img = NULL;
    Mat img;
    PyObject* pyobj_grad = NULL;
    Mat grad;
    PyObject* pyobj_angleOfs = NULL;
    Mat angleOfs;
    PyObject* pyobj_paddingTL = NULL;
    Size paddingTL;
    PyObject* pyobj_paddingBR = NULL;
    Size paddingBR;

    const char* keywords[] = { "img", "grad", "angleOfs", "paddingTL", "paddingBR", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOOO:HOGDescriptor.computeGradient", (char**)keywords, &pyobj_img, &pyobj_grad, &pyobj_angleOfs, &pyobj_paddingTL, &pyobj_paddingBR) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_grad, grad, ArgInfo("grad", 1)) &&
        pyopencv_to(pyobj_angleOfs, angleOfs, ArgInfo("angleOfs", 1)) &&
        pyopencv_to(pyobj_paddingTL, paddingTL, ArgInfo("paddingTL", 0)) &&
        pyopencv_to(pyobj_paddingBR, paddingBR, ArgInfo("paddingBR", 0)) )
    {
        ERRWRAP2(_self_->computeGradient(img, grad, angleOfs, paddingTL, paddingBR));
        return Py_BuildValue("(NN)", pyopencv_from(grad), pyopencv_from(angleOfs));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_img = NULL;
    Mat img;
    PyObject* pyobj_grad = NULL;
    Mat grad;
    PyObject* pyobj_angleOfs = NULL;
    Mat angleOfs;
    PyObject* pyobj_paddingTL = NULL;
    Size paddingTL;
    PyObject* pyobj_paddingBR = NULL;
    Size paddingBR;

    const char* keywords[] = { "img", "grad", "angleOfs", "paddingTL", "paddingBR", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOOO:HOGDescriptor.computeGradient", (char**)keywords, &pyobj_img, &pyobj_grad, &pyobj_angleOfs, &pyobj_paddingTL, &pyobj_paddingBR) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_grad, grad, ArgInfo("grad", 1)) &&
        pyopencv_to(pyobj_angleOfs, angleOfs, ArgInfo("angleOfs", 1)) &&
        pyopencv_to(pyobj_paddingTL, paddingTL, ArgInfo("paddingTL", 0)) &&
        pyopencv_to(pyobj_paddingBR, paddingBR, ArgInfo("paddingBR", 0)) )
    {
        ERRWRAP2(_self_->computeGradient(img, grad, angleOfs, paddingTL, paddingBR));
        return Py_BuildValue("(NN)", pyopencv_from(grad), pyopencv_from(angleOfs));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_HOGDescriptor_detect(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::HOGDescriptor> * self1 = 0;
    if (!pyopencv_HOGDescriptor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    Ptr<cv::HOGDescriptor> _self_ = *(self1);
    {
    PyObject* pyobj_img = NULL;
    Mat img;
    vector_Point foundLocations;
    vector_double weights;
    double hitThreshold=0;
    PyObject* pyobj_winStride = NULL;
    Size winStride;
    PyObject* pyobj_padding = NULL;
    Size padding;
    PyObject* pyobj_searchLocations = NULL;
    vector_Point searchLocations=std::vector<Point>();

    const char* keywords[] = { "img", "hitThreshold", "winStride", "padding", "searchLocations", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|dOOO:HOGDescriptor.detect", (char**)keywords, &pyobj_img, &hitThreshold, &pyobj_winStride, &pyobj_padding, &pyobj_searchLocations) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_winStride, winStride, ArgInfo("winStride", 0)) &&
        pyopencv_to(pyobj_padding, padding, ArgInfo("padding", 0)) &&
        pyopencv_to(pyobj_searchLocations, searchLocations, ArgInfo("searchLocations", 0)) )
    {
        ERRWRAP2(_self_->detect(img, foundLocations, weights, hitThreshold, winStride, padding, searchLocations));
        return Py_BuildValue("(NN)", pyopencv_from(foundLocations), pyopencv_from(weights));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_img = NULL;
    Mat img;
    vector_Point foundLocations;
    vector_double weights;
    double hitThreshold=0;
    PyObject* pyobj_winStride = NULL;
    Size winStride;
    PyObject* pyobj_padding = NULL;
    Size padding;
    PyObject* pyobj_searchLocations = NULL;
    vector_Point searchLocations=std::vector<Point>();

    const char* keywords[] = { "img", "hitThreshold", "winStride", "padding", "searchLocations", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|dOOO:HOGDescriptor.detect", (char**)keywords, &pyobj_img, &hitThreshold, &pyobj_winStride, &pyobj_padding, &pyobj_searchLocations) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_winStride, winStride, ArgInfo("winStride", 0)) &&
        pyopencv_to(pyobj_padding, padding, ArgInfo("padding", 0)) &&
        pyopencv_to(pyobj_searchLocations, searchLocations, ArgInfo("searchLocations", 0)) )
    {
        ERRWRAP2(_self_->detect(img, foundLocations, weights, hitThreshold, winStride, padding, searchLocations));
        return Py_BuildValue("(NN)", pyopencv_from(foundLocations), pyopencv_from(weights));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_HOGDescriptor_detectMultiScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::HOGDescriptor> * self1 = 0;
    if (!pyopencv_HOGDescriptor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    Ptr<cv::HOGDescriptor> _self_ = *(self1);
    {
    PyObject* pyobj_img = NULL;
    Mat img;
    vector_Rect foundLocations;
    vector_double foundWeights;
    double hitThreshold=0;
    PyObject* pyobj_winStride = NULL;
    Size winStride;
    PyObject* pyobj_padding = NULL;
    Size padding;
    double scale=1.05;
    double finalThreshold=2.0;
    bool useMeanshiftGrouping=false;

    const char* keywords[] = { "img", "hitThreshold", "winStride", "padding", "scale", "finalThreshold", "useMeanshiftGrouping", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|dOOddb:HOGDescriptor.detectMultiScale", (char**)keywords, &pyobj_img, &hitThreshold, &pyobj_winStride, &pyobj_padding, &scale, &finalThreshold, &useMeanshiftGrouping) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_winStride, winStride, ArgInfo("winStride", 0)) &&
        pyopencv_to(pyobj_padding, padding, ArgInfo("padding", 0)) )
    {
        ERRWRAP2(_self_->detectMultiScale(img, foundLocations, foundWeights, hitThreshold, winStride, padding, scale, finalThreshold, useMeanshiftGrouping));
        return Py_BuildValue("(NN)", pyopencv_from(foundLocations), pyopencv_from(foundWeights));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_img = NULL;
    UMat img;
    vector_Rect foundLocations;
    vector_double foundWeights;
    double hitThreshold=0;
    PyObject* pyobj_winStride = NULL;
    Size winStride;
    PyObject* pyobj_padding = NULL;
    Size padding;
    double scale=1.05;
    double finalThreshold=2.0;
    bool useMeanshiftGrouping=false;

    const char* keywords[] = { "img", "hitThreshold", "winStride", "padding", "scale", "finalThreshold", "useMeanshiftGrouping", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|dOOddb:HOGDescriptor.detectMultiScale", (char**)keywords, &pyobj_img, &hitThreshold, &pyobj_winStride, &pyobj_padding, &scale, &finalThreshold, &useMeanshiftGrouping) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_winStride, winStride, ArgInfo("winStride", 0)) &&
        pyopencv_to(pyobj_padding, padding, ArgInfo("padding", 0)) )
    {
        ERRWRAP2(_self_->detectMultiScale(img, foundLocations, foundWeights, hitThreshold, winStride, padding, scale, finalThreshold, useMeanshiftGrouping));
        return Py_BuildValue("(NN)", pyopencv_from(foundLocations), pyopencv_from(foundWeights));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_HOGDescriptor_getDaimlerPeopleDetector_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    std::vector<float> retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv::HOGDescriptor::getDaimlerPeopleDetector());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_HOGDescriptor_getDefaultPeopleDetector_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    std::vector<float> retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv::HOGDescriptor::getDefaultPeopleDetector());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_HOGDescriptor_getDescriptorSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::HOGDescriptor> * self1 = 0;
    if (!pyopencv_HOGDescriptor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    Ptr<cv::HOGDescriptor> _self_ = *(self1);
    size_t retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDescriptorSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_HOGDescriptor_getWinSigma(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::HOGDescriptor> * self1 = 0;
    if (!pyopencv_HOGDescriptor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    Ptr<cv::HOGDescriptor> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getWinSigma());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_HOGDescriptor_load(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::HOGDescriptor> * self1 = 0;
    if (!pyopencv_HOGDescriptor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    Ptr<cv::HOGDescriptor> _self_ = *(self1);
    PyObject* pyobj_filename = NULL;
    String filename;
    PyObject* pyobj_objname = NULL;
    String objname;
    bool retval;

    const char* keywords[] = { "filename", "objname", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:HOGDescriptor.load", (char**)keywords, &pyobj_filename, &pyobj_objname) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to(pyobj_objname, objname, ArgInfo("objname", 0)) )
    {
        ERRWRAP2(retval = _self_->load(filename, objname));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_HOGDescriptor_save(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::HOGDescriptor> * self1 = 0;
    if (!pyopencv_HOGDescriptor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    Ptr<cv::HOGDescriptor> _self_ = *(self1);
    PyObject* pyobj_filename = NULL;
    String filename;
    PyObject* pyobj_objname = NULL;
    String objname;

    const char* keywords[] = { "filename", "objname", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:HOGDescriptor.save", (char**)keywords, &pyobj_filename, &pyobj_objname) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to(pyobj_objname, objname, ArgInfo("objname", 0)) )
    {
        ERRWRAP2(_self_->save(filename, objname));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_HOGDescriptor_setSVMDetector(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::HOGDescriptor> * self1 = 0;
    if (!pyopencv_HOGDescriptor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'HOGDescriptor' or its derivative)");
    Ptr<cv::HOGDescriptor> _self_ = *(self1);
    {
    PyObject* pyobj__svmdetector = NULL;
    Mat _svmdetector;

    const char* keywords[] = { "_svmdetector", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:HOGDescriptor.setSVMDetector", (char**)keywords, &pyobj__svmdetector) &&
        pyopencv_to(pyobj__svmdetector, _svmdetector, ArgInfo("_svmdetector", 0)) )
    {
        ERRWRAP2(_self_->setSVMDetector(_svmdetector));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj__svmdetector = NULL;
    UMat _svmdetector;

    const char* keywords[] = { "_svmdetector", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:HOGDescriptor.setSVMDetector", (char**)keywords, &pyobj__svmdetector) &&
        pyopencv_to(pyobj__svmdetector, _svmdetector, ArgInfo("_svmdetector", 0)) )
    {
        ERRWRAP2(_self_->setSVMDetector(_svmdetector));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}



// Tables (HOGDescriptor)

static PyGetSetDef pyopencv_HOGDescriptor_getseters[] =
{
    {(char*)"L2HysThreshold", (getter)pyopencv_HOGDescriptor_get_L2HysThreshold, NULL, (char*)"L2HysThreshold", NULL},
    {(char*)"blockSize", (getter)pyopencv_HOGDescriptor_get_blockSize, NULL, (char*)"blockSize", NULL},
    {(char*)"blockStride", (getter)pyopencv_HOGDescriptor_get_blockStride, NULL, (char*)"blockStride", NULL},
    {(char*)"cellSize", (getter)pyopencv_HOGDescriptor_get_cellSize, NULL, (char*)"cellSize", NULL},
    {(char*)"derivAperture", (getter)pyopencv_HOGDescriptor_get_derivAperture, NULL, (char*)"derivAperture", NULL},
    {(char*)"gammaCorrection", (getter)pyopencv_HOGDescriptor_get_gammaCorrection, NULL, (char*)"gammaCorrection", NULL},
    {(char*)"histogramNormType", (getter)pyopencv_HOGDescriptor_get_histogramNormType, NULL, (char*)"histogramNormType", NULL},
    {(char*)"nbins", (getter)pyopencv_HOGDescriptor_get_nbins, NULL, (char*)"nbins", NULL},
    {(char*)"nlevels", (getter)pyopencv_HOGDescriptor_get_nlevels, NULL, (char*)"nlevels", NULL},
    {(char*)"signedGradient", (getter)pyopencv_HOGDescriptor_get_signedGradient, NULL, (char*)"signedGradient", NULL},
    {(char*)"svmDetector", (getter)pyopencv_HOGDescriptor_get_svmDetector, NULL, (char*)"svmDetector", NULL},
    {(char*)"winSigma", (getter)pyopencv_HOGDescriptor_get_winSigma, NULL, (char*)"winSigma", NULL},
    {(char*)"winSize", (getter)pyopencv_HOGDescriptor_get_winSize, NULL, (char*)"winSize", NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_HOGDescriptor_methods[] =
{
    {"checkDetectorSize", CV_PY_FN_WITH_KW_(pyopencv_cv_HOGDescriptor_checkDetectorSize, 0), "checkDetectorSize() -> retval\n.   @brief Checks if detector size equal to descriptor size."},
    {"compute", CV_PY_FN_WITH_KW_(pyopencv_cv_HOGDescriptor_compute, 0), "compute(img[, winStride[, padding[, locations]]]) -> descriptors\n.   @brief Computes HOG descriptors of given image.\n.       @param img Matrix of the type CV_8U containing an image where HOG features will be calculated.\n.       @param descriptors Matrix of the type CV_32F\n.       @param winStride Window stride. It must be a multiple of block stride.\n.       @param padding Padding\n.       @param locations Vector of Point"},
    {"computeGradient", CV_PY_FN_WITH_KW_(pyopencv_cv_HOGDescriptor_computeGradient, 0), "computeGradient(img[, grad[, angleOfs[, paddingTL[, paddingBR]]]]) -> grad, angleOfs\n.   @brief  Computes gradients and quantized gradient orientations.\n.       @param img Matrix contains the image to be computed\n.       @param grad Matrix of type CV_32FC2 contains computed gradients\n.       @param angleOfs Matrix of type CV_8UC2 contains quantized gradient orientations\n.       @param paddingTL Padding from top-left\n.       @param paddingBR Padding from bottom-right"},
    {"detect", CV_PY_FN_WITH_KW_(pyopencv_cv_HOGDescriptor_detect, 0), "detect(img[, hitThreshold[, winStride[, padding[, searchLocations]]]]) -> foundLocations, weights\n.   @brief Performs object detection without a multi-scale window.\n.       @param img Matrix of the type CV_8U or CV_8UC3 containing an image where objects are detected.\n.       @param foundLocations Vector of point where each point contains left-top corner point of detected object boundaries.\n.       @param weights Vector that will contain confidence values for each detected object.\n.       @param hitThreshold Threshold for the distance between features and SVM classifying plane.\n.       Usually it is 0 and should be specified in the detector coefficients (as the last free coefficient).\n.       But if the free coefficient is omitted (which is allowed), you can specify it manually here.\n.       @param winStride Window stride. It must be a multiple of block stride.\n.       @param padding Padding\n.       @param searchLocations Vector of Point includes set of requested locations to be evaluated."},
    {"detectMultiScale", CV_PY_FN_WITH_KW_(pyopencv_cv_HOGDescriptor_detectMultiScale, 0), "detectMultiScale(img[, hitThreshold[, winStride[, padding[, scale[, finalThreshold[, useMeanshiftGrouping]]]]]]) -> foundLocations, foundWeights\n.   @brief Detects objects of different sizes in the input image. The detected objects are returned as a list\n.       of rectangles.\n.       @param img Matrix of the type CV_8U or CV_8UC3 containing an image where objects are detected.\n.       @param foundLocations Vector of rectangles where each rectangle contains the detected object.\n.       @param foundWeights Vector that will contain confidence values for each detected object.\n.       @param hitThreshold Threshold for the distance between features and SVM classifying plane.\n.       Usually it is 0 and should be specified in the detector coefficients (as the last free coefficient).\n.       But if the free coefficient is omitted (which is allowed), you can specify it manually here.\n.       @param winStride Window stride. It must be a multiple of block stride.\n.       @param padding Padding\n.       @param scale Coefficient of the detection window increase.\n.       @param finalThreshold Final threshold\n.       @param useMeanshiftGrouping indicates grouping algorithm"},
    {"getDaimlerPeopleDetector", CV_PY_FN_WITH_KW_(pyopencv_cv_HOGDescriptor_getDaimlerPeopleDetector_static, METH_STATIC), "getDaimlerPeopleDetector() -> retval\n.   @brief Returns coefficients of the classifier trained for people detection (for 48x96 windows)."},
    {"getDefaultPeopleDetector", CV_PY_FN_WITH_KW_(pyopencv_cv_HOGDescriptor_getDefaultPeopleDetector_static, METH_STATIC), "getDefaultPeopleDetector() -> retval\n.   @brief Returns coefficients of the classifier trained for people detection (for 64x128 windows)."},
    {"getDescriptorSize", CV_PY_FN_WITH_KW_(pyopencv_cv_HOGDescriptor_getDescriptorSize, 0), "getDescriptorSize() -> retval\n.   @brief Returns the number of coefficients required for the classification."},
    {"getWinSigma", CV_PY_FN_WITH_KW_(pyopencv_cv_HOGDescriptor_getWinSigma, 0), "getWinSigma() -> retval\n.   @brief Returns winSigma value"},
    {"load", CV_PY_FN_WITH_KW_(pyopencv_cv_HOGDescriptor_load, 0), "load(filename[, objname]) -> retval\n.   @brief loads coefficients for the linear SVM classifier from a file\n.       @param filename Name of the file to read.\n.       @param objname The optional name of the node to read (if empty, the first top-level node will be used)."},
    {"save", CV_PY_FN_WITH_KW_(pyopencv_cv_HOGDescriptor_save, 0), "save(filename[, objname]) -> None\n.   @brief saves coefficients for the linear SVM classifier to a file\n.       @param filename File name\n.       @param objname Object name"},
    {"setSVMDetector", CV_PY_FN_WITH_KW_(pyopencv_cv_HOGDescriptor_setSVMDetector, 0), "setSVMDetector(_svmdetector) -> None\n.   @brief Sets coefficients for the linear SVM classifier.\n.       @param _svmdetector coefficients for the linear SVM classifier."},

    {NULL,          NULL}
};

// Converter (HOGDescriptor)

template<>
struct PyOpenCV_Converter< Ptr<cv::HOGDescriptor> >
{
    static PyObject* from(const Ptr<cv::HOGDescriptor>& r)
    {
        return pyopencv_HOGDescriptor_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::HOGDescriptor>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::HOGDescriptor> * dst_;
        if (pyopencv_HOGDescriptor_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::HOGDescriptor> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// KAZE (Generic)
//================================================================================

// GetSet (KAZE)



// Methods (KAZE)

static PyObject* pyopencv_cv_KAZE_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    bool extended=false;
    bool upright=false;
    float threshold=0.001f;
    int nOctaves=4;
    int nOctaveLayers=4;
    int diffusivity=KAZE::DIFF_PM_G2;
    Ptr<KAZE> retval;

    const char* keywords[] = { "extended", "upright", "threshold", "nOctaves", "nOctaveLayers", "diffusivity", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|bbfiii:KAZE.create", (char**)keywords, &extended, &upright, &threshold, &nOctaves, &nOctaveLayers, &diffusivity) )
    {
        ERRWRAP2(retval = cv::KAZE::create(extended, upright, threshold, nOctaves, nOctaveLayers, diffusivity));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_getDefaultName(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    String retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_getDiffusivity(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDiffusivity());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_getExtended(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getExtended());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_getNOctaveLayers(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNOctaveLayers());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_getNOctaves(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNOctaves());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_getThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_getUpright(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getUpright());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_setDiffusivity(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    int diff=0;

    const char* keywords[] = { "diff", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:KAZE.setDiffusivity", (char**)keywords, &diff) )
    {
        ERRWRAP2(_self_->setDiffusivity(diff));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_setExtended(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    bool extended=0;

    const char* keywords[] = { "extended", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:KAZE.setExtended", (char**)keywords, &extended) )
    {
        ERRWRAP2(_self_->setExtended(extended));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_setNOctaveLayers(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    int octaveLayers=0;

    const char* keywords[] = { "octaveLayers", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:KAZE.setNOctaveLayers", (char**)keywords, &octaveLayers) )
    {
        ERRWRAP2(_self_->setNOctaveLayers(octaveLayers));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_setNOctaves(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    int octaves=0;

    const char* keywords[] = { "octaves", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:KAZE.setNOctaves", (char**)keywords, &octaves) )
    {
        ERRWRAP2(_self_->setNOctaves(octaves));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_setThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    double threshold=0;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:KAZE.setThreshold", (char**)keywords, &threshold) )
    {
        ERRWRAP2(_self_->setThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_setUpright(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    bool upright=0;

    const char* keywords[] = { "upright", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:KAZE.setUpright", (char**)keywords, &upright) )
    {
        ERRWRAP2(_self_->setUpright(upright));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (KAZE)

static PyGetSetDef pyopencv_KAZE_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_KAZE_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_create_static, METH_STATIC), "create([, extended[, upright[, threshold[, nOctaves[, nOctaveLayers[, diffusivity]]]]]]) -> retval\n.   @brief The KAZE constructor\n.   \n.       @param extended Set to enable extraction of extended (128-byte) descriptor.\n.       @param upright Set to enable use of upright descriptors (non rotation-invariant).\n.       @param threshold Detector response threshold to accept point\n.       @param nOctaves Maximum octave evolution of the image\n.       @param nOctaveLayers Default number of sublevels per scale level\n.       @param diffusivity Diffusivity type. DIFF_PM_G1, DIFF_PM_G2, DIFF_WEICKERT or\n.       DIFF_CHARBONNIER"},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_getDefaultName, 0), "getDefaultName() -> retval\n."},
    {"getDiffusivity", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_getDiffusivity, 0), "getDiffusivity() -> retval\n."},
    {"getExtended", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_getExtended, 0), "getExtended() -> retval\n."},
    {"getNOctaveLayers", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_getNOctaveLayers, 0), "getNOctaveLayers() -> retval\n."},
    {"getNOctaves", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_getNOctaves, 0), "getNOctaves() -> retval\n."},
    {"getThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_getThreshold, 0), "getThreshold() -> retval\n."},
    {"getUpright", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_getUpright, 0), "getUpright() -> retval\n."},
    {"setDiffusivity", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_setDiffusivity, 0), "setDiffusivity(diff) -> None\n."},
    {"setExtended", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_setExtended, 0), "setExtended(extended) -> None\n."},
    {"setNOctaveLayers", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_setNOctaveLayers, 0), "setNOctaveLayers(octaveLayers) -> None\n."},
    {"setNOctaves", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_setNOctaves, 0), "setNOctaves(octaves) -> None\n."},
    {"setThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_setThreshold, 0), "setThreshold(threshold) -> None\n."},
    {"setUpright", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_setUpright, 0), "setUpright(upright) -> None\n."},

    {NULL,          NULL}
};

// Converter (KAZE)

template<>
struct PyOpenCV_Converter< Ptr<cv::KAZE> >
{
    static PyObject* from(const Ptr<cv::KAZE>& r)
    {
        return pyopencv_KAZE_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::KAZE>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::KAZE> * dst_;
        if (pyopencv_KAZE_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::KAZE> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// KalmanFilter (Generic)
//================================================================================

// GetSet (KalmanFilter)


static PyObject* pyopencv_KalmanFilter_get_controlMatrix(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->controlMatrix);
}

static int pyopencv_KalmanFilter_set_controlMatrix(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the controlMatrix attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->controlMatrix, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_errorCovPost(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->errorCovPost);
}

static int pyopencv_KalmanFilter_set_errorCovPost(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the errorCovPost attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->errorCovPost, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_errorCovPre(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->errorCovPre);
}

static int pyopencv_KalmanFilter_set_errorCovPre(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the errorCovPre attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->errorCovPre, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_gain(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->gain);
}

static int pyopencv_KalmanFilter_set_gain(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the gain attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->gain, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_measurementMatrix(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->measurementMatrix);
}

static int pyopencv_KalmanFilter_set_measurementMatrix(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the measurementMatrix attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->measurementMatrix, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_measurementNoiseCov(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->measurementNoiseCov);
}

static int pyopencv_KalmanFilter_set_measurementNoiseCov(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the measurementNoiseCov attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->measurementNoiseCov, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_processNoiseCov(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->processNoiseCov);
}

static int pyopencv_KalmanFilter_set_processNoiseCov(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the processNoiseCov attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->processNoiseCov, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_statePost(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->statePost);
}

static int pyopencv_KalmanFilter_set_statePost(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the statePost attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->statePost, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_statePre(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->statePre);
}

static int pyopencv_KalmanFilter_set_statePre(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the statePre attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->statePre, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_transitionMatrix(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->transitionMatrix);
}

static int pyopencv_KalmanFilter_set_transitionMatrix(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the transitionMatrix attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->transitionMatrix, ArgInfo("value", false)) ? 0 : -1;
}


// Methods (KalmanFilter)

static int pyopencv_cv_KalmanFilter_KalmanFilter(pyopencv_KalmanFilter_t* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    {

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        new (&(self->v)) Ptr<cv::KalmanFilter>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::KalmanFilter()));
        return 0;
    }
    }
    PyErr_Clear();

    {
    int dynamParams=0;
    int measureParams=0;
    int controlParams=0;
    int type=CV_32F;

    const char* keywords[] = { "dynamParams", "measureParams", "controlParams", "type", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "ii|ii:KalmanFilter", (char**)keywords, &dynamParams, &measureParams, &controlParams, &type) )
    {
        new (&(self->v)) Ptr<cv::KalmanFilter>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::KalmanFilter(dynamParams, measureParams, controlParams, type)));
        return 0;
    }
    }

    return -1;
}

static PyObject* pyopencv_cv_KalmanFilter_correct(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KalmanFilter> * self1 = 0;
    if (!pyopencv_KalmanFilter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KalmanFilter' or its derivative)");
    Ptr<cv::KalmanFilter> _self_ = *(self1);
    {
    PyObject* pyobj_measurement = NULL;
    Mat measurement;
    Mat retval;

    const char* keywords[] = { "measurement", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:KalmanFilter.correct", (char**)keywords, &pyobj_measurement) &&
        pyopencv_to(pyobj_measurement, measurement, ArgInfo("measurement", 0)) )
    {
        ERRWRAP2(retval = _self_->correct(measurement));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_measurement = NULL;
    Mat measurement;
    Mat retval;

    const char* keywords[] = { "measurement", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:KalmanFilter.correct", (char**)keywords, &pyobj_measurement) &&
        pyopencv_to(pyobj_measurement, measurement, ArgInfo("measurement", 0)) )
    {
        ERRWRAP2(retval = _self_->correct(measurement));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_KalmanFilter_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KalmanFilter> * self1 = 0;
    if (!pyopencv_KalmanFilter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KalmanFilter' or its derivative)");
    Ptr<cv::KalmanFilter> _self_ = *(self1);
    {
    PyObject* pyobj_control = NULL;
    Mat control;
    Mat retval;

    const char* keywords[] = { "control", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:KalmanFilter.predict", (char**)keywords, &pyobj_control) &&
        pyopencv_to(pyobj_control, control, ArgInfo("control", 0)) )
    {
        ERRWRAP2(retval = _self_->predict(control));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_control = NULL;
    Mat control;
    Mat retval;

    const char* keywords[] = { "control", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:KalmanFilter.predict", (char**)keywords, &pyobj_control) &&
        pyopencv_to(pyobj_control, control, ArgInfo("control", 0)) )
    {
        ERRWRAP2(retval = _self_->predict(control));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}



// Tables (KalmanFilter)

static PyGetSetDef pyopencv_KalmanFilter_getseters[] =
{
    {(char*)"controlMatrix", (getter)pyopencv_KalmanFilter_get_controlMatrix, (setter)pyopencv_KalmanFilter_set_controlMatrix, (char*)"controlMatrix", NULL},
    {(char*)"errorCovPost", (getter)pyopencv_KalmanFilter_get_errorCovPost, (setter)pyopencv_KalmanFilter_set_errorCovPost, (char*)"errorCovPost", NULL},
    {(char*)"errorCovPre", (getter)pyopencv_KalmanFilter_get_errorCovPre, (setter)pyopencv_KalmanFilter_set_errorCovPre, (char*)"errorCovPre", NULL},
    {(char*)"gain", (getter)pyopencv_KalmanFilter_get_gain, (setter)pyopencv_KalmanFilter_set_gain, (char*)"gain", NULL},
    {(char*)"measurementMatrix", (getter)pyopencv_KalmanFilter_get_measurementMatrix, (setter)pyopencv_KalmanFilter_set_measurementMatrix, (char*)"measurementMatrix", NULL},
    {(char*)"measurementNoiseCov", (getter)pyopencv_KalmanFilter_get_measurementNoiseCov, (setter)pyopencv_KalmanFilter_set_measurementNoiseCov, (char*)"measurementNoiseCov", NULL},
    {(char*)"processNoiseCov", (getter)pyopencv_KalmanFilter_get_processNoiseCov, (setter)pyopencv_KalmanFilter_set_processNoiseCov, (char*)"processNoiseCov", NULL},
    {(char*)"statePost", (getter)pyopencv_KalmanFilter_get_statePost, (setter)pyopencv_KalmanFilter_set_statePost, (char*)"statePost", NULL},
    {(char*)"statePre", (getter)pyopencv_KalmanFilter_get_statePre, (setter)pyopencv_KalmanFilter_set_statePre, (char*)"statePre", NULL},
    {(char*)"transitionMatrix", (getter)pyopencv_KalmanFilter_get_transitionMatrix, (setter)pyopencv_KalmanFilter_set_transitionMatrix, (char*)"transitionMatrix", NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_KalmanFilter_methods[] =
{
    {"correct", CV_PY_FN_WITH_KW_(pyopencv_cv_KalmanFilter_correct, 0), "correct(measurement) -> retval\n.   @brief Updates the predicted state from the measurement.\n.   \n.       @param measurement The measured system parameters"},
    {"predict", CV_PY_FN_WITH_KW_(pyopencv_cv_KalmanFilter_predict, 0), "predict([, control]) -> retval\n.   @brief Computes a predicted state.\n.   \n.       @param control The optional input control"},

    {NULL,          NULL}
};

// Converter (KalmanFilter)

template<>
struct PyOpenCV_Converter< Ptr<cv::KalmanFilter> >
{
    static PyObject* from(const Ptr<cv::KalmanFilter>& r)
    {
        return pyopencv_KalmanFilter_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::KalmanFilter>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::KalmanFilter> * dst_;
        if (pyopencv_KalmanFilter_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::KalmanFilter> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// LineSegmentDetector (Generic)
//================================================================================

// GetSet (LineSegmentDetector)



// Methods (LineSegmentDetector)

static PyObject* pyopencv_cv_LineSegmentDetector_compareSegments(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::LineSegmentDetector> * self1 = 0;
    if (!pyopencv_LineSegmentDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'LineSegmentDetector' or its derivative)");
    Ptr<cv::LineSegmentDetector> _self_ = *(self1);
    {
    PyObject* pyobj_size = NULL;
    Size size;
    PyObject* pyobj_lines1 = NULL;
    Mat lines1;
    PyObject* pyobj_lines2 = NULL;
    Mat lines2;
    PyObject* pyobj__image = NULL;
    Mat _image;
    int retval;

    const char* keywords[] = { "size", "lines1", "lines2", "_image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|O:LineSegmentDetector.compareSegments", (char**)keywords, &pyobj_size, &pyobj_lines1, &pyobj_lines2, &pyobj__image) &&
        pyopencv_to(pyobj_size, size, ArgInfo("size", 0)) &&
        pyopencv_to(pyobj_lines1, lines1, ArgInfo("lines1", 0)) &&
        pyopencv_to(pyobj_lines2, lines2, ArgInfo("lines2", 0)) &&
        pyopencv_to(pyobj__image, _image, ArgInfo("_image", 1)) )
    {
        ERRWRAP2(retval = _self_->compareSegments(size, lines1, lines2, _image));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(_image));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_size = NULL;
    Size size;
    PyObject* pyobj_lines1 = NULL;
    UMat lines1;
    PyObject* pyobj_lines2 = NULL;
    UMat lines2;
    PyObject* pyobj__image = NULL;
    UMat _image;
    int retval;

    const char* keywords[] = { "size", "lines1", "lines2", "_image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOO|O:LineSegmentDetector.compareSegments", (char**)keywords, &pyobj_size, &pyobj_lines1, &pyobj_lines2, &pyobj__image) &&
        pyopencv_to(pyobj_size, size, ArgInfo("size", 0)) &&
        pyopencv_to(pyobj_lines1, lines1, ArgInfo("lines1", 0)) &&
        pyopencv_to(pyobj_lines2, lines2, ArgInfo("lines2", 0)) &&
        pyopencv_to(pyobj__image, _image, ArgInfo("_image", 1)) )
    {
        ERRWRAP2(retval = _self_->compareSegments(size, lines1, lines2, _image));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(_image));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_LineSegmentDetector_detect(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::LineSegmentDetector> * self1 = 0;
    if (!pyopencv_LineSegmentDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'LineSegmentDetector' or its derivative)");
    Ptr<cv::LineSegmentDetector> _self_ = *(self1);
    {
    PyObject* pyobj__image = NULL;
    Mat _image;
    PyObject* pyobj__lines = NULL;
    Mat _lines;
    PyObject* pyobj_width = NULL;
    Mat width;
    PyObject* pyobj_prec = NULL;
    Mat prec;
    PyObject* pyobj_nfa = NULL;
    Mat nfa;

    const char* keywords[] = { "_image", "_lines", "width", "prec", "nfa", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOOO:LineSegmentDetector.detect", (char**)keywords, &pyobj__image, &pyobj__lines, &pyobj_width, &pyobj_prec, &pyobj_nfa) &&
        pyopencv_to(pyobj__image, _image, ArgInfo("_image", 0)) &&
        pyopencv_to(pyobj__lines, _lines, ArgInfo("_lines", 1)) &&
        pyopencv_to(pyobj_width, width, ArgInfo("width", 1)) &&
        pyopencv_to(pyobj_prec, prec, ArgInfo("prec", 1)) &&
        pyopencv_to(pyobj_nfa, nfa, ArgInfo("nfa", 1)) )
    {
        ERRWRAP2(_self_->detect(_image, _lines, width, prec, nfa));
        return Py_BuildValue("(NNNN)", pyopencv_from(_lines), pyopencv_from(width), pyopencv_from(prec), pyopencv_from(nfa));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj__image = NULL;
    UMat _image;
    PyObject* pyobj__lines = NULL;
    UMat _lines;
    PyObject* pyobj_width = NULL;
    UMat width;
    PyObject* pyobj_prec = NULL;
    UMat prec;
    PyObject* pyobj_nfa = NULL;
    UMat nfa;

    const char* keywords[] = { "_image", "_lines", "width", "prec", "nfa", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOOO:LineSegmentDetector.detect", (char**)keywords, &pyobj__image, &pyobj__lines, &pyobj_width, &pyobj_prec, &pyobj_nfa) &&
        pyopencv_to(pyobj__image, _image, ArgInfo("_image", 0)) &&
        pyopencv_to(pyobj__lines, _lines, ArgInfo("_lines", 1)) &&
        pyopencv_to(pyobj_width, width, ArgInfo("width", 1)) &&
        pyopencv_to(pyobj_prec, prec, ArgInfo("prec", 1)) &&
        pyopencv_to(pyobj_nfa, nfa, ArgInfo("nfa", 1)) )
    {
        ERRWRAP2(_self_->detect(_image, _lines, width, prec, nfa));
        return Py_BuildValue("(NNNN)", pyopencv_from(_lines), pyopencv_from(width), pyopencv_from(prec), pyopencv_from(nfa));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_LineSegmentDetector_drawSegments(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::LineSegmentDetector> * self1 = 0;
    if (!pyopencv_LineSegmentDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'LineSegmentDetector' or its derivative)");
    Ptr<cv::LineSegmentDetector> _self_ = *(self1);
    {
    PyObject* pyobj__image = NULL;
    Mat _image;
    PyObject* pyobj_lines = NULL;
    Mat lines;

    const char* keywords[] = { "_image", "lines", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:LineSegmentDetector.drawSegments", (char**)keywords, &pyobj__image, &pyobj_lines) &&
        pyopencv_to(pyobj__image, _image, ArgInfo("_image", 1)) &&
        pyopencv_to(pyobj_lines, lines, ArgInfo("lines", 0)) )
    {
        ERRWRAP2(_self_->drawSegments(_image, lines));
        return pyopencv_from(_image);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj__image = NULL;
    UMat _image;
    PyObject* pyobj_lines = NULL;
    UMat lines;

    const char* keywords[] = { "_image", "lines", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:LineSegmentDetector.drawSegments", (char**)keywords, &pyobj__image, &pyobj_lines) &&
        pyopencv_to(pyobj__image, _image, ArgInfo("_image", 1)) &&
        pyopencv_to(pyobj_lines, lines, ArgInfo("lines", 0)) )
    {
        ERRWRAP2(_self_->drawSegments(_image, lines));
        return pyopencv_from(_image);
    }
    }

    return NULL;
}



// Tables (LineSegmentDetector)

static PyGetSetDef pyopencv_LineSegmentDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_LineSegmentDetector_methods[] =
{
    {"compareSegments", CV_PY_FN_WITH_KW_(pyopencv_cv_LineSegmentDetector_compareSegments, 0), "compareSegments(size, lines1, lines2[, _image]) -> retval, _image\n.   @brief Draws two groups of lines in blue and red, counting the non overlapping (mismatching) pixels.\n.   \n.       @param size The size of the image, where lines1 and lines2 were found.\n.       @param lines1 The first group of lines that needs to be drawn. It is visualized in blue color.\n.       @param lines2 The second group of lines. They visualized in red color.\n.       @param _image Optional image, where the lines will be drawn. The image should be color(3-channel)\n.       in order for lines1 and lines2 to be drawn in the above mentioned colors."},
    {"detect", CV_PY_FN_WITH_KW_(pyopencv_cv_LineSegmentDetector_detect, 0), "detect(_image[, _lines[, width[, prec[, nfa]]]]) -> _lines, width, prec, nfa\n.   @brief Finds lines in the input image.\n.   \n.       This is the output of the default parameters of the algorithm on the above shown image.\n.   \n.       ![image](pics/building_lsd.png)\n.   \n.       @param _image A grayscale (CV_8UC1) input image. If only a roi needs to be selected, use:\n.       `lsd_ptr-\\>detect(image(roi), lines, ...); lines += Scalar(roi.x, roi.y, roi.x, roi.y);`\n.       @param _lines A vector of Vec4i or Vec4f elements specifying the beginning and ending point of a line. Where\n.       Vec4i/Vec4f is (x1, y1, x2, y2), point 1 is the start, point 2 - end. Returned lines are strictly\n.       oriented depending on the gradient.\n.       @param width Vector of widths of the regions, where the lines are found. E.g. Width of line.\n.       @param prec Vector of precisions with which the lines are found.\n.       @param nfa Vector containing number of false alarms in the line region, with precision of 10%. The\n.       bigger the value, logarithmically better the detection.\n.       - -1 corresponds to 10 mean false alarms\n.       - 0 corresponds to 1 mean false alarm\n.       - 1 corresponds to 0.1 mean false alarms\n.       This vector will be calculated only when the objects type is #LSD_REFINE_ADV."},
    {"drawSegments", CV_PY_FN_WITH_KW_(pyopencv_cv_LineSegmentDetector_drawSegments, 0), "drawSegments(_image, lines) -> _image\n.   @brief Draws the line segments on a given image.\n.       @param _image The image, where the lines will be drawn. Should be bigger or equal to the image,\n.       where the lines were found.\n.       @param lines A vector of the lines that needed to be drawn."},

    {NULL,          NULL}
};

// Converter (LineSegmentDetector)

template<>
struct PyOpenCV_Converter< Ptr<cv::LineSegmentDetector> >
{
    static PyObject* from(const Ptr<cv::LineSegmentDetector>& r)
    {
        return pyopencv_LineSegmentDetector_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::LineSegmentDetector>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::LineSegmentDetector> * dst_;
        if (pyopencv_LineSegmentDetector_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::LineSegmentDetector> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// MSER (Generic)
//================================================================================

// GetSet (MSER)



// Methods (MSER)

static PyObject* pyopencv_cv_MSER_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    int _delta=5;
    int _min_area=60;
    int _max_area=14400;
    double _max_variation=0.25;
    double _min_diversity=.2;
    int _max_evolution=200;
    double _area_threshold=1.01;
    double _min_margin=0.003;
    int _edge_blur_size=5;
    Ptr<MSER> retval;

    const char* keywords[] = { "_delta", "_min_area", "_max_area", "_max_variation", "_min_diversity", "_max_evolution", "_area_threshold", "_min_margin", "_edge_blur_size", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|iiiddiddi:MSER.create", (char**)keywords, &_delta, &_min_area, &_max_area, &_max_variation, &_min_diversity, &_max_evolution, &_area_threshold, &_min_margin, &_edge_blur_size) )
    {
        ERRWRAP2(retval = cv::MSER::create(_delta, _min_area, _max_area, _max_variation, _min_diversity, _max_evolution, _area_threshold, _min_margin, _edge_blur_size));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_detectRegions(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    vector_vector_Point msers;
    vector_Rect bboxes;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:MSER.detectRegions", (char**)keywords, &pyobj_image) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) )
    {
        ERRWRAP2(_self_->detectRegions(image, msers, bboxes));
        return Py_BuildValue("(NN)", pyopencv_from(msers), pyopencv_from(bboxes));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    vector_vector_Point msers;
    vector_Rect bboxes;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:MSER.detectRegions", (char**)keywords, &pyobj_image) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) )
    {
        ERRWRAP2(_self_->detectRegions(image, msers, bboxes));
        return Py_BuildValue("(NN)", pyopencv_from(msers), pyopencv_from(bboxes));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_getDefaultName(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    String retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_getDelta(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDelta());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_getMaxArea(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxArea());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_getMinArea(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMinArea());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_getPass2Only(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPass2Only());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_setDelta(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    int delta=0;

    const char* keywords[] = { "delta", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:MSER.setDelta", (char**)keywords, &delta) )
    {
        ERRWRAP2(_self_->setDelta(delta));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_setMaxArea(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    int maxArea=0;

    const char* keywords[] = { "maxArea", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:MSER.setMaxArea", (char**)keywords, &maxArea) )
    {
        ERRWRAP2(_self_->setMaxArea(maxArea));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_setMinArea(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    int minArea=0;

    const char* keywords[] = { "minArea", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:MSER.setMinArea", (char**)keywords, &minArea) )
    {
        ERRWRAP2(_self_->setMinArea(minArea));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_setPass2Only(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    bool f=0;

    const char* keywords[] = { "f", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:MSER.setPass2Only", (char**)keywords, &f) )
    {
        ERRWRAP2(_self_->setPass2Only(f));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (MSER)

static PyGetSetDef pyopencv_MSER_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_MSER_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_create_static, METH_STATIC), "create([, _delta[, _min_area[, _max_area[, _max_variation[, _min_diversity[, _max_evolution[, _area_threshold[, _min_margin[, _edge_blur_size]]]]]]]]]) -> retval\n.   @brief Full consturctor for %MSER detector\n.   \n.       @param _delta it compares \\f$(size_{i}-size_{i-delta})/size_{i-delta}\\f$\n.       @param _min_area prune the area which smaller than minArea\n.       @param _max_area prune the area which bigger than maxArea\n.       @param _max_variation prune the area have similar size to its children\n.       @param _min_diversity for color image, trace back to cut off mser with diversity less than min_diversity\n.       @param _max_evolution  for color image, the evolution steps\n.       @param _area_threshold for color image, the area threshold to cause re-initialize\n.       @param _min_margin for color image, ignore too small margin\n.       @param _edge_blur_size for color image, the aperture size for edge blur"},
    {"detectRegions", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_detectRegions, 0), "detectRegions(image) -> msers, bboxes\n.   @brief Detect %MSER regions\n.   \n.       @param image input image (8UC1, 8UC3 or 8UC4, must be greater or equal than 3x3)\n.       @param msers resulting list of point sets\n.       @param bboxes resulting bounding boxes"},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_getDefaultName, 0), "getDefaultName() -> retval\n."},
    {"getDelta", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_getDelta, 0), "getDelta() -> retval\n."},
    {"getMaxArea", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_getMaxArea, 0), "getMaxArea() -> retval\n."},
    {"getMinArea", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_getMinArea, 0), "getMinArea() -> retval\n."},
    {"getPass2Only", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_getPass2Only, 0), "getPass2Only() -> retval\n."},
    {"setDelta", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_setDelta, 0), "setDelta(delta) -> None\n."},
    {"setMaxArea", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_setMaxArea, 0), "setMaxArea(maxArea) -> None\n."},
    {"setMinArea", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_setMinArea, 0), "setMinArea(minArea) -> None\n."},
    {"setPass2Only", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_setPass2Only, 0), "setPass2Only(f) -> None\n."},

    {NULL,          NULL}
};

// Converter (MSER)

template<>
struct PyOpenCV_Converter< Ptr<cv::MSER> >
{
    static PyObject* from(const Ptr<cv::MSER>& r)
    {
        return pyopencv_MSER_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::MSER>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::MSER> * dst_;
        if (pyopencv_MSER_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::MSER> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// ORB (Generic)
//================================================================================

// GetSet (ORB)



// Methods (ORB)

static PyObject* pyopencv_cv_ORB_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    int nfeatures=500;
    float scaleFactor=1.2f;
    int nlevels=8;
    int edgeThreshold=31;
    int firstLevel=0;
    int WTA_K=2;
    int scoreType=ORB::HARRIS_SCORE;
    int patchSize=31;
    int fastThreshold=20;
    Ptr<ORB> retval;

    const char* keywords[] = { "nfeatures", "scaleFactor", "nlevels", "edgeThreshold", "firstLevel", "WTA_K", "scoreType", "patchSize", "fastThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|ifiiiiiii:ORB.create", (char**)keywords, &nfeatures, &scaleFactor, &nlevels, &edgeThreshold, &firstLevel, &WTA_K, &scoreType, &patchSize, &fastThreshold) )
    {
        ERRWRAP2(retval = cv::ORB::create(nfeatures, scaleFactor, nlevels, edgeThreshold, firstLevel, WTA_K, scoreType, patchSize, fastThreshold));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getDefaultName(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    String retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getEdgeThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getEdgeThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getFastThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFastThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getFirstLevel(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFirstLevel());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getMaxFeatures(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxFeatures());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getNLevels(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNLevels());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getPatchSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPatchSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getScaleFactor(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getScaleFactor());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getScoreType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getScoreType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getWTA_K(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getWTA_K());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setEdgeThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int edgeThreshold=0;

    const char* keywords[] = { "edgeThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ORB.setEdgeThreshold", (char**)keywords, &edgeThreshold) )
    {
        ERRWRAP2(_self_->setEdgeThreshold(edgeThreshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setFastThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int fastThreshold=0;

    const char* keywords[] = { "fastThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ORB.setFastThreshold", (char**)keywords, &fastThreshold) )
    {
        ERRWRAP2(_self_->setFastThreshold(fastThreshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setFirstLevel(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int firstLevel=0;

    const char* keywords[] = { "firstLevel", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ORB.setFirstLevel", (char**)keywords, &firstLevel) )
    {
        ERRWRAP2(_self_->setFirstLevel(firstLevel));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setMaxFeatures(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int maxFeatures=0;

    const char* keywords[] = { "maxFeatures", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ORB.setMaxFeatures", (char**)keywords, &maxFeatures) )
    {
        ERRWRAP2(_self_->setMaxFeatures(maxFeatures));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setNLevels(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int nlevels=0;

    const char* keywords[] = { "nlevels", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ORB.setNLevels", (char**)keywords, &nlevels) )
    {
        ERRWRAP2(_self_->setNLevels(nlevels));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setPatchSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int patchSize=0;

    const char* keywords[] = { "patchSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ORB.setPatchSize", (char**)keywords, &patchSize) )
    {
        ERRWRAP2(_self_->setPatchSize(patchSize));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setScaleFactor(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    double scaleFactor=0;

    const char* keywords[] = { "scaleFactor", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ORB.setScaleFactor", (char**)keywords, &scaleFactor) )
    {
        ERRWRAP2(_self_->setScaleFactor(scaleFactor));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setScoreType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int scoreType=0;

    const char* keywords[] = { "scoreType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ORB.setScoreType", (char**)keywords, &scoreType) )
    {
        ERRWRAP2(_self_->setScoreType(scoreType));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setWTA_K(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int wta_k=0;

    const char* keywords[] = { "wta_k", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ORB.setWTA_K", (char**)keywords, &wta_k) )
    {
        ERRWRAP2(_self_->setWTA_K(wta_k));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (ORB)

static PyGetSetDef pyopencv_ORB_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_ORB_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_create_static, METH_STATIC), "create([, nfeatures[, scaleFactor[, nlevels[, edgeThreshold[, firstLevel[, WTA_K[, scoreType[, patchSize[, fastThreshold]]]]]]]]]) -> retval\n.   @brief The ORB constructor\n.   \n.       @param nfeatures The maximum number of features to retain.\n.       @param scaleFactor Pyramid decimation ratio, greater than 1. scaleFactor==2 means the classical\n.       pyramid, where each next level has 4x less pixels than the previous, but such a big scale factor\n.       will degrade feature matching scores dramatically. On the other hand, too close to 1 scale factor\n.       will mean that to cover certain scale range you will need more pyramid levels and so the speed\n.       will suffer.\n.       @param nlevels The number of pyramid levels. The smallest level will have linear size equal to\n.       input_image_linear_size/pow(scaleFactor, nlevels - firstLevel).\n.       @param edgeThreshold This is size of the border where the features are not detected. It should\n.       roughly match the patchSize parameter.\n.       @param firstLevel The level of pyramid to put source image to. Previous layers are filled\n.       with upscaled source image.\n.       @param WTA_K The number of points that produce each element of the oriented BRIEF descriptor. The\n.       default value 2 means the BRIEF where we take a random point pair and compare their brightnesses,\n.       so we get 0/1 response. Other possible values are 3 and 4. For example, 3 means that we take 3\n.       random points (of course, those point coordinates are random, but they are generated from the\n.       pre-defined seed, so each element of BRIEF descriptor is computed deterministically from the pixel\n.       rectangle), find point of maximum brightness and output index of the winner (0, 1 or 2). Such\n.       output will occupy 2 bits, and therefore it will need a special variant of Hamming distance,\n.       denoted as NORM_HAMMING2 (2 bits per bin). When WTA_K=4, we take 4 random points to compute each\n.       bin (that will also occupy 2 bits with possible values 0, 1, 2 or 3).\n.       @param scoreType The default HARRIS_SCORE means that Harris algorithm is used to rank features\n.       (the score is written to KeyPoint::score and is used to retain best nfeatures features);\n.       FAST_SCORE is alternative value of the parameter that produces slightly less stable keypoints,\n.       but it is a little faster to compute.\n.       @param patchSize size of the patch used by the oriented BRIEF descriptor. Of course, on smaller\n.       pyramid layers the perceived image area covered by a feature will be larger.\n.       @param fastThreshold the fast threshold"},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_getDefaultName, 0), "getDefaultName() -> retval\n."},
    {"getEdgeThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_getEdgeThreshold, 0), "getEdgeThreshold() -> retval\n."},
    {"getFastThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_getFastThreshold, 0), "getFastThreshold() -> retval\n."},
    {"getFirstLevel", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_getFirstLevel, 0), "getFirstLevel() -> retval\n."},
    {"getMaxFeatures", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_getMaxFeatures, 0), "getMaxFeatures() -> retval\n."},
    {"getNLevels", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_getNLevels, 0), "getNLevels() -> retval\n."},
    {"getPatchSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_getPatchSize, 0), "getPatchSize() -> retval\n."},
    {"getScaleFactor", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_getScaleFactor, 0), "getScaleFactor() -> retval\n."},
    {"getScoreType", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_getScoreType, 0), "getScoreType() -> retval\n."},
    {"getWTA_K", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_getWTA_K, 0), "getWTA_K() -> retval\n."},
    {"setEdgeThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_setEdgeThreshold, 0), "setEdgeThreshold(edgeThreshold) -> None\n."},
    {"setFastThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_setFastThreshold, 0), "setFastThreshold(fastThreshold) -> None\n."},
    {"setFirstLevel", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_setFirstLevel, 0), "setFirstLevel(firstLevel) -> None\n."},
    {"setMaxFeatures", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_setMaxFeatures, 0), "setMaxFeatures(maxFeatures) -> None\n."},
    {"setNLevels", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_setNLevels, 0), "setNLevels(nlevels) -> None\n."},
    {"setPatchSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_setPatchSize, 0), "setPatchSize(patchSize) -> None\n."},
    {"setScaleFactor", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_setScaleFactor, 0), "setScaleFactor(scaleFactor) -> None\n."},
    {"setScoreType", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_setScoreType, 0), "setScoreType(scoreType) -> None\n."},
    {"setWTA_K", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_setWTA_K, 0), "setWTA_K(wta_k) -> None\n."},

    {NULL,          NULL}
};

// Converter (ORB)

template<>
struct PyOpenCV_Converter< Ptr<cv::ORB> >
{
    static PyObject* from(const Ptr<cv::ORB>& r)
    {
        return pyopencv_ORB_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::ORB>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::ORB> * dst_;
        if (pyopencv_ORB_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::ORB> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// QRCodeDetector (Generic)
//================================================================================

// GetSet (QRCodeDetector)



// Methods (QRCodeDetector)

static int pyopencv_cv_QRCodeDetector_QRCodeDetector(pyopencv_QRCodeDetector_t* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        new (&(self->v)) Ptr<cv::QRCodeDetector>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::QRCodeDetector()));
        return 0;
    }

    return -1;
}

static PyObject* pyopencv_cv_QRCodeDetector_decode(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::QRCodeDetector> * self1 = 0;
    if (!pyopencv_QRCodeDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'QRCodeDetector' or its derivative)");
    Ptr<cv::QRCodeDetector> _self_ = *(self1);
    {
    PyObject* pyobj_img = NULL;
    Mat img;
    PyObject* pyobj_points = NULL;
    Mat points;
    PyObject* pyobj_straight_qrcode = NULL;
    Mat straight_qrcode;
    cv::String retval;

    const char* keywords[] = { "img", "points", "straight_qrcode", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:QRCodeDetector.decode", (char**)keywords, &pyobj_img, &pyobj_points, &pyobj_straight_qrcode) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_points, points, ArgInfo("points", 0)) &&
        pyopencv_to(pyobj_straight_qrcode, straight_qrcode, ArgInfo("straight_qrcode", 1)) )
    {
        ERRWRAP2(retval = _self_->decode(img, points, straight_qrcode));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(straight_qrcode));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_img = NULL;
    UMat img;
    PyObject* pyobj_points = NULL;
    UMat points;
    PyObject* pyobj_straight_qrcode = NULL;
    UMat straight_qrcode;
    cv::String retval;

    const char* keywords[] = { "img", "points", "straight_qrcode", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:QRCodeDetector.decode", (char**)keywords, &pyobj_img, &pyobj_points, &pyobj_straight_qrcode) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_points, points, ArgInfo("points", 0)) &&
        pyopencv_to(pyobj_straight_qrcode, straight_qrcode, ArgInfo("straight_qrcode", 1)) )
    {
        ERRWRAP2(retval = _self_->decode(img, points, straight_qrcode));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(straight_qrcode));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_QRCodeDetector_detect(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::QRCodeDetector> * self1 = 0;
    if (!pyopencv_QRCodeDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'QRCodeDetector' or its derivative)");
    Ptr<cv::QRCodeDetector> _self_ = *(self1);
    {
    PyObject* pyobj_img = NULL;
    Mat img;
    PyObject* pyobj_points = NULL;
    Mat points;
    bool retval;

    const char* keywords[] = { "img", "points", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:QRCodeDetector.detect", (char**)keywords, &pyobj_img, &pyobj_points) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_points, points, ArgInfo("points", 1)) )
    {
        ERRWRAP2(retval = _self_->detect(img, points));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(points));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_img = NULL;
    UMat img;
    PyObject* pyobj_points = NULL;
    UMat points;
    bool retval;

    const char* keywords[] = { "img", "points", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:QRCodeDetector.detect", (char**)keywords, &pyobj_img, &pyobj_points) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_points, points, ArgInfo("points", 1)) )
    {
        ERRWRAP2(retval = _self_->detect(img, points));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(points));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_QRCodeDetector_detectAndDecode(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::QRCodeDetector> * self1 = 0;
    if (!pyopencv_QRCodeDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'QRCodeDetector' or its derivative)");
    Ptr<cv::QRCodeDetector> _self_ = *(self1);
    {
    PyObject* pyobj_img = NULL;
    Mat img;
    PyObject* pyobj_points = NULL;
    Mat points;
    PyObject* pyobj_straight_qrcode = NULL;
    Mat straight_qrcode;
    cv::String retval;

    const char* keywords[] = { "img", "points", "straight_qrcode", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OO:QRCodeDetector.detectAndDecode", (char**)keywords, &pyobj_img, &pyobj_points, &pyobj_straight_qrcode) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_points, points, ArgInfo("points", 1)) &&
        pyopencv_to(pyobj_straight_qrcode, straight_qrcode, ArgInfo("straight_qrcode", 1)) )
    {
        ERRWRAP2(retval = _self_->detectAndDecode(img, points, straight_qrcode));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(points), pyopencv_from(straight_qrcode));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_img = NULL;
    UMat img;
    PyObject* pyobj_points = NULL;
    UMat points;
    PyObject* pyobj_straight_qrcode = NULL;
    UMat straight_qrcode;
    cv::String retval;

    const char* keywords[] = { "img", "points", "straight_qrcode", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OO:QRCodeDetector.detectAndDecode", (char**)keywords, &pyobj_img, &pyobj_points, &pyobj_straight_qrcode) &&
        pyopencv_to(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to(pyobj_points, points, ArgInfo("points", 1)) &&
        pyopencv_to(pyobj_straight_qrcode, straight_qrcode, ArgInfo("straight_qrcode", 1)) )
    {
        ERRWRAP2(retval = _self_->detectAndDecode(img, points, straight_qrcode));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(points), pyopencv_from(straight_qrcode));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_QRCodeDetector_setEpsX(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::QRCodeDetector> * self1 = 0;
    if (!pyopencv_QRCodeDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'QRCodeDetector' or its derivative)");
    Ptr<cv::QRCodeDetector> _self_ = *(self1);
    double epsX=0;

    const char* keywords[] = { "epsX", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:QRCodeDetector.setEpsX", (char**)keywords, &epsX) )
    {
        ERRWRAP2(_self_->setEpsX(epsX));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_QRCodeDetector_setEpsY(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::QRCodeDetector> * self1 = 0;
    if (!pyopencv_QRCodeDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'QRCodeDetector' or its derivative)");
    Ptr<cv::QRCodeDetector> _self_ = *(self1);
    double epsY=0;

    const char* keywords[] = { "epsY", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:QRCodeDetector.setEpsY", (char**)keywords, &epsY) )
    {
        ERRWRAP2(_self_->setEpsY(epsY));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (QRCodeDetector)

static PyGetSetDef pyopencv_QRCodeDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_QRCodeDetector_methods[] =
{
    {"decode", CV_PY_FN_WITH_KW_(pyopencv_cv_QRCodeDetector_decode, 0), "decode(img, points[, straight_qrcode]) -> retval, straight_qrcode\n.   @brief Decodes QR code in image once it's found by the detect() method.\n.        Returns UTF8-encoded output string or empty string if the code cannot be decoded.\n.   \n.        @param img grayscale or color (BGR) image containing QR code.\n.        @param points Quadrangle vertices found by detect() method (or some other algorithm).\n.        @param straight_qrcode The optional output image containing rectified and binarized QR code"},
    {"detect", CV_PY_FN_WITH_KW_(pyopencv_cv_QRCodeDetector_detect, 0), "detect(img[, points]) -> retval, points\n.   @brief Detects QR code in image and returns the quadrangle containing the code.\n.        @param img grayscale or color (BGR) image containing (or not) QR code.\n.        @param points Output vector of vertices of the minimum-area quadrangle containing the code."},
    {"detectAndDecode", CV_PY_FN_WITH_KW_(pyopencv_cv_QRCodeDetector_detectAndDecode, 0), "detectAndDecode(img[, points[, straight_qrcode]]) -> retval, points, straight_qrcode\n.   @brief Both detects and decodes QR code\n.   \n.        @param img grayscale or color (BGR) image containing QR code.\n.        @param points opiotnal output array of vertices of the found QR code quadrangle. Will be empty if not found.\n.        @param straight_qrcode The optional output image containing rectified and binarized QR code"},
    {"setEpsX", CV_PY_FN_WITH_KW_(pyopencv_cv_QRCodeDetector_setEpsX, 0), "setEpsX(epsX) -> None\n.   @brief sets the epsilon used during the horizontal scan of QR code stop marker detection.\n.        @param epsX Epsilon neighborhood, which allows you to determine the horizontal pattern\n.        of the scheme 1:1:3:1:1 according to QR code standard."},
    {"setEpsY", CV_PY_FN_WITH_KW_(pyopencv_cv_QRCodeDetector_setEpsY, 0), "setEpsY(epsY) -> None\n.   @brief sets the epsilon used during the vertical scan of QR code stop marker detection.\n.        @param epsY Epsilon neighborhood, which allows you to determine the vertical pattern\n.        of the scheme 1:1:3:1:1 according to QR code standard."},

    {NULL,          NULL}
};

// Converter (QRCodeDetector)

template<>
struct PyOpenCV_Converter< Ptr<cv::QRCodeDetector> >
{
    static PyObject* from(const Ptr<cv::QRCodeDetector>& r)
    {
        return pyopencv_QRCodeDetector_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::QRCodeDetector>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::QRCodeDetector> * dst_;
        if (pyopencv_QRCodeDetector_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::QRCodeDetector> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// SimpleBlobDetector (Generic)
//================================================================================

// GetSet (SimpleBlobDetector)



// Methods (SimpleBlobDetector)

static PyObject* pyopencv_cv_SimpleBlobDetector_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_parameters = NULL;
    SimpleBlobDetector_Params parameters=SimpleBlobDetector::Params();
    Ptr<SimpleBlobDetector> retval;

    const char* keywords[] = { "parameters", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:SimpleBlobDetector.create", (char**)keywords, &pyobj_parameters) &&
        pyopencv_to(pyobj_parameters, parameters, ArgInfo("parameters", 0)) )
    {
        ERRWRAP2(retval = cv::SimpleBlobDetector::create(parameters));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SimpleBlobDetector_getDefaultName(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SimpleBlobDetector> * self1 = 0;
    if (!pyopencv_SimpleBlobDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SimpleBlobDetector' or its derivative)");
    Ptr<cv::SimpleBlobDetector> _self_ = *(self1);
    String retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (SimpleBlobDetector)

static PyGetSetDef pyopencv_SimpleBlobDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_SimpleBlobDetector_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_SimpleBlobDetector_create_static, METH_STATIC), "create([, parameters]) -> retval\n."},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_SimpleBlobDetector_getDefaultName, 0), "getDefaultName() -> retval\n."},

    {NULL,          NULL}
};

// Converter (SimpleBlobDetector)

template<>
struct PyOpenCV_Converter< Ptr<cv::SimpleBlobDetector> >
{
    static PyObject* from(const Ptr<cv::SimpleBlobDetector>& r)
    {
        return pyopencv_SimpleBlobDetector_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::SimpleBlobDetector>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::SimpleBlobDetector> * dst_;
        if (pyopencv_SimpleBlobDetector_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::SimpleBlobDetector> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// SimpleBlobDetector_Params (Generic)
//================================================================================

// GetSet (SimpleBlobDetector_Params)


static PyObject* pyopencv_SimpleBlobDetector_Params_get_blobColor(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.blobColor);
}

static int pyopencv_SimpleBlobDetector_Params_set_blobColor(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the blobColor attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.blobColor, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_filterByArea(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.filterByArea);
}

static int pyopencv_SimpleBlobDetector_Params_set_filterByArea(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the filterByArea attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.filterByArea, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_filterByCircularity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.filterByCircularity);
}

static int pyopencv_SimpleBlobDetector_Params_set_filterByCircularity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the filterByCircularity attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.filterByCircularity, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_filterByColor(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.filterByColor);
}

static int pyopencv_SimpleBlobDetector_Params_set_filterByColor(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the filterByColor attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.filterByColor, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_filterByConvexity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.filterByConvexity);
}

static int pyopencv_SimpleBlobDetector_Params_set_filterByConvexity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the filterByConvexity attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.filterByConvexity, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_filterByInertia(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.filterByInertia);
}

static int pyopencv_SimpleBlobDetector_Params_set_filterByInertia(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the filterByInertia attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.filterByInertia, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_maxArea(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.maxArea);
}

static int pyopencv_SimpleBlobDetector_Params_set_maxArea(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxArea attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.maxArea, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_maxCircularity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.maxCircularity);
}

static int pyopencv_SimpleBlobDetector_Params_set_maxCircularity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxCircularity attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.maxCircularity, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_maxConvexity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.maxConvexity);
}

static int pyopencv_SimpleBlobDetector_Params_set_maxConvexity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxConvexity attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.maxConvexity, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_maxInertiaRatio(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.maxInertiaRatio);
}

static int pyopencv_SimpleBlobDetector_Params_set_maxInertiaRatio(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxInertiaRatio attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.maxInertiaRatio, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_maxThreshold(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.maxThreshold);
}

static int pyopencv_SimpleBlobDetector_Params_set_maxThreshold(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxThreshold attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.maxThreshold, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minArea(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minArea);
}

static int pyopencv_SimpleBlobDetector_Params_set_minArea(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minArea attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minArea, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minCircularity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minCircularity);
}

static int pyopencv_SimpleBlobDetector_Params_set_minCircularity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minCircularity attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minCircularity, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minConvexity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minConvexity);
}

static int pyopencv_SimpleBlobDetector_Params_set_minConvexity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minConvexity attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minConvexity, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minDistBetweenBlobs(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minDistBetweenBlobs);
}

static int pyopencv_SimpleBlobDetector_Params_set_minDistBetweenBlobs(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minDistBetweenBlobs attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minDistBetweenBlobs, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minInertiaRatio(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minInertiaRatio);
}

static int pyopencv_SimpleBlobDetector_Params_set_minInertiaRatio(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minInertiaRatio attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minInertiaRatio, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minRepeatability(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minRepeatability);
}

static int pyopencv_SimpleBlobDetector_Params_set_minRepeatability(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minRepeatability attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minRepeatability, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minThreshold(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minThreshold);
}

static int pyopencv_SimpleBlobDetector_Params_set_minThreshold(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minThreshold attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.minThreshold, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_thresholdStep(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.thresholdStep);
}

static int pyopencv_SimpleBlobDetector_Params_set_thresholdStep(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the thresholdStep attribute");
        return -1;
    }
    return pyopencv_to(value, p->v.thresholdStep, ArgInfo("value", false)) ? 0 : -1;
}


// Methods (SimpleBlobDetector_Params)

static int pyopencv_cv_SimpleBlobDetector_Params_SimpleBlobDetector_Params(pyopencv_SimpleBlobDetector_Params_t* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::SimpleBlobDetector::Params());
        return 0;
    }

    return -1;
}



// Tables (SimpleBlobDetector_Params)

static PyGetSetDef pyopencv_SimpleBlobDetector_Params_getseters[] =
{
    {(char*)"blobColor", (getter)pyopencv_SimpleBlobDetector_Params_get_blobColor, (setter)pyopencv_SimpleBlobDetector_Params_set_blobColor, (char*)"blobColor", NULL},
    {(char*)"filterByArea", (getter)pyopencv_SimpleBlobDetector_Params_get_filterByArea, (setter)pyopencv_SimpleBlobDetector_Params_set_filterByArea, (char*)"filterByArea", NULL},
    {(char*)"filterByCircularity", (getter)pyopencv_SimpleBlobDetector_Params_get_filterByCircularity, (setter)pyopencv_SimpleBlobDetector_Params_set_filterByCircularity, (char*)"filterByCircularity", NULL},
    {(char*)"filterByColor", (getter)pyopencv_SimpleBlobDetector_Params_get_filterByColor, (setter)pyopencv_SimpleBlobDetector_Params_set_filterByColor, (char*)"filterByColor", NULL},
    {(char*)"filterByConvexity", (getter)pyopencv_SimpleBlobDetector_Params_get_filterByConvexity, (setter)pyopencv_SimpleBlobDetector_Params_set_filterByConvexity, (char*)"filterByConvexity", NULL},
    {(char*)"filterByInertia", (getter)pyopencv_SimpleBlobDetector_Params_get_filterByInertia, (setter)pyopencv_SimpleBlobDetector_Params_set_filterByInertia, (char*)"filterByInertia", NULL},
    {(char*)"maxArea", (getter)pyopencv_SimpleBlobDetector_Params_get_maxArea, (setter)pyopencv_SimpleBlobDetector_Params_set_maxArea, (char*)"maxArea", NULL},
    {(char*)"maxCircularity", (getter)pyopencv_SimpleBlobDetector_Params_get_maxCircularity, (setter)pyopencv_SimpleBlobDetector_Params_set_maxCircularity, (char*)"maxCircularity", NULL},
    {(char*)"maxConvexity", (getter)pyopencv_SimpleBlobDetector_Params_get_maxConvexity, (setter)pyopencv_SimpleBlobDetector_Params_set_maxConvexity, (char*)"maxConvexity", NULL},
    {(char*)"maxInertiaRatio", (getter)pyopencv_SimpleBlobDetector_Params_get_maxInertiaRatio, (setter)pyopencv_SimpleBlobDetector_Params_set_maxInertiaRatio, (char*)"maxInertiaRatio", NULL},
    {(char*)"maxThreshold", (getter)pyopencv_SimpleBlobDetector_Params_get_maxThreshold, (setter)pyopencv_SimpleBlobDetector_Params_set_maxThreshold, (char*)"maxThreshold", NULL},
    {(char*)"minArea", (getter)pyopencv_SimpleBlobDetector_Params_get_minArea, (setter)pyopencv_SimpleBlobDetector_Params_set_minArea, (char*)"minArea", NULL},
    {(char*)"minCircularity", (getter)pyopencv_SimpleBlobDetector_Params_get_minCircularity, (setter)pyopencv_SimpleBlobDetector_Params_set_minCircularity, (char*)"minCircularity", NULL},
    {(char*)"minConvexity", (getter)pyopencv_SimpleBlobDetector_Params_get_minConvexity, (setter)pyopencv_SimpleBlobDetector_Params_set_minConvexity, (char*)"minConvexity", NULL},
    {(char*)"minDistBetweenBlobs", (getter)pyopencv_SimpleBlobDetector_Params_get_minDistBetweenBlobs, (setter)pyopencv_SimpleBlobDetector_Params_set_minDistBetweenBlobs, (char*)"minDistBetweenBlobs", NULL},
    {(char*)"minInertiaRatio", (getter)pyopencv_SimpleBlobDetector_Params_get_minInertiaRatio, (setter)pyopencv_SimpleBlobDetector_Params_set_minInertiaRatio, (char*)"minInertiaRatio", NULL},
    {(char*)"minRepeatability", (getter)pyopencv_SimpleBlobDetector_Params_get_minRepeatability, (setter)pyopencv_SimpleBlobDetector_Params_set_minRepeatability, (char*)"minRepeatability", NULL},
    {(char*)"minThreshold", (getter)pyopencv_SimpleBlobDetector_Params_get_minThreshold, (setter)pyopencv_SimpleBlobDetector_Params_set_minThreshold, (char*)"minThreshold", NULL},
    {(char*)"thresholdStep", (getter)pyopencv_SimpleBlobDetector_Params_get_thresholdStep, (setter)pyopencv_SimpleBlobDetector_Params_set_thresholdStep, (char*)"thresholdStep", NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_SimpleBlobDetector_Params_methods[] =
{

    {NULL,          NULL}
};

// Converter (SimpleBlobDetector_Params)

template<>
struct PyOpenCV_Converter< cv::SimpleBlobDetector::Params >
{
    static PyObject* from(const cv::SimpleBlobDetector::Params& r)
    {
        return pyopencv_SimpleBlobDetector_Params_Instance(r);
    }
    static bool to(PyObject* src, cv::SimpleBlobDetector::Params& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        cv::SimpleBlobDetector::Params * dst_;
        if (pyopencv_SimpleBlobDetector_Params_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected cv::SimpleBlobDetector::Params for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// SparseOpticalFlow (Generic)
//================================================================================

// GetSet (SparseOpticalFlow)



// Methods (SparseOpticalFlow)

static PyObject* pyopencv_cv_SparseOpticalFlow_calc(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SparseOpticalFlow> * self1 = 0;
    if (!pyopencv_SparseOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SparseOpticalFlow' or its derivative)");
    Ptr<cv::SparseOpticalFlow> _self_ = *(self1);
    {
    PyObject* pyobj_prevImg = NULL;
    Mat prevImg;
    PyObject* pyobj_nextImg = NULL;
    Mat nextImg;
    PyObject* pyobj_prevPts = NULL;
    Mat prevPts;
    PyObject* pyobj_nextPts = NULL;
    Mat nextPts;
    PyObject* pyobj_status = NULL;
    Mat status;
    PyObject* pyobj_err = NULL;
    Mat err;

    const char* keywords[] = { "prevImg", "nextImg", "prevPts", "nextPts", "status", "err", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOOO|OO:SparseOpticalFlow.calc", (char**)keywords, &pyobj_prevImg, &pyobj_nextImg, &pyobj_prevPts, &pyobj_nextPts, &pyobj_status, &pyobj_err) &&
        pyopencv_to(pyobj_prevImg, prevImg, ArgInfo("prevImg", 0)) &&
        pyopencv_to(pyobj_nextImg, nextImg, ArgInfo("nextImg", 0)) &&
        pyopencv_to(pyobj_prevPts, prevPts, ArgInfo("prevPts", 0)) &&
        pyopencv_to(pyobj_nextPts, nextPts, ArgInfo("nextPts", 1)) &&
        pyopencv_to(pyobj_status, status, ArgInfo("status", 1)) &&
        pyopencv_to(pyobj_err, err, ArgInfo("err", 1)) )
    {
        ERRWRAP2(_self_->calc(prevImg, nextImg, prevPts, nextPts, status, err));
        return Py_BuildValue("(NNN)", pyopencv_from(nextPts), pyopencv_from(status), pyopencv_from(err));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_prevImg = NULL;
    UMat prevImg;
    PyObject* pyobj_nextImg = NULL;
    UMat nextImg;
    PyObject* pyobj_prevPts = NULL;
    UMat prevPts;
    PyObject* pyobj_nextPts = NULL;
    UMat nextPts;
    PyObject* pyobj_status = NULL;
    UMat status;
    PyObject* pyobj_err = NULL;
    UMat err;

    const char* keywords[] = { "prevImg", "nextImg", "prevPts", "nextPts", "status", "err", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOOO|OO:SparseOpticalFlow.calc", (char**)keywords, &pyobj_prevImg, &pyobj_nextImg, &pyobj_prevPts, &pyobj_nextPts, &pyobj_status, &pyobj_err) &&
        pyopencv_to(pyobj_prevImg, prevImg, ArgInfo("prevImg", 0)) &&
        pyopencv_to(pyobj_nextImg, nextImg, ArgInfo("nextImg", 0)) &&
        pyopencv_to(pyobj_prevPts, prevPts, ArgInfo("prevPts", 0)) &&
        pyopencv_to(pyobj_nextPts, nextPts, ArgInfo("nextPts", 1)) &&
        pyopencv_to(pyobj_status, status, ArgInfo("status", 1)) &&
        pyopencv_to(pyobj_err, err, ArgInfo("err", 1)) )
    {
        ERRWRAP2(_self_->calc(prevImg, nextImg, prevPts, nextPts, status, err));
        return Py_BuildValue("(NNN)", pyopencv_from(nextPts), pyopencv_from(status), pyopencv_from(err));
    }
    }

    return NULL;
}



// Tables (SparseOpticalFlow)

static PyGetSetDef pyopencv_SparseOpticalFlow_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_SparseOpticalFlow_methods[] =
{
    {"calc", CV_PY_FN_WITH_KW_(pyopencv_cv_SparseOpticalFlow_calc, 0), "calc(prevImg, nextImg, prevPts, nextPts[, status[, err]]) -> nextPts, status, err\n.   @brief Calculates a sparse optical flow.\n.   \n.       @param prevImg First input image.\n.       @param nextImg Second input image of the same size and the same type as prevImg.\n.       @param prevPts Vector of 2D points for which the flow needs to be found.\n.       @param nextPts Output vector of 2D points containing the calculated new positions of input features in the second image.\n.       @param status Output status vector. Each element of the vector is set to 1 if the\n.                     flow for the corresponding features has been found. Otherwise, it is set to 0.\n.       @param err Optional output vector that contains error response for each point (inverse confidence)."},

    {NULL,          NULL}
};

// Converter (SparseOpticalFlow)

template<>
struct PyOpenCV_Converter< Ptr<cv::SparseOpticalFlow> >
{
    static PyObject* from(const Ptr<cv::SparseOpticalFlow>& r)
    {
        return pyopencv_SparseOpticalFlow_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::SparseOpticalFlow>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::SparseOpticalFlow> * dst_;
        if (pyopencv_SparseOpticalFlow_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::SparseOpticalFlow> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// SparsePyrLKOpticalFlow (Generic)
//================================================================================

// GetSet (SparsePyrLKOpticalFlow)



// Methods (SparsePyrLKOpticalFlow)

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_winSize = NULL;
    Size winSize=Size(21, 21);
    int maxLevel=3;
    PyObject* pyobj_crit = NULL;
    TermCriteria crit=TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 0.01);
    int flags=0;
    double minEigThreshold=1e-4;
    Ptr<SparsePyrLKOpticalFlow> retval;

    const char* keywords[] = { "winSize", "maxLevel", "crit", "flags", "minEigThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|OiOid:SparsePyrLKOpticalFlow.create", (char**)keywords, &pyobj_winSize, &maxLevel, &pyobj_crit, &flags, &minEigThreshold) &&
        pyopencv_to(pyobj_winSize, winSize, ArgInfo("winSize", 0)) &&
        pyopencv_to(pyobj_crit, crit, ArgInfo("crit", 0)) )
    {
        ERRWRAP2(retval = cv::SparsePyrLKOpticalFlow::create(winSize, maxLevel, crit, flags, minEigThreshold));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_getFlags(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SparsePyrLKOpticalFlow> * self1 = 0;
    if (!pyopencv_SparsePyrLKOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    Ptr<cv::SparsePyrLKOpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFlags());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_getMaxLevel(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SparsePyrLKOpticalFlow> * self1 = 0;
    if (!pyopencv_SparsePyrLKOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    Ptr<cv::SparsePyrLKOpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxLevel());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_getMinEigThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SparsePyrLKOpticalFlow> * self1 = 0;
    if (!pyopencv_SparsePyrLKOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    Ptr<cv::SparsePyrLKOpticalFlow> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMinEigThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_getTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SparsePyrLKOpticalFlow> * self1 = 0;
    if (!pyopencv_SparsePyrLKOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    Ptr<cv::SparsePyrLKOpticalFlow> _self_ = *(self1);
    TermCriteria retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTermCriteria());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_getWinSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SparsePyrLKOpticalFlow> * self1 = 0;
    if (!pyopencv_SparsePyrLKOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    Ptr<cv::SparsePyrLKOpticalFlow> _self_ = *(self1);
    Size retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getWinSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_setFlags(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SparsePyrLKOpticalFlow> * self1 = 0;
    if (!pyopencv_SparsePyrLKOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    Ptr<cv::SparsePyrLKOpticalFlow> _self_ = *(self1);
    int flags=0;

    const char* keywords[] = { "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:SparsePyrLKOpticalFlow.setFlags", (char**)keywords, &flags) )
    {
        ERRWRAP2(_self_->setFlags(flags));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_setMaxLevel(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SparsePyrLKOpticalFlow> * self1 = 0;
    if (!pyopencv_SparsePyrLKOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    Ptr<cv::SparsePyrLKOpticalFlow> _self_ = *(self1);
    int maxLevel=0;

    const char* keywords[] = { "maxLevel", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:SparsePyrLKOpticalFlow.setMaxLevel", (char**)keywords, &maxLevel) )
    {
        ERRWRAP2(_self_->setMaxLevel(maxLevel));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_setMinEigThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SparsePyrLKOpticalFlow> * self1 = 0;
    if (!pyopencv_SparsePyrLKOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    Ptr<cv::SparsePyrLKOpticalFlow> _self_ = *(self1);
    double minEigThreshold=0;

    const char* keywords[] = { "minEigThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:SparsePyrLKOpticalFlow.setMinEigThreshold", (char**)keywords, &minEigThreshold) )
    {
        ERRWRAP2(_self_->setMinEigThreshold(minEigThreshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_setTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SparsePyrLKOpticalFlow> * self1 = 0;
    if (!pyopencv_SparsePyrLKOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    Ptr<cv::SparsePyrLKOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_crit = NULL;
    TermCriteria crit;

    const char* keywords[] = { "crit", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:SparsePyrLKOpticalFlow.setTermCriteria", (char**)keywords, &pyobj_crit) &&
        pyopencv_to(pyobj_crit, crit, ArgInfo("crit", 0)) )
    {
        ERRWRAP2(_self_->setTermCriteria(crit));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_setWinSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SparsePyrLKOpticalFlow> * self1 = 0;
    if (!pyopencv_SparsePyrLKOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    Ptr<cv::SparsePyrLKOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_winSize = NULL;
    Size winSize;

    const char* keywords[] = { "winSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:SparsePyrLKOpticalFlow.setWinSize", (char**)keywords, &pyobj_winSize) &&
        pyopencv_to(pyobj_winSize, winSize, ArgInfo("winSize", 0)) )
    {
        ERRWRAP2(_self_->setWinSize(winSize));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (SparsePyrLKOpticalFlow)

static PyGetSetDef pyopencv_SparsePyrLKOpticalFlow_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_SparsePyrLKOpticalFlow_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_SparsePyrLKOpticalFlow_create_static, METH_STATIC), "create([, winSize[, maxLevel[, crit[, flags[, minEigThreshold]]]]]) -> retval\n."},
    {"getFlags", CV_PY_FN_WITH_KW_(pyopencv_cv_SparsePyrLKOpticalFlow_getFlags, 0), "getFlags() -> retval\n."},
    {"getMaxLevel", CV_PY_FN_WITH_KW_(pyopencv_cv_SparsePyrLKOpticalFlow_getMaxLevel, 0), "getMaxLevel() -> retval\n."},
    {"getMinEigThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_SparsePyrLKOpticalFlow_getMinEigThreshold, 0), "getMinEigThreshold() -> retval\n."},
    {"getTermCriteria", CV_PY_FN_WITH_KW_(pyopencv_cv_SparsePyrLKOpticalFlow_getTermCriteria, 0), "getTermCriteria() -> retval\n."},
    {"getWinSize", CV_PY_FN_WITH_KW_(pyopencv_cv_SparsePyrLKOpticalFlow_getWinSize, 0), "getWinSize() -> retval\n."},
    {"setFlags", CV_PY_FN_WITH_KW_(pyopencv_cv_SparsePyrLKOpticalFlow_setFlags, 0), "setFlags(flags) -> None\n."},
    {"setMaxLevel", CV_PY_FN_WITH_KW_(pyopencv_cv_SparsePyrLKOpticalFlow_setMaxLevel, 0), "setMaxLevel(maxLevel) -> None\n."},
    {"setMinEigThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_SparsePyrLKOpticalFlow_setMinEigThreshold, 0), "setMinEigThreshold(minEigThreshold) -> None\n."},
    {"setTermCriteria", CV_PY_FN_WITH_KW_(pyopencv_cv_SparsePyrLKOpticalFlow_setTermCriteria, 0), "setTermCriteria(crit) -> None\n."},
    {"setWinSize", CV_PY_FN_WITH_KW_(pyopencv_cv_SparsePyrLKOpticalFlow_setWinSize, 0), "setWinSize(winSize) -> None\n."},

    {NULL,          NULL}
};

// Converter (SparsePyrLKOpticalFlow)

template<>
struct PyOpenCV_Converter< Ptr<cv::SparsePyrLKOpticalFlow> >
{
    static PyObject* from(const Ptr<cv::SparsePyrLKOpticalFlow>& r)
    {
        return pyopencv_SparsePyrLKOpticalFlow_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::SparsePyrLKOpticalFlow>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::SparsePyrLKOpticalFlow> * dst_;
        if (pyopencv_SparsePyrLKOpticalFlow_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::SparsePyrLKOpticalFlow> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// StereoBM (Generic)
//================================================================================

// GetSet (StereoBM)



// Methods (StereoBM)

static PyObject* pyopencv_cv_StereoBM_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    int numDisparities=0;
    int blockSize=21;
    Ptr<StereoBM> retval;

    const char* keywords[] = { "numDisparities", "blockSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|ii:StereoBM.create", (char**)keywords, &numDisparities, &blockSize) )
    {
        ERRWRAP2(retval = cv::StereoBM::create(numDisparities, blockSize));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_getPreFilterCap(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoBM> * self1 = 0;
    if (!pyopencv_StereoBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    Ptr<cv::StereoBM> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPreFilterCap());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_getPreFilterSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoBM> * self1 = 0;
    if (!pyopencv_StereoBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    Ptr<cv::StereoBM> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPreFilterSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_getPreFilterType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoBM> * self1 = 0;
    if (!pyopencv_StereoBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    Ptr<cv::StereoBM> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPreFilterType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_getROI1(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoBM> * self1 = 0;
    if (!pyopencv_StereoBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    Ptr<cv::StereoBM> _self_ = *(self1);
    Rect retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getROI1());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_getROI2(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoBM> * self1 = 0;
    if (!pyopencv_StereoBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    Ptr<cv::StereoBM> _self_ = *(self1);
    Rect retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getROI2());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_getSmallerBlockSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoBM> * self1 = 0;
    if (!pyopencv_StereoBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    Ptr<cv::StereoBM> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSmallerBlockSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_getTextureThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoBM> * self1 = 0;
    if (!pyopencv_StereoBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    Ptr<cv::StereoBM> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTextureThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_getUniquenessRatio(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoBM> * self1 = 0;
    if (!pyopencv_StereoBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    Ptr<cv::StereoBM> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getUniquenessRatio());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_setPreFilterCap(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoBM> * self1 = 0;
    if (!pyopencv_StereoBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    Ptr<cv::StereoBM> _self_ = *(self1);
    int preFilterCap=0;

    const char* keywords[] = { "preFilterCap", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoBM.setPreFilterCap", (char**)keywords, &preFilterCap) )
    {
        ERRWRAP2(_self_->setPreFilterCap(preFilterCap));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_setPreFilterSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoBM> * self1 = 0;
    if (!pyopencv_StereoBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    Ptr<cv::StereoBM> _self_ = *(self1);
    int preFilterSize=0;

    const char* keywords[] = { "preFilterSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoBM.setPreFilterSize", (char**)keywords, &preFilterSize) )
    {
        ERRWRAP2(_self_->setPreFilterSize(preFilterSize));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_setPreFilterType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoBM> * self1 = 0;
    if (!pyopencv_StereoBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    Ptr<cv::StereoBM> _self_ = *(self1);
    int preFilterType=0;

    const char* keywords[] = { "preFilterType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoBM.setPreFilterType", (char**)keywords, &preFilterType) )
    {
        ERRWRAP2(_self_->setPreFilterType(preFilterType));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_setROI1(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoBM> * self1 = 0;
    if (!pyopencv_StereoBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    Ptr<cv::StereoBM> _self_ = *(self1);
    PyObject* pyobj_roi1 = NULL;
    Rect roi1;

    const char* keywords[] = { "roi1", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:StereoBM.setROI1", (char**)keywords, &pyobj_roi1) &&
        pyopencv_to(pyobj_roi1, roi1, ArgInfo("roi1", 0)) )
    {
        ERRWRAP2(_self_->setROI1(roi1));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_setROI2(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoBM> * self1 = 0;
    if (!pyopencv_StereoBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    Ptr<cv::StereoBM> _self_ = *(self1);
    PyObject* pyobj_roi2 = NULL;
    Rect roi2;

    const char* keywords[] = { "roi2", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:StereoBM.setROI2", (char**)keywords, &pyobj_roi2) &&
        pyopencv_to(pyobj_roi2, roi2, ArgInfo("roi2", 0)) )
    {
        ERRWRAP2(_self_->setROI2(roi2));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_setSmallerBlockSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoBM> * self1 = 0;
    if (!pyopencv_StereoBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    Ptr<cv::StereoBM> _self_ = *(self1);
    int blockSize=0;

    const char* keywords[] = { "blockSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoBM.setSmallerBlockSize", (char**)keywords, &blockSize) )
    {
        ERRWRAP2(_self_->setSmallerBlockSize(blockSize));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_setTextureThreshold(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoBM> * self1 = 0;
    if (!pyopencv_StereoBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    Ptr<cv::StereoBM> _self_ = *(self1);
    int textureThreshold=0;

    const char* keywords[] = { "textureThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoBM.setTextureThreshold", (char**)keywords, &textureThreshold) )
    {
        ERRWRAP2(_self_->setTextureThreshold(textureThreshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoBM_setUniquenessRatio(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoBM> * self1 = 0;
    if (!pyopencv_StereoBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoBM' or its derivative)");
    Ptr<cv::StereoBM> _self_ = *(self1);
    int uniquenessRatio=0;

    const char* keywords[] = { "uniquenessRatio", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoBM.setUniquenessRatio", (char**)keywords, &uniquenessRatio) )
    {
        ERRWRAP2(_self_->setUniquenessRatio(uniquenessRatio));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (StereoBM)

static PyGetSetDef pyopencv_StereoBM_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_StereoBM_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoBM_create_static, METH_STATIC), "create([, numDisparities[, blockSize]]) -> retval\n.   @brief Creates StereoBM object\n.   \n.       @param numDisparities the disparity search range. For each pixel algorithm will find the best\n.       disparity from 0 (default minimum disparity) to numDisparities. The search range can then be\n.       shifted by changing the minimum disparity.\n.       @param blockSize the linear size of the blocks compared by the algorithm. The size should be odd\n.       (as the block is centered at the current pixel). Larger block size implies smoother, though less\n.       accurate disparity map. Smaller block size gives more detailed disparity map, but there is higher\n.       chance for algorithm to find a wrong correspondence.\n.   \n.       The function create StereoBM object. You can then call StereoBM::compute() to compute disparity for\n.       a specific stereo pair."},
    {"getPreFilterCap", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoBM_getPreFilterCap, 0), "getPreFilterCap() -> retval\n."},
    {"getPreFilterSize", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoBM_getPreFilterSize, 0), "getPreFilterSize() -> retval\n."},
    {"getPreFilterType", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoBM_getPreFilterType, 0), "getPreFilterType() -> retval\n."},
    {"getROI1", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoBM_getROI1, 0), "getROI1() -> retval\n."},
    {"getROI2", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoBM_getROI2, 0), "getROI2() -> retval\n."},
    {"getSmallerBlockSize", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoBM_getSmallerBlockSize, 0), "getSmallerBlockSize() -> retval\n."},
    {"getTextureThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoBM_getTextureThreshold, 0), "getTextureThreshold() -> retval\n."},
    {"getUniquenessRatio", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoBM_getUniquenessRatio, 0), "getUniquenessRatio() -> retval\n."},
    {"setPreFilterCap", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoBM_setPreFilterCap, 0), "setPreFilterCap(preFilterCap) -> None\n."},
    {"setPreFilterSize", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoBM_setPreFilterSize, 0), "setPreFilterSize(preFilterSize) -> None\n."},
    {"setPreFilterType", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoBM_setPreFilterType, 0), "setPreFilterType(preFilterType) -> None\n."},
    {"setROI1", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoBM_setROI1, 0), "setROI1(roi1) -> None\n."},
    {"setROI2", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoBM_setROI2, 0), "setROI2(roi2) -> None\n."},
    {"setSmallerBlockSize", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoBM_setSmallerBlockSize, 0), "setSmallerBlockSize(blockSize) -> None\n."},
    {"setTextureThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoBM_setTextureThreshold, 0), "setTextureThreshold(textureThreshold) -> None\n."},
    {"setUniquenessRatio", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoBM_setUniquenessRatio, 0), "setUniquenessRatio(uniquenessRatio) -> None\n."},

    {NULL,          NULL}
};

// Converter (StereoBM)

template<>
struct PyOpenCV_Converter< Ptr<cv::StereoBM> >
{
    static PyObject* from(const Ptr<cv::StereoBM>& r)
    {
        return pyopencv_StereoBM_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::StereoBM>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::StereoBM> * dst_;
        if (pyopencv_StereoBM_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::StereoBM> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// StereoMatcher (Generic)
//================================================================================

// GetSet (StereoMatcher)



// Methods (StereoMatcher)

static PyObject* pyopencv_cv_StereoMatcher_compute(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoMatcher> * self1 = 0;
    if (!pyopencv_StereoMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    Ptr<cv::StereoMatcher> _self_ = *(self1);
    {
    PyObject* pyobj_left = NULL;
    Mat left;
    PyObject* pyobj_right = NULL;
    Mat right;
    PyObject* pyobj_disparity = NULL;
    Mat disparity;

    const char* keywords[] = { "left", "right", "disparity", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:StereoMatcher.compute", (char**)keywords, &pyobj_left, &pyobj_right, &pyobj_disparity) &&
        pyopencv_to(pyobj_left, left, ArgInfo("left", 0)) &&
        pyopencv_to(pyobj_right, right, ArgInfo("right", 0)) &&
        pyopencv_to(pyobj_disparity, disparity, ArgInfo("disparity", 1)) )
    {
        ERRWRAP2(_self_->compute(left, right, disparity));
        return pyopencv_from(disparity);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_left = NULL;
    UMat left;
    PyObject* pyobj_right = NULL;
    UMat right;
    PyObject* pyobj_disparity = NULL;
    UMat disparity;

    const char* keywords[] = { "left", "right", "disparity", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:StereoMatcher.compute", (char**)keywords, &pyobj_left, &pyobj_right, &pyobj_disparity) &&
        pyopencv_to(pyobj_left, left, ArgInfo("left", 0)) &&
        pyopencv_to(pyobj_right, right, ArgInfo("right", 0)) &&
        pyopencv_to(pyobj_disparity, disparity, ArgInfo("disparity", 1)) )
    {
        ERRWRAP2(_self_->compute(left, right, disparity));
        return pyopencv_from(disparity);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_getBlockSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoMatcher> * self1 = 0;
    if (!pyopencv_StereoMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    Ptr<cv::StereoMatcher> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getBlockSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_getDisp12MaxDiff(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoMatcher> * self1 = 0;
    if (!pyopencv_StereoMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    Ptr<cv::StereoMatcher> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDisp12MaxDiff());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_getMinDisparity(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoMatcher> * self1 = 0;
    if (!pyopencv_StereoMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    Ptr<cv::StereoMatcher> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMinDisparity());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_getNumDisparities(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoMatcher> * self1 = 0;
    if (!pyopencv_StereoMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    Ptr<cv::StereoMatcher> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNumDisparities());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_getSpeckleRange(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoMatcher> * self1 = 0;
    if (!pyopencv_StereoMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    Ptr<cv::StereoMatcher> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSpeckleRange());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_getSpeckleWindowSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoMatcher> * self1 = 0;
    if (!pyopencv_StereoMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    Ptr<cv::StereoMatcher> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSpeckleWindowSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_setBlockSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoMatcher> * self1 = 0;
    if (!pyopencv_StereoMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    Ptr<cv::StereoMatcher> _self_ = *(self1);
    int blockSize=0;

    const char* keywords[] = { "blockSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoMatcher.setBlockSize", (char**)keywords, &blockSize) )
    {
        ERRWRAP2(_self_->setBlockSize(blockSize));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_setDisp12MaxDiff(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoMatcher> * self1 = 0;
    if (!pyopencv_StereoMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    Ptr<cv::StereoMatcher> _self_ = *(self1);
    int disp12MaxDiff=0;

    const char* keywords[] = { "disp12MaxDiff", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoMatcher.setDisp12MaxDiff", (char**)keywords, &disp12MaxDiff) )
    {
        ERRWRAP2(_self_->setDisp12MaxDiff(disp12MaxDiff));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_setMinDisparity(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoMatcher> * self1 = 0;
    if (!pyopencv_StereoMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    Ptr<cv::StereoMatcher> _self_ = *(self1);
    int minDisparity=0;

    const char* keywords[] = { "minDisparity", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoMatcher.setMinDisparity", (char**)keywords, &minDisparity) )
    {
        ERRWRAP2(_self_->setMinDisparity(minDisparity));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_setNumDisparities(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoMatcher> * self1 = 0;
    if (!pyopencv_StereoMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    Ptr<cv::StereoMatcher> _self_ = *(self1);
    int numDisparities=0;

    const char* keywords[] = { "numDisparities", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoMatcher.setNumDisparities", (char**)keywords, &numDisparities) )
    {
        ERRWRAP2(_self_->setNumDisparities(numDisparities));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_setSpeckleRange(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoMatcher> * self1 = 0;
    if (!pyopencv_StereoMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    Ptr<cv::StereoMatcher> _self_ = *(self1);
    int speckleRange=0;

    const char* keywords[] = { "speckleRange", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoMatcher.setSpeckleRange", (char**)keywords, &speckleRange) )
    {
        ERRWRAP2(_self_->setSpeckleRange(speckleRange));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoMatcher_setSpeckleWindowSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoMatcher> * self1 = 0;
    if (!pyopencv_StereoMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoMatcher' or its derivative)");
    Ptr<cv::StereoMatcher> _self_ = *(self1);
    int speckleWindowSize=0;

    const char* keywords[] = { "speckleWindowSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoMatcher.setSpeckleWindowSize", (char**)keywords, &speckleWindowSize) )
    {
        ERRWRAP2(_self_->setSpeckleWindowSize(speckleWindowSize));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (StereoMatcher)

static PyGetSetDef pyopencv_StereoMatcher_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_StereoMatcher_methods[] =
{
    {"compute", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoMatcher_compute, 0), "compute(left, right[, disparity]) -> disparity\n.   @brief Computes disparity map for the specified stereo pair\n.   \n.       @param left Left 8-bit single-channel image.\n.       @param right Right image of the same size and the same type as the left one.\n.       @param disparity Output disparity map. It has the same size as the input images. Some algorithms,\n.       like StereoBM or StereoSGBM compute 16-bit fixed-point disparity map (where each disparity value\n.       has 4 fractional bits), whereas other algorithms output 32-bit floating-point disparity map."},
    {"getBlockSize", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoMatcher_getBlockSize, 0), "getBlockSize() -> retval\n."},
    {"getDisp12MaxDiff", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoMatcher_getDisp12MaxDiff, 0), "getDisp12MaxDiff() -> retval\n."},
    {"getMinDisparity", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoMatcher_getMinDisparity, 0), "getMinDisparity() -> retval\n."},
    {"getNumDisparities", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoMatcher_getNumDisparities, 0), "getNumDisparities() -> retval\n."},
    {"getSpeckleRange", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoMatcher_getSpeckleRange, 0), "getSpeckleRange() -> retval\n."},
    {"getSpeckleWindowSize", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoMatcher_getSpeckleWindowSize, 0), "getSpeckleWindowSize() -> retval\n."},
    {"setBlockSize", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoMatcher_setBlockSize, 0), "setBlockSize(blockSize) -> None\n."},
    {"setDisp12MaxDiff", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoMatcher_setDisp12MaxDiff, 0), "setDisp12MaxDiff(disp12MaxDiff) -> None\n."},
    {"setMinDisparity", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoMatcher_setMinDisparity, 0), "setMinDisparity(minDisparity) -> None\n."},
    {"setNumDisparities", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoMatcher_setNumDisparities, 0), "setNumDisparities(numDisparities) -> None\n."},
    {"setSpeckleRange", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoMatcher_setSpeckleRange, 0), "setSpeckleRange(speckleRange) -> None\n."},
    {"setSpeckleWindowSize", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoMatcher_setSpeckleWindowSize, 0), "setSpeckleWindowSize(speckleWindowSize) -> None\n."},

    {NULL,          NULL}
};

// Converter (StereoMatcher)

template<>
struct PyOpenCV_Converter< Ptr<cv::StereoMatcher> >
{
    static PyObject* from(const Ptr<cv::StereoMatcher>& r)
    {
        return pyopencv_StereoMatcher_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::StereoMatcher>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::StereoMatcher> * dst_;
        if (pyopencv_StereoMatcher_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::StereoMatcher> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// StereoSGBM (Generic)
//================================================================================

// GetSet (StereoSGBM)



// Methods (StereoSGBM)

static PyObject* pyopencv_cv_StereoSGBM_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    int minDisparity=0;
    int numDisparities=16;
    int blockSize=3;
    int P1=0;
    int P2=0;
    int disp12MaxDiff=0;
    int preFilterCap=0;
    int uniquenessRatio=0;
    int speckleWindowSize=0;
    int speckleRange=0;
    int mode=StereoSGBM::MODE_SGBM;
    Ptr<StereoSGBM> retval;

    const char* keywords[] = { "minDisparity", "numDisparities", "blockSize", "P1", "P2", "disp12MaxDiff", "preFilterCap", "uniquenessRatio", "speckleWindowSize", "speckleRange", "mode", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|iiiiiiiiiii:StereoSGBM.create", (char**)keywords, &minDisparity, &numDisparities, &blockSize, &P1, &P2, &disp12MaxDiff, &preFilterCap, &uniquenessRatio, &speckleWindowSize, &speckleRange, &mode) )
    {
        ERRWRAP2(retval = cv::StereoSGBM::create(minDisparity, numDisparities, blockSize, P1, P2, disp12MaxDiff, preFilterCap, uniquenessRatio, speckleWindowSize, speckleRange, mode));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoSGBM_getMode(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoSGBM> * self1 = 0;
    if (!pyopencv_StereoSGBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    Ptr<cv::StereoSGBM> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMode());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoSGBM_getP1(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoSGBM> * self1 = 0;
    if (!pyopencv_StereoSGBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    Ptr<cv::StereoSGBM> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getP1());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoSGBM_getP2(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoSGBM> * self1 = 0;
    if (!pyopencv_StereoSGBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    Ptr<cv::StereoSGBM> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getP2());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoSGBM_getPreFilterCap(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoSGBM> * self1 = 0;
    if (!pyopencv_StereoSGBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    Ptr<cv::StereoSGBM> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPreFilterCap());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoSGBM_getUniquenessRatio(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoSGBM> * self1 = 0;
    if (!pyopencv_StereoSGBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    Ptr<cv::StereoSGBM> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getUniquenessRatio());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoSGBM_setMode(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoSGBM> * self1 = 0;
    if (!pyopencv_StereoSGBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    Ptr<cv::StereoSGBM> _self_ = *(self1);
    int mode=0;

    const char* keywords[] = { "mode", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoSGBM.setMode", (char**)keywords, &mode) )
    {
        ERRWRAP2(_self_->setMode(mode));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoSGBM_setP1(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoSGBM> * self1 = 0;
    if (!pyopencv_StereoSGBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    Ptr<cv::StereoSGBM> _self_ = *(self1);
    int P1=0;

    const char* keywords[] = { "P1", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoSGBM.setP1", (char**)keywords, &P1) )
    {
        ERRWRAP2(_self_->setP1(P1));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoSGBM_setP2(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoSGBM> * self1 = 0;
    if (!pyopencv_StereoSGBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    Ptr<cv::StereoSGBM> _self_ = *(self1);
    int P2=0;

    const char* keywords[] = { "P2", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoSGBM.setP2", (char**)keywords, &P2) )
    {
        ERRWRAP2(_self_->setP2(P2));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoSGBM_setPreFilterCap(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoSGBM> * self1 = 0;
    if (!pyopencv_StereoSGBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    Ptr<cv::StereoSGBM> _self_ = *(self1);
    int preFilterCap=0;

    const char* keywords[] = { "preFilterCap", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoSGBM.setPreFilterCap", (char**)keywords, &preFilterCap) )
    {
        ERRWRAP2(_self_->setPreFilterCap(preFilterCap));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_StereoSGBM_setUniquenessRatio(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::StereoSGBM> * self1 = 0;
    if (!pyopencv_StereoSGBM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'StereoSGBM' or its derivative)");
    Ptr<cv::StereoSGBM> _self_ = *(self1);
    int uniquenessRatio=0;

    const char* keywords[] = { "uniquenessRatio", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:StereoSGBM.setUniquenessRatio", (char**)keywords, &uniquenessRatio) )
    {
        ERRWRAP2(_self_->setUniquenessRatio(uniquenessRatio));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (StereoSGBM)

static PyGetSetDef pyopencv_StereoSGBM_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_StereoSGBM_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoSGBM_create_static, METH_STATIC), "create([, minDisparity[, numDisparities[, blockSize[, P1[, P2[, disp12MaxDiff[, preFilterCap[, uniquenessRatio[, speckleWindowSize[, speckleRange[, mode]]]]]]]]]]]) -> retval\n.   @brief Creates StereoSGBM object\n.   \n.       @param minDisparity Minimum possible disparity value. Normally, it is zero but sometimes\n.       rectification algorithms can shift images, so this parameter needs to be adjusted accordingly.\n.       @param numDisparities Maximum disparity minus minimum disparity. The value is always greater than\n.       zero. In the current implementation, this parameter must be divisible by 16.\n.       @param blockSize Matched block size. It must be an odd number \\>=1 . Normally, it should be\n.       somewhere in the 3..11 range.\n.       @param P1 The first parameter controlling the disparity smoothness. See below.\n.       @param P2 The second parameter controlling the disparity smoothness. The larger the values are,\n.       the smoother the disparity is. P1 is the penalty on the disparity change by plus or minus 1\n.       between neighbor pixels. P2 is the penalty on the disparity change by more than 1 between neighbor\n.       pixels. The algorithm requires P2 \\> P1 . See stereo_match.cpp sample where some reasonably good\n.       P1 and P2 values are shown (like 8\\*number_of_image_channels\\*SADWindowSize\\*SADWindowSize and\n.       32\\*number_of_image_channels\\*SADWindowSize\\*SADWindowSize , respectively).\n.       @param disp12MaxDiff Maximum allowed difference (in integer pixel units) in the left-right\n.       disparity check. Set it to a non-positive value to disable the check.\n.       @param preFilterCap Truncation value for the prefiltered image pixels. The algorithm first\n.       computes x-derivative at each pixel and clips its value by [-preFilterCap, preFilterCap] interval.\n.       The result values are passed to the Birchfield-Tomasi pixel cost function.\n.       @param uniquenessRatio Margin in percentage by which the best (minimum) computed cost function\n.       value should \"win\" the second best value to consider the found match correct. Normally, a value\n.       within the 5-15 range is good enough.\n.       @param speckleWindowSize Maximum size of smooth disparity regions to consider their noise speckles\n.       and invalidate. Set it to 0 to disable speckle filtering. Otherwise, set it somewhere in the\n.       50-200 range.\n.       @param speckleRange Maximum disparity variation within each connected component. If you do speckle\n.       filtering, set the parameter to a positive value, it will be implicitly multiplied by 16.\n.       Normally, 1 or 2 is good enough.\n.       @param mode Set it to StereoSGBM::MODE_HH to run the full-scale two-pass dynamic programming\n.       algorithm. It will consume O(W\\*H\\*numDisparities) bytes, which is large for 640x480 stereo and\n.       huge for HD-size pictures. By default, it is set to false .\n.   \n.       The first constructor initializes StereoSGBM with all the default parameters. So, you only have to\n.       set StereoSGBM::numDisparities at minimum. The second constructor enables you to set each parameter\n.       to a custom value."},
    {"getMode", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoSGBM_getMode, 0), "getMode() -> retval\n."},
    {"getP1", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoSGBM_getP1, 0), "getP1() -> retval\n."},
    {"getP2", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoSGBM_getP2, 0), "getP2() -> retval\n."},
    {"getPreFilterCap", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoSGBM_getPreFilterCap, 0), "getPreFilterCap() -> retval\n."},
    {"getUniquenessRatio", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoSGBM_getUniquenessRatio, 0), "getUniquenessRatio() -> retval\n."},
    {"setMode", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoSGBM_setMode, 0), "setMode(mode) -> None\n."},
    {"setP1", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoSGBM_setP1, 0), "setP1(P1) -> None\n."},
    {"setP2", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoSGBM_setP2, 0), "setP2(P2) -> None\n."},
    {"setPreFilterCap", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoSGBM_setPreFilterCap, 0), "setPreFilterCap(preFilterCap) -> None\n."},
    {"setUniquenessRatio", CV_PY_FN_WITH_KW_(pyopencv_cv_StereoSGBM_setUniquenessRatio, 0), "setUniquenessRatio(uniquenessRatio) -> None\n."},

    {NULL,          NULL}
};

// Converter (StereoSGBM)

template<>
struct PyOpenCV_Converter< Ptr<cv::StereoSGBM> >
{
    static PyObject* from(const Ptr<cv::StereoSGBM>& r)
    {
        return pyopencv_StereoSGBM_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::StereoSGBM>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::StereoSGBM> * dst_;
        if (pyopencv_StereoSGBM_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::StereoSGBM> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// Subdiv2D (Generic)
//================================================================================

// GetSet (Subdiv2D)



// Methods (Subdiv2D)

static int pyopencv_cv_Subdiv2D_Subdiv2D(pyopencv_Subdiv2D_t* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    {

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        new (&(self->v)) Ptr<cv::Subdiv2D>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::Subdiv2D()));
        return 0;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_rect = NULL;
    Rect rect;

    const char* keywords[] = { "rect", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D", (char**)keywords, &pyobj_rect) &&
        pyopencv_to(pyobj_rect, rect, ArgInfo("rect", 0)) )
    {
        new (&(self->v)) Ptr<cv::Subdiv2D>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::Subdiv2D(rect)));
        return 0;
    }
    }

    return -1;
}

static PyObject* pyopencv_cv_Subdiv2D_edgeDst(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    int edge=0;
    Point2f dstpt;
    int retval;

    const char* keywords[] = { "edge", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:Subdiv2D.edgeDst", (char**)keywords, &edge) )
    {
        ERRWRAP2(retval = _self_->edgeDst(edge, &dstpt));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(dstpt));
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_edgeOrg(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    int edge=0;
    Point2f orgpt;
    int retval;

    const char* keywords[] = { "edge", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:Subdiv2D.edgeOrg", (char**)keywords, &edge) )
    {
        ERRWRAP2(retval = _self_->edgeOrg(edge, &orgpt));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(orgpt));
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_findNearest(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    PyObject* pyobj_pt = NULL;
    Point2f pt;
    Point2f nearestPt;
    int retval;

    const char* keywords[] = { "pt", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.findNearest", (char**)keywords, &pyobj_pt) &&
        pyopencv_to(pyobj_pt, pt, ArgInfo("pt", 0)) )
    {
        ERRWRAP2(retval = _self_->findNearest(pt, &nearestPt));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(nearestPt));
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_getEdge(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    int edge=0;
    int nextEdgeType=0;
    int retval;

    const char* keywords[] = { "edge", "nextEdgeType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "ii:Subdiv2D.getEdge", (char**)keywords, &edge, &nextEdgeType) )
    {
        ERRWRAP2(retval = _self_->getEdge(edge, nextEdgeType));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_getEdgeList(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    vector_Vec4f edgeList;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->getEdgeList(edgeList));
        return pyopencv_from(edgeList);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_getLeadingEdgeList(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    vector_int leadingEdgeList;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->getLeadingEdgeList(leadingEdgeList));
        return pyopencv_from(leadingEdgeList);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_getTriangleList(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    vector_Vec6f triangleList;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->getTriangleList(triangleList));
        return pyopencv_from(triangleList);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_getVertex(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    int vertex=0;
    int firstEdge;
    Point2f retval;

    const char* keywords[] = { "vertex", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:Subdiv2D.getVertex", (char**)keywords, &vertex) )
    {
        ERRWRAP2(retval = _self_->getVertex(vertex, &firstEdge));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(firstEdge));
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_getVoronoiFacetList(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    PyObject* pyobj_idx = NULL;
    vector_int idx;
    vector_vector_Point2f facetList;
    vector_Point2f facetCenters;

    const char* keywords[] = { "idx", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.getVoronoiFacetList", (char**)keywords, &pyobj_idx) &&
        pyopencv_to(pyobj_idx, idx, ArgInfo("idx", 0)) )
    {
        ERRWRAP2(_self_->getVoronoiFacetList(idx, facetList, facetCenters));
        return Py_BuildValue("(NN)", pyopencv_from(facetList), pyopencv_from(facetCenters));
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_initDelaunay(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    PyObject* pyobj_rect = NULL;
    Rect rect;

    const char* keywords[] = { "rect", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.initDelaunay", (char**)keywords, &pyobj_rect) &&
        pyopencv_to(pyobj_rect, rect, ArgInfo("rect", 0)) )
    {
        ERRWRAP2(_self_->initDelaunay(rect));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_insert(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    {
    PyObject* pyobj_pt = NULL;
    Point2f pt;
    int retval;

    const char* keywords[] = { "pt", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.insert", (char**)keywords, &pyobj_pt) &&
        pyopencv_to(pyobj_pt, pt, ArgInfo("pt", 0)) )
    {
        ERRWRAP2(retval = _self_->insert(pt));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_ptvec = NULL;
    vector_Point2f ptvec;

    const char* keywords[] = { "ptvec", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.insert", (char**)keywords, &pyobj_ptvec) &&
        pyopencv_to(pyobj_ptvec, ptvec, ArgInfo("ptvec", 0)) )
    {
        ERRWRAP2(_self_->insert(ptvec));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_locate(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    PyObject* pyobj_pt = NULL;
    Point2f pt;
    int edge;
    int vertex;
    int retval;

    const char* keywords[] = { "pt", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:Subdiv2D.locate", (char**)keywords, &pyobj_pt) &&
        pyopencv_to(pyobj_pt, pt, ArgInfo("pt", 0)) )
    {
        ERRWRAP2(retval = _self_->locate(pt, edge, vertex));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(edge), pyopencv_from(vertex));
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_nextEdge(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    int edge=0;
    int retval;

    const char* keywords[] = { "edge", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:Subdiv2D.nextEdge", (char**)keywords, &edge) )
    {
        ERRWRAP2(retval = _self_->nextEdge(edge));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_rotateEdge(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    int edge=0;
    int rotate=0;
    int retval;

    const char* keywords[] = { "edge", "rotate", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "ii:Subdiv2D.rotateEdge", (char**)keywords, &edge, &rotate) )
    {
        ERRWRAP2(retval = _self_->rotateEdge(edge, rotate));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_symEdge(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    int edge=0;
    int retval;

    const char* keywords[] = { "edge", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:Subdiv2D.symEdge", (char**)keywords, &edge) )
    {
        ERRWRAP2(retval = _self_->symEdge(edge));
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (Subdiv2D)

static PyGetSetDef pyopencv_Subdiv2D_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_Subdiv2D_methods[] =
{
    {"edgeDst", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_edgeDst, 0), "edgeDst(edge) -> retval, dstpt\n.   @brief Returns the edge destination.\n.   \n.       @param edge Subdivision edge ID.\n.       @param dstpt Output vertex location.\n.   \n.       @returns vertex ID."},
    {"edgeOrg", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_edgeOrg, 0), "edgeOrg(edge) -> retval, orgpt\n.   @brief Returns the edge origin.\n.   \n.       @param edge Subdivision edge ID.\n.       @param orgpt Output vertex location.\n.   \n.       @returns vertex ID."},
    {"findNearest", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_findNearest, 0), "findNearest(pt) -> retval, nearestPt\n.   @brief Finds the subdivision vertex closest to the given point.\n.   \n.       @param pt Input point.\n.       @param nearestPt Output subdivision vertex point.\n.   \n.       The function is another function that locates the input point within the subdivision. It finds the\n.       subdivision vertex that is the closest to the input point. It is not necessarily one of vertices\n.       of the facet containing the input point, though the facet (located using locate() ) is used as a\n.       starting point.\n.   \n.       @returns vertex ID."},
    {"getEdge", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_getEdge, 0), "getEdge(edge, nextEdgeType) -> retval\n.   @brief Returns one of the edges related to the given edge.\n.   \n.       @param edge Subdivision edge ID.\n.       @param nextEdgeType Parameter specifying which of the related edges to return.\n.       The following values are possible:\n.       -   NEXT_AROUND_ORG next around the edge origin ( eOnext on the picture below if e is the input edge)\n.       -   NEXT_AROUND_DST next around the edge vertex ( eDnext )\n.       -   PREV_AROUND_ORG previous around the edge origin (reversed eRnext )\n.       -   PREV_AROUND_DST previous around the edge destination (reversed eLnext )\n.       -   NEXT_AROUND_LEFT next around the left facet ( eLnext )\n.       -   NEXT_AROUND_RIGHT next around the right facet ( eRnext )\n.       -   PREV_AROUND_LEFT previous around the left facet (reversed eOnext )\n.       -   PREV_AROUND_RIGHT previous around the right facet (reversed eDnext )\n.   \n.       ![sample output](pics/quadedge.png)\n.   \n.       @returns edge ID related to the input edge."},
    {"getEdgeList", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_getEdgeList, 0), "getEdgeList() -> edgeList\n.   @brief Returns a list of all edges.\n.   \n.       @param edgeList Output vector.\n.   \n.       The function gives each edge as a 4 numbers vector, where each two are one of the edge\n.       vertices. i.e. org_x = v[0], org_y = v[1], dst_x = v[2], dst_y = v[3]."},
    {"getLeadingEdgeList", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_getLeadingEdgeList, 0), "getLeadingEdgeList() -> leadingEdgeList\n.   @brief Returns a list of the leading edge ID connected to each triangle.\n.   \n.       @param leadingEdgeList Output vector.\n.   \n.       The function gives one edge ID for each triangle."},
    {"getTriangleList", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_getTriangleList, 0), "getTriangleList() -> triangleList\n.   @brief Returns a list of all triangles.\n.   \n.       @param triangleList Output vector.\n.   \n.       The function gives each triangle as a 6 numbers vector, where each two are one of the triangle\n.       vertices. i.e. p1_x = v[0], p1_y = v[1], p2_x = v[2], p2_y = v[3], p3_x = v[4], p3_y = v[5]."},
    {"getVertex", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_getVertex, 0), "getVertex(vertex) -> retval, firstEdge\n.   @brief Returns vertex location from vertex ID.\n.   \n.       @param vertex vertex ID.\n.       @param firstEdge Optional. The first edge ID which is connected to the vertex.\n.       @returns vertex (x,y)"},
    {"getVoronoiFacetList", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_getVoronoiFacetList, 0), "getVoronoiFacetList(idx) -> facetList, facetCenters\n.   @brief Returns a list of all Voronoi facets.\n.   \n.       @param idx Vector of vertices IDs to consider. For all vertices you can pass empty vector.\n.       @param facetList Output vector of the Voronoi facets.\n.       @param facetCenters Output vector of the Voronoi facets center points."},
    {"initDelaunay", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_initDelaunay, 0), "initDelaunay(rect) -> None\n.   @brief Creates a new empty Delaunay subdivision\n.   \n.       @param rect Rectangle that includes all of the 2D points that are to be added to the subdivision."},
    {"insert", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_insert, 0), "insert(pt) -> retval\n.   @brief Insert a single point into a Delaunay triangulation.\n.   \n.       @param pt Point to insert.\n.   \n.       The function inserts a single point into a subdivision and modifies the subdivision topology\n.       appropriately. If a point with the same coordinates exists already, no new point is added.\n.       @returns the ID of the point.\n.   \n.       @note If the point is outside of the triangulation specified rect a runtime error is raised.\n\n\n\ninsert(ptvec) -> None\n.   @brief Insert multiple points into a Delaunay triangulation.\n.   \n.       @param ptvec Points to insert.\n.   \n.       The function inserts a vector of points into a subdivision and modifies the subdivision topology\n.       appropriately."},
    {"locate", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_locate, 0), "locate(pt) -> retval, edge, vertex\n.   @brief Returns the location of a point within a Delaunay triangulation.\n.   \n.       @param pt Point to locate.\n.       @param edge Output edge that the point belongs to or is located to the right of it.\n.       @param vertex Optional output vertex the input point coincides with.\n.   \n.       The function locates the input point within the subdivision and gives one of the triangle edges\n.       or vertices.\n.   \n.       @returns an integer which specify one of the following five cases for point location:\n.       -  The point falls into some facet. The function returns #PTLOC_INSIDE and edge will contain one of\n.          edges of the facet.\n.       -  The point falls onto the edge. The function returns #PTLOC_ON_EDGE and edge will contain this edge.\n.       -  The point coincides with one of the subdivision vertices. The function returns #PTLOC_VERTEX and\n.          vertex will contain a pointer to the vertex.\n.       -  The point is outside the subdivision reference rectangle. The function returns #PTLOC_OUTSIDE_RECT\n.          and no pointers are filled.\n.       -  One of input arguments is invalid. A runtime error is raised or, if silent or \"parent\" error\n.          processing mode is selected, #PTLOC_ERROR is returned."},
    {"nextEdge", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_nextEdge, 0), "nextEdge(edge) -> retval\n.   @brief Returns next edge around the edge origin.\n.   \n.       @param edge Subdivision edge ID.\n.   \n.       @returns an integer which is next edge ID around the edge origin: eOnext on the\n.       picture above if e is the input edge)."},
    {"rotateEdge", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_rotateEdge, 0), "rotateEdge(edge, rotate) -> retval\n.   @brief Returns another edge of the same quad-edge.\n.   \n.       @param edge Subdivision edge ID.\n.       @param rotate Parameter specifying which of the edges of the same quad-edge as the input\n.       one to return. The following values are possible:\n.       -   0 - the input edge ( e on the picture below if e is the input edge)\n.       -   1 - the rotated edge ( eRot )\n.       -   2 - the reversed edge (reversed e (in green))\n.       -   3 - the reversed rotated edge (reversed eRot (in green))\n.   \n.       @returns one of the edges ID of the same quad-edge as the input edge."},
    {"symEdge", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_symEdge, 0), "symEdge(edge) -> retval\n."},

    {NULL,          NULL}
};

// Converter (Subdiv2D)

template<>
struct PyOpenCV_Converter< Ptr<cv::Subdiv2D> >
{
    static PyObject* from(const Ptr<cv::Subdiv2D>& r)
    {
        return pyopencv_Subdiv2D_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::Subdiv2D>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::Subdiv2D> * dst_;
        if (pyopencv_Subdiv2D_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::Subdiv2D> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// VideoCapture (Generic)
//================================================================================

// GetSet (VideoCapture)



// Methods (VideoCapture)

static int pyopencv_cv_VideoCapture_VideoCapture(pyopencv_VideoCapture_t* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    {

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        new (&(self->v)) Ptr<cv::VideoCapture>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::VideoCapture()));
        return 0;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_filename = NULL;
    String filename;

    const char* keywords[] = { "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:VideoCapture", (char**)keywords, &pyobj_filename) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        new (&(self->v)) Ptr<cv::VideoCapture>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::VideoCapture(filename)));
        return 0;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_filename = NULL;
    String filename;
    int apiPreference=0;

    const char* keywords[] = { "filename", "apiPreference", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi:VideoCapture", (char**)keywords, &pyobj_filename, &apiPreference) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        new (&(self->v)) Ptr<cv::VideoCapture>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::VideoCapture(filename, apiPreference)));
        return 0;
    }
    }
    PyErr_Clear();

    {
    int index=0;

    const char* keywords[] = { "index", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:VideoCapture", (char**)keywords, &index) )
    {
        new (&(self->v)) Ptr<cv::VideoCapture>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::VideoCapture(index)));
        return 0;
    }
    }
    PyErr_Clear();

    {
    int index=0;
    int apiPreference=0;

    const char* keywords[] = { "index", "apiPreference", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "ii:VideoCapture", (char**)keywords, &index, &apiPreference) )
    {
        new (&(self->v)) Ptr<cv::VideoCapture>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::VideoCapture(index, apiPreference)));
        return 0;
    }
    }

    return -1;
}

static PyObject* pyopencv_cv_VideoCapture_get(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoCapture> * self1 = 0;
    if (!pyopencv_VideoCapture_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    Ptr<cv::VideoCapture> _self_ = *(self1);
    int propId=0;
    double retval;

    const char* keywords[] = { "propId", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:VideoCapture.get", (char**)keywords, &propId) )
    {
        ERRWRAP2(retval = _self_->get(propId));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_getBackendName(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoCapture> * self1 = 0;
    if (!pyopencv_VideoCapture_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    Ptr<cv::VideoCapture> _self_ = *(self1);
    String retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getBackendName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_grab(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoCapture> * self1 = 0;
    if (!pyopencv_VideoCapture_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    Ptr<cv::VideoCapture> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->grab());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_isOpened(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoCapture> * self1 = 0;
    if (!pyopencv_VideoCapture_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    Ptr<cv::VideoCapture> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isOpened());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_open(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoCapture> * self1 = 0;
    if (!pyopencv_VideoCapture_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    Ptr<cv::VideoCapture> _self_ = *(self1);
    {
    PyObject* pyobj_filename = NULL;
    String filename;
    bool retval;

    const char* keywords[] = { "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:VideoCapture.open", (char**)keywords, &pyobj_filename) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(retval = _self_->open(filename));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    int index=0;
    bool retval;

    const char* keywords[] = { "index", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:VideoCapture.open", (char**)keywords, &index) )
    {
        ERRWRAP2(retval = _self_->open(index));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    int cameraNum=0;
    int apiPreference=0;
    bool retval;

    const char* keywords[] = { "cameraNum", "apiPreference", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "ii:VideoCapture.open", (char**)keywords, &cameraNum, &apiPreference) )
    {
        ERRWRAP2(retval = _self_->open(cameraNum, apiPreference));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_filename = NULL;
    String filename;
    int apiPreference=0;
    bool retval;

    const char* keywords[] = { "filename", "apiPreference", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi:VideoCapture.open", (char**)keywords, &pyobj_filename, &apiPreference) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(retval = _self_->open(filename, apiPreference));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_read(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoCapture> * self1 = 0;
    if (!pyopencv_VideoCapture_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    Ptr<cv::VideoCapture> _self_ = *(self1);
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    bool retval;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:VideoCapture.read", (char**)keywords, &pyobj_image) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 1)) )
    {
        ERRWRAP2(retval = _self_->read(image));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(image));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    bool retval;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:VideoCapture.read", (char**)keywords, &pyobj_image) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 1)) )
    {
        ERRWRAP2(retval = _self_->read(image));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(image));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_release(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoCapture> * self1 = 0;
    if (!pyopencv_VideoCapture_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    Ptr<cv::VideoCapture> _self_ = *(self1);

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->release());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_retrieve(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoCapture> * self1 = 0;
    if (!pyopencv_VideoCapture_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    Ptr<cv::VideoCapture> _self_ = *(self1);
    {
    PyObject* pyobj_image = NULL;
    Mat image;
    int flag=0;
    bool retval;

    const char* keywords[] = { "image", "flag", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|Oi:VideoCapture.retrieve", (char**)keywords, &pyobj_image, &flag) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 1)) )
    {
        ERRWRAP2(retval = _self_->retrieve(image, flag));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(image));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    int flag=0;
    bool retval;

    const char* keywords[] = { "image", "flag", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|Oi:VideoCapture.retrieve", (char**)keywords, &pyobj_image, &flag) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 1)) )
    {
        ERRWRAP2(retval = _self_->retrieve(image, flag));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(image));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_set(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoCapture> * self1 = 0;
    if (!pyopencv_VideoCapture_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    Ptr<cv::VideoCapture> _self_ = *(self1);
    int propId=0;
    double value=0;
    bool retval;

    const char* keywords[] = { "propId", "value", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "id:VideoCapture.set", (char**)keywords, &propId, &value) )
    {
        ERRWRAP2(retval = _self_->set(propId, value));
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (VideoCapture)

static PyGetSetDef pyopencv_VideoCapture_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_VideoCapture_methods[] =
{
    {"get", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoCapture_get, 0), "get(propId) -> retval\n.   @brief Returns the specified VideoCapture property\n.   \n.       @param propId Property identifier from cv::VideoCaptureProperties (eg. cv::CAP_PROP_POS_MSEC, cv::CAP_PROP_POS_FRAMES, ...)\n.       or one from @ref videoio_flags_others\n.       @return Value for the specified property. Value 0 is returned when querying a property that is\n.       not supported by the backend used by the VideoCapture instance.\n.   \n.       @note Reading / writing properties involves many layers. Some unexpected result might happens\n.       along this chain.\n.       @code{.txt}\n.       VideoCapture -> API Backend -> Operating System -> Device Driver -> Device Hardware\n.       @endcode\n.       The returned value might be different from what really used by the device or it could be encoded\n.       using device dependent rules (eg. steps or percentage). Effective behaviour depends from device\n.       driver and API Backend"},
    {"getBackendName", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoCapture_getBackendName, 0), "getBackendName() -> retval\n.   @brief Returns used backend API name\n.   \n.        @note Stream should be opened."},
    {"grab", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoCapture_grab, 0), "grab() -> retval\n.   @brief Grabs the next frame from video file or capturing device.\n.   \n.       @return `true` (non-zero) in the case of success.\n.   \n.       The method/function grabs the next frame from video file or camera and returns true (non-zero) in\n.       the case of success.\n.   \n.       The primary use of the function is in multi-camera environments, especially when the cameras do not\n.       have hardware synchronization. That is, you call VideoCapture::grab() for each camera and after that\n.       call the slower method VideoCapture::retrieve() to decode and get frame from each camera. This way\n.       the overhead on demosaicing or motion jpeg decompression etc. is eliminated and the retrieved frames\n.       from different cameras will be closer in time.\n.   \n.       Also, when a connected camera is multi-head (for example, a stereo camera or a Kinect device), the\n.       correct way of retrieving data from it is to call VideoCapture::grab() first and then call\n.       VideoCapture::retrieve() one or more times with different values of the channel parameter.\n.   \n.       @ref tutorial_kinect_openni"},
    {"isOpened", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoCapture_isOpened, 0), "isOpened() -> retval\n.   @brief Returns true if video capturing has been initialized already.\n.   \n.       If the previous call to VideoCapture constructor or VideoCapture::open() succeeded, the method returns\n.       true."},
    {"open", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoCapture_open, 0), "open(filename) -> retval\n.   @brief  Open video file or a capturing device or a IP video stream for video capturing\n.   \n.       @overload\n.   \n.       Parameters are same as the constructor VideoCapture(const String& filename)\n.       @return `true` if the file has been successfully opened\n.   \n.       The method first calls VideoCapture::release to close the already opened file or camera.\n\n\n\nopen(index) -> retval\n.   @brief  Open a camera for video capturing\n.   \n.       @overload\n.   \n.       Parameters are same as the constructor VideoCapture(int index)\n.       @return `true` if the camera has been successfully opened.\n.   \n.       The method first calls VideoCapture::release to close the already opened file or camera.\n\n\n\nopen(cameraNum, apiPreference) -> retval\n.   @brief  Open a camera for video capturing\n.   \n.       @overload\n.   \n.       Parameters are similar as the constructor VideoCapture(int index),except it takes an additional argument apiPreference.\n.       Definitely, is same as open(int index) where `index=cameraNum + apiPreference`\n.       @return `true` if the camera has been successfully opened.\n\n\n\nopen(filename, apiPreference) -> retval\n.   @brief Open video file or a capturing device or a IP video stream for video capturing with API Preference\n.   \n.       @overload\n.   \n.       Parameters are same as the constructor VideoCapture(const String& filename, int apiPreference)\n.       @return `true` if the file has been successfully opened\n.   \n.       The method first calls VideoCapture::release to close the already opened file or camera."},
    {"read", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoCapture_read, 0), "read([, image]) -> retval, image\n.   @brief Grabs, decodes and returns the next video frame.\n.   \n.       @param [out] image the video frame is returned here. If no frames has been grabbed the image will be empty.\n.       @return `false` if no frames has been grabbed\n.   \n.       The method/function combines VideoCapture::grab() and VideoCapture::retrieve() in one call. This is the\n.       most convenient method for reading video files or capturing data from decode and returns the just\n.       grabbed frame. If no frames has been grabbed (camera has been disconnected, or there are no more\n.       frames in video file), the method returns false and the function returns empty image (with %cv::Mat, test it with Mat::empty()).\n.   \n.       @note In @ref videoio_c \"C API\", functions cvRetrieveFrame() and cv.RetrieveFrame() return image stored inside the video\n.       capturing structure. It is not allowed to modify or release the image! You can copy the frame using\n.       cvCloneImage and then do whatever you want with the copy."},
    {"release", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoCapture_release, 0), "release() -> None\n.   @brief Closes video file or capturing device.\n.   \n.       The method is automatically called by subsequent VideoCapture::open and by VideoCapture\n.       destructor.\n.   \n.       The C function also deallocates memory and clears \\*capture pointer."},
    {"retrieve", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoCapture_retrieve, 0), "retrieve([, image[, flag]]) -> retval, image\n.   @brief Decodes and returns the grabbed video frame.\n.   \n.       @param [out] image the video frame is returned here. If no frames has been grabbed the image will be empty.\n.       @param flag it could be a frame index or a driver specific flag\n.       @return `false` if no frames has been grabbed\n.   \n.       The method decodes and returns the just grabbed frame. If no frames has been grabbed\n.       (camera has been disconnected, or there are no more frames in video file), the method returns false\n.       and the function returns an empty image (with %cv::Mat, test it with Mat::empty()).\n.   \n.       @sa read()\n.   \n.       @note In @ref videoio_c \"C API\", functions cvRetrieveFrame() and cv.RetrieveFrame() return image stored inside the video\n.       capturing structure. It is not allowed to modify or release the image! You can copy the frame using\n.       cvCloneImage and then do whatever you want with the copy."},
    {"set", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoCapture_set, 0), "set(propId, value) -> retval\n.   @brief Sets a property in the VideoCapture.\n.   \n.       @param propId Property identifier from cv::VideoCaptureProperties (eg. cv::CAP_PROP_POS_MSEC, cv::CAP_PROP_POS_FRAMES, ...)\n.       or one from @ref videoio_flags_others\n.       @param value Value of the property.\n.       @return `true` if the property is supported by backend used by the VideoCapture instance.\n.       @note Even if it returns `true` this doesn't ensure that the property\n.       value has been accepted by the capture device. See note in VideoCapture::get()"},

    {NULL,          NULL}
};

// Converter (VideoCapture)

template<>
struct PyOpenCV_Converter< Ptr<cv::VideoCapture> >
{
    static PyObject* from(const Ptr<cv::VideoCapture>& r)
    {
        return pyopencv_VideoCapture_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::VideoCapture>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::VideoCapture> * dst_;
        if (pyopencv_VideoCapture_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::VideoCapture> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// VideoWriter (Generic)
//================================================================================

// GetSet (VideoWriter)



// Methods (VideoWriter)

static int pyopencv_cv_VideoWriter_VideoWriter(pyopencv_VideoWriter_t* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    {

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        new (&(self->v)) Ptr<cv::VideoWriter>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::VideoWriter()));
        return 0;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_filename = NULL;
    String filename;
    int fourcc=0;
    double fps=0;
    PyObject* pyobj_frameSize = NULL;
    Size frameSize;
    bool isColor=true;

    const char* keywords[] = { "filename", "fourcc", "fps", "frameSize", "isColor", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OidO|b:VideoWriter", (char**)keywords, &pyobj_filename, &fourcc, &fps, &pyobj_frameSize, &isColor) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to(pyobj_frameSize, frameSize, ArgInfo("frameSize", 0)) )
    {
        new (&(self->v)) Ptr<cv::VideoWriter>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::VideoWriter(filename, fourcc, fps, frameSize, isColor)));
        return 0;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_filename = NULL;
    String filename;
    int apiPreference=0;
    int fourcc=0;
    double fps=0;
    PyObject* pyobj_frameSize = NULL;
    Size frameSize;
    bool isColor=true;

    const char* keywords[] = { "filename", "apiPreference", "fourcc", "fps", "frameSize", "isColor", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiidO|b:VideoWriter", (char**)keywords, &pyobj_filename, &apiPreference, &fourcc, &fps, &pyobj_frameSize, &isColor) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to(pyobj_frameSize, frameSize, ArgInfo("frameSize", 0)) )
    {
        new (&(self->v)) Ptr<cv::VideoWriter>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::VideoWriter(filename, apiPreference, fourcc, fps, frameSize, isColor)));
        return 0;
    }
    }

    return -1;
}

static PyObject* pyopencv_cv_VideoWriter_fourcc_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_c1 = NULL;
    char c1;
    PyObject* pyobj_c2 = NULL;
    char c2;
    PyObject* pyobj_c3 = NULL;
    char c3;
    PyObject* pyobj_c4 = NULL;
    char c4;
    int retval;

    const char* keywords[] = { "c1", "c2", "c3", "c4", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOOO:VideoWriter.fourcc", (char**)keywords, &pyobj_c1, &pyobj_c2, &pyobj_c3, &pyobj_c4) &&
        convert_to_char(pyobj_c1, &c1, ArgInfo("c1", 0)) &&
        convert_to_char(pyobj_c2, &c2, ArgInfo("c2", 0)) &&
        convert_to_char(pyobj_c3, &c3, ArgInfo("c3", 0)) &&
        convert_to_char(pyobj_c4, &c4, ArgInfo("c4", 0)) )
    {
        ERRWRAP2(retval = cv::VideoWriter::fourcc(c1, c2, c3, c4));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoWriter_get(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoWriter> * self1 = 0;
    if (!pyopencv_VideoWriter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    Ptr<cv::VideoWriter> _self_ = *(self1);
    int propId=0;
    double retval;

    const char* keywords[] = { "propId", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:VideoWriter.get", (char**)keywords, &propId) )
    {
        ERRWRAP2(retval = _self_->get(propId));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoWriter_getBackendName(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoWriter> * self1 = 0;
    if (!pyopencv_VideoWriter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    Ptr<cv::VideoWriter> _self_ = *(self1);
    String retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getBackendName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoWriter_isOpened(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoWriter> * self1 = 0;
    if (!pyopencv_VideoWriter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    Ptr<cv::VideoWriter> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isOpened());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoWriter_open(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoWriter> * self1 = 0;
    if (!pyopencv_VideoWriter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    Ptr<cv::VideoWriter> _self_ = *(self1);
    {
    PyObject* pyobj_filename = NULL;
    String filename;
    int fourcc=0;
    double fps=0;
    PyObject* pyobj_frameSize = NULL;
    Size frameSize;
    bool isColor=true;
    bool retval;

    const char* keywords[] = { "filename", "fourcc", "fps", "frameSize", "isColor", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OidO|b:VideoWriter.open", (char**)keywords, &pyobj_filename, &fourcc, &fps, &pyobj_frameSize, &isColor) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to(pyobj_frameSize, frameSize, ArgInfo("frameSize", 0)) )
    {
        ERRWRAP2(retval = _self_->open(filename, fourcc, fps, frameSize, isColor));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_filename = NULL;
    String filename;
    int apiPreference=0;
    int fourcc=0;
    double fps=0;
    PyObject* pyobj_frameSize = NULL;
    Size frameSize;
    bool isColor=true;
    bool retval;

    const char* keywords[] = { "filename", "apiPreference", "fourcc", "fps", "frameSize", "isColor", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiidO|b:VideoWriter.open", (char**)keywords, &pyobj_filename, &apiPreference, &fourcc, &fps, &pyobj_frameSize, &isColor) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to(pyobj_frameSize, frameSize, ArgInfo("frameSize", 0)) )
    {
        ERRWRAP2(retval = _self_->open(filename, apiPreference, fourcc, fps, frameSize, isColor));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoWriter_release(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoWriter> * self1 = 0;
    if (!pyopencv_VideoWriter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    Ptr<cv::VideoWriter> _self_ = *(self1);

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->release());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoWriter_set(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoWriter> * self1 = 0;
    if (!pyopencv_VideoWriter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    Ptr<cv::VideoWriter> _self_ = *(self1);
    int propId=0;
    double value=0;
    bool retval;

    const char* keywords[] = { "propId", "value", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "id:VideoWriter.set", (char**)keywords, &propId, &value) )
    {
        ERRWRAP2(retval = _self_->set(propId, value));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoWriter_write(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoWriter> * self1 = 0;
    if (!pyopencv_VideoWriter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    Ptr<cv::VideoWriter> _self_ = *(self1);
    {
    PyObject* pyobj_image = NULL;
    Mat image;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:VideoWriter.write", (char**)keywords, &pyobj_image) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) )
    {
        ERRWRAP2(_self_->write(image));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_image = NULL;
    Mat image;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:VideoWriter.write", (char**)keywords, &pyobj_image) &&
        pyopencv_to(pyobj_image, image, ArgInfo("image", 0)) )
    {
        ERRWRAP2(_self_->write(image));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}



// Tables (VideoWriter)

static PyGetSetDef pyopencv_VideoWriter_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_VideoWriter_methods[] =
{
    {"fourcc", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoWriter_fourcc_static, METH_STATIC), "fourcc(c1, c2, c3, c4) -> retval\n.   @brief Concatenates 4 chars to a fourcc code\n.   \n.       @return a fourcc code\n.   \n.       This static method constructs the fourcc code of the codec to be used in the constructor\n.       VideoWriter::VideoWriter or VideoWriter::open."},
    {"get", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoWriter_get, 0), "get(propId) -> retval\n.   @brief Returns the specified VideoWriter property\n.   \n.        @param propId Property identifier from cv::VideoWriterProperties (eg. cv::VIDEOWRITER_PROP_QUALITY)\n.        or one of @ref videoio_flags_others\n.   \n.        @return Value for the specified property. Value 0 is returned when querying a property that is\n.        not supported by the backend used by the VideoWriter instance."},
    {"getBackendName", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoWriter_getBackendName, 0), "getBackendName() -> retval\n.   @brief Returns used backend API name\n.   \n.        @note Stream should be opened."},
    {"isOpened", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoWriter_isOpened, 0), "isOpened() -> retval\n.   @brief Returns true if video writer has been successfully initialized."},
    {"open", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoWriter_open, 0), "open(filename, fourcc, fps, frameSize[, isColor]) -> retval\n.   @brief Initializes or reinitializes video writer.\n.   \n.       The method opens video writer. Parameters are the same as in the constructor\n.       VideoWriter::VideoWriter.\n.       @return `true` if video writer has been successfully initialized\n.   \n.       The method first calls VideoWriter::release to close the already opened file.\n\n\n\nopen(filename, apiPreference, fourcc, fps, frameSize[, isColor]) -> retval\n.   @overload"},
    {"release", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoWriter_release, 0), "release() -> None\n.   @brief Closes the video writer.\n.   \n.       The method is automatically called by subsequent VideoWriter::open and by the VideoWriter\n.       destructor."},
    {"set", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoWriter_set, 0), "set(propId, value) -> retval\n.   @brief Sets a property in the VideoWriter.\n.   \n.        @param propId Property identifier from cv::VideoWriterProperties (eg. cv::VIDEOWRITER_PROP_QUALITY)\n.        or one of @ref videoio_flags_others\n.   \n.        @param value Value of the property.\n.        @return  `true` if the property is supported by the backend used by the VideoWriter instance."},
    {"write", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoWriter_write, 0), "write(image) -> None\n.   @brief Writes the next video frame\n.   \n.       @param image The written frame. In general, color images are expected in BGR format.\n.   \n.       The function/method writes the specified image to video file. It must have the same size as has\n.       been specified when opening the video writer."},

    {NULL,          NULL}
};

// Converter (VideoWriter)

template<>
struct PyOpenCV_Converter< Ptr<cv::VideoWriter> >
{
    static PyObject* from(const Ptr<cv::VideoWriter>& r)
    {
        return pyopencv_VideoWriter_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::VideoWriter>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::VideoWriter> * dst_;
        if (pyopencv_VideoWriter_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::VideoWriter> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// flann_Index (Generic)
//================================================================================

// GetSet (flann_Index)



// Methods (flann_Index)

static int pyopencv_cv_flann_flann_Index_Index(pyopencv_flann_Index_t* self, PyObject* args, PyObject* kw)
{
    using namespace cv::flann;

    {

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        new (&(self->v)) Ptr<cv::flann::Index>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::flann::Index()));
        return 0;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_features = NULL;
    Mat features;
    PyObject* pyobj_params = NULL;
    IndexParams params;
    PyObject* pyobj_distType = NULL;
    cvflann_flann_distance_t distType=cvflann::FLANN_DIST_L2;

    const char* keywords[] = { "features", "params", "distType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:Index", (char**)keywords, &pyobj_features, &pyobj_params, &pyobj_distType) &&
        pyopencv_to(pyobj_features, features, ArgInfo("features", 0)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) &&
        pyopencv_to(pyobj_distType, distType, ArgInfo("distType", 0)) )
    {
        new (&(self->v)) Ptr<cv::flann::Index>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::flann::Index(features, params, distType)));
        return 0;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_features = NULL;
    UMat features;
    PyObject* pyobj_params = NULL;
    IndexParams params;
    PyObject* pyobj_distType = NULL;
    cvflann_flann_distance_t distType=cvflann::FLANN_DIST_L2;

    const char* keywords[] = { "features", "params", "distType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:Index", (char**)keywords, &pyobj_features, &pyobj_params, &pyobj_distType) &&
        pyopencv_to(pyobj_features, features, ArgInfo("features", 0)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) &&
        pyopencv_to(pyobj_distType, distType, ArgInfo("distType", 0)) )
    {
        new (&(self->v)) Ptr<cv::flann::Index>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::flann::Index(features, params, distType)));
        return 0;
    }
    }

    return -1;
}

static PyObject* pyopencv_cv_flann_flann_Index_build(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::flann;


    Ptr<cv::flann::Index> * self1 = 0;
    if (!pyopencv_flann_Index_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    Ptr<cv::flann::Index> _self_ = *(self1);
    {
    PyObject* pyobj_features = NULL;
    Mat features;
    PyObject* pyobj_params = NULL;
    IndexParams params;
    PyObject* pyobj_distType = NULL;
    cvflann_flann_distance_t distType=cvflann::FLANN_DIST_L2;

    const char* keywords[] = { "features", "params", "distType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:flann_Index.build", (char**)keywords, &pyobj_features, &pyobj_params, &pyobj_distType) &&
        pyopencv_to(pyobj_features, features, ArgInfo("features", 0)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) &&
        pyopencv_to(pyobj_distType, distType, ArgInfo("distType", 0)) )
    {
        ERRWRAP2(_self_->build(features, params, distType));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_features = NULL;
    UMat features;
    PyObject* pyobj_params = NULL;
    IndexParams params;
    PyObject* pyobj_distType = NULL;
    cvflann_flann_distance_t distType=cvflann::FLANN_DIST_L2;

    const char* keywords[] = { "features", "params", "distType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|O:flann_Index.build", (char**)keywords, &pyobj_features, &pyobj_params, &pyobj_distType) &&
        pyopencv_to(pyobj_features, features, ArgInfo("features", 0)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) &&
        pyopencv_to(pyobj_distType, distType, ArgInfo("distType", 0)) )
    {
        ERRWRAP2(_self_->build(features, params, distType));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_flann_flann_Index_getAlgorithm(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::flann;


    Ptr<cv::flann::Index> * self1 = 0;
    if (!pyopencv_flann_Index_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    Ptr<cv::flann::Index> _self_ = *(self1);
    cvflann::flann_algorithm_t retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAlgorithm());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_flann_flann_Index_getDistance(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::flann;


    Ptr<cv::flann::Index> * self1 = 0;
    if (!pyopencv_flann_Index_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    Ptr<cv::flann::Index> _self_ = *(self1);
    cvflann::flann_distance_t retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDistance());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_flann_flann_Index_knnSearch(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::flann;


    Ptr<cv::flann::Index> * self1 = 0;
    if (!pyopencv_flann_Index_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    Ptr<cv::flann::Index> _self_ = *(self1);
    {
    PyObject* pyobj_query = NULL;
    Mat query;
    PyObject* pyobj_indices = NULL;
    Mat indices;
    PyObject* pyobj_dists = NULL;
    Mat dists;
    int knn=0;
    PyObject* pyobj_params = NULL;
    SearchParams params;

    const char* keywords[] = { "query", "knn", "indices", "dists", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|OOO:flann_Index.knnSearch", (char**)keywords, &pyobj_query, &knn, &pyobj_indices, &pyobj_dists, &pyobj_params) &&
        pyopencv_to(pyobj_query, query, ArgInfo("query", 0)) &&
        pyopencv_to(pyobj_indices, indices, ArgInfo("indices", 1)) &&
        pyopencv_to(pyobj_dists, dists, ArgInfo("dists", 1)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(_self_->knnSearch(query, indices, dists, knn, params));
        return Py_BuildValue("(NN)", pyopencv_from(indices), pyopencv_from(dists));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_query = NULL;
    UMat query;
    PyObject* pyobj_indices = NULL;
    UMat indices;
    PyObject* pyobj_dists = NULL;
    UMat dists;
    int knn=0;
    PyObject* pyobj_params = NULL;
    SearchParams params;

    const char* keywords[] = { "query", "knn", "indices", "dists", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|OOO:flann_Index.knnSearch", (char**)keywords, &pyobj_query, &knn, &pyobj_indices, &pyobj_dists, &pyobj_params) &&
        pyopencv_to(pyobj_query, query, ArgInfo("query", 0)) &&
        pyopencv_to(pyobj_indices, indices, ArgInfo("indices", 1)) &&
        pyopencv_to(pyobj_dists, dists, ArgInfo("dists", 1)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(_self_->knnSearch(query, indices, dists, knn, params));
        return Py_BuildValue("(NN)", pyopencv_from(indices), pyopencv_from(dists));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_flann_flann_Index_load(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::flann;


    Ptr<cv::flann::Index> * self1 = 0;
    if (!pyopencv_flann_Index_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    Ptr<cv::flann::Index> _self_ = *(self1);
    {
    PyObject* pyobj_features = NULL;
    Mat features;
    PyObject* pyobj_filename = NULL;
    String filename;
    bool retval;

    const char* keywords[] = { "features", "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:flann_Index.load", (char**)keywords, &pyobj_features, &pyobj_filename) &&
        pyopencv_to(pyobj_features, features, ArgInfo("features", 0)) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(retval = _self_->load(features, filename));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_features = NULL;
    UMat features;
    PyObject* pyobj_filename = NULL;
    String filename;
    bool retval;

    const char* keywords[] = { "features", "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:flann_Index.load", (char**)keywords, &pyobj_features, &pyobj_filename) &&
        pyopencv_to(pyobj_features, features, ArgInfo("features", 0)) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(retval = _self_->load(features, filename));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_flann_flann_Index_radiusSearch(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::flann;


    Ptr<cv::flann::Index> * self1 = 0;
    if (!pyopencv_flann_Index_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    Ptr<cv::flann::Index> _self_ = *(self1);
    {
    PyObject* pyobj_query = NULL;
    Mat query;
    PyObject* pyobj_indices = NULL;
    Mat indices;
    PyObject* pyobj_dists = NULL;
    Mat dists;
    double radius=0;
    int maxResults=0;
    PyObject* pyobj_params = NULL;
    SearchParams params;
    int retval;

    const char* keywords[] = { "query", "radius", "maxResults", "indices", "dists", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Odi|OOO:flann_Index.radiusSearch", (char**)keywords, &pyobj_query, &radius, &maxResults, &pyobj_indices, &pyobj_dists, &pyobj_params) &&
        pyopencv_to(pyobj_query, query, ArgInfo("query", 0)) &&
        pyopencv_to(pyobj_indices, indices, ArgInfo("indices", 1)) &&
        pyopencv_to(pyobj_dists, dists, ArgInfo("dists", 1)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(retval = _self_->radiusSearch(query, indices, dists, radius, maxResults, params));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(indices), pyopencv_from(dists));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_query = NULL;
    UMat query;
    PyObject* pyobj_indices = NULL;
    UMat indices;
    PyObject* pyobj_dists = NULL;
    UMat dists;
    double radius=0;
    int maxResults=0;
    PyObject* pyobj_params = NULL;
    SearchParams params;
    int retval;

    const char* keywords[] = { "query", "radius", "maxResults", "indices", "dists", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Odi|OOO:flann_Index.radiusSearch", (char**)keywords, &pyobj_query, &radius, &maxResults, &pyobj_indices, &pyobj_dists, &pyobj_params) &&
        pyopencv_to(pyobj_query, query, ArgInfo("query", 0)) &&
        pyopencv_to(pyobj_indices, indices, ArgInfo("indices", 1)) &&
        pyopencv_to(pyobj_dists, dists, ArgInfo("dists", 1)) &&
        pyopencv_to(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(retval = _self_->radiusSearch(query, indices, dists, radius, maxResults, params));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(indices), pyopencv_from(dists));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_flann_flann_Index_release(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::flann;


    Ptr<cv::flann::Index> * self1 = 0;
    if (!pyopencv_flann_Index_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    Ptr<cv::flann::Index> _self_ = *(self1);

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->release());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_flann_flann_Index_save(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::flann;


    Ptr<cv::flann::Index> * self1 = 0;
    if (!pyopencv_flann_Index_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    Ptr<cv::flann::Index> _self_ = *(self1);
    PyObject* pyobj_filename = NULL;
    String filename;

    const char* keywords[] = { "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:flann_Index.save", (char**)keywords, &pyobj_filename) &&
        pyopencv_to(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(_self_->save(filename));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (flann_Index)

static PyGetSetDef pyopencv_flann_Index_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_flann_Index_methods[] =
{
    {"build", CV_PY_FN_WITH_KW_(pyopencv_cv_flann_flann_Index_build, 0), "build(features, params[, distType]) -> None\n."},
    {"getAlgorithm", CV_PY_FN_WITH_KW_(pyopencv_cv_flann_flann_Index_getAlgorithm, 0), "getAlgorithm() -> retval\n."},
    {"getDistance", CV_PY_FN_WITH_KW_(pyopencv_cv_flann_flann_Index_getDistance, 0), "getDistance() -> retval\n."},
    {"knnSearch", CV_PY_FN_WITH_KW_(pyopencv_cv_flann_flann_Index_knnSearch, 0), "knnSearch(query, knn[, indices[, dists[, params]]]) -> indices, dists\n."},
    {"load", CV_PY_FN_WITH_KW_(pyopencv_cv_flann_flann_Index_load, 0), "load(features, filename) -> retval\n."},
    {"radiusSearch", CV_PY_FN_WITH_KW_(pyopencv_cv_flann_flann_Index_radiusSearch, 0), "radiusSearch(query, radius, maxResults[, indices[, dists[, params]]]) -> retval, indices, dists\n."},
    {"release", CV_PY_FN_WITH_KW_(pyopencv_cv_flann_flann_Index_release, 0), "release() -> None\n."},
    {"save", CV_PY_FN_WITH_KW_(pyopencv_cv_flann_flann_Index_save, 0), "save(filename) -> None\n."},

    {NULL,          NULL}
};

// Converter (flann_Index)

template<>
struct PyOpenCV_Converter< Ptr<cv::flann::Index> >
{
    static PyObject* from(const Ptr<cv::flann::Index>& r)
    {
        return pyopencv_flann_Index_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::flann::Index>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::flann::Index> * dst_;
        if (pyopencv_flann_Index_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::flann::Index> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// ml_ANN_MLP (Generic)
//================================================================================

// GetSet (ml_ANN_MLP)



// Methods (ml_ANN_MLP)

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    Ptr<ANN_MLP> retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv::ml::ANN_MLP::create());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getAnnealCoolingRatio(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAnnealCoolingRatio());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getAnnealFinalT(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAnnealFinalT());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getAnnealInitialT(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAnnealInitialT());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getAnnealItePerStep(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAnnealItePerStep());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getBackpropMomentumScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getBackpropMomentumScale());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getBackpropWeightScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getBackpropWeightScale());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getLayerSizes(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    cv::Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getLayerSizes());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getRpropDW0(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getRpropDW0());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getRpropDWMax(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getRpropDWMax());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getRpropDWMin(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getRpropDWMin());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getRpropDWMinus(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getRpropDWMinus());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getRpropDWPlus(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getRpropDWPlus());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    TermCriteria retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTermCriteria());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getTrainMethod(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTrainMethod());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_getWeights(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    int layerIdx=0;
    Mat retval;

    const char* keywords[] = { "layerIdx", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_ANN_MLP.getWeights", (char**)keywords, &layerIdx) )
    {
        ERRWRAP2(retval = _self_->getWeights(layerIdx));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_load_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    PyObject* pyobj_filepath = NULL;
    String filepath;
    Ptr<ANN_MLP> retval;

    const char* keywords[] = { "filepath", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_ANN_MLP.load", (char**)keywords, &pyobj_filepath) &&
        pyopencv_to(pyobj_filepath, filepath, ArgInfo("filepath", 0)) )
    {
        ERRWRAP2(retval = cv::ml::ANN_MLP::load(filepath));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setActivationFunction(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    int type=0;
    double param1=0;
    double param2=0;

    const char* keywords[] = { "type", "param1", "param2", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i|dd:ml_ANN_MLP.setActivationFunction", (char**)keywords, &type, &param1, &param2) )
    {
        ERRWRAP2(_self_->setActivationFunction(type, param1, param2));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setAnnealCoolingRatio(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_ANN_MLP.setAnnealCoolingRatio", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setAnnealCoolingRatio(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setAnnealFinalT(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_ANN_MLP.setAnnealFinalT", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setAnnealFinalT(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setAnnealInitialT(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_ANN_MLP.setAnnealInitialT", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setAnnealInitialT(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setAnnealItePerStep(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_ANN_MLP.setAnnealItePerStep", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setAnnealItePerStep(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setBackpropMomentumScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_ANN_MLP.setBackpropMomentumScale", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setBackpropMomentumScale(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setBackpropWeightScale(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_ANN_MLP.setBackpropWeightScale", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setBackpropWeightScale(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setLayerSizes(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    {
    PyObject* pyobj__layer_sizes = NULL;
    Mat _layer_sizes;

    const char* keywords[] = { "_layer_sizes", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_ANN_MLP.setLayerSizes", (char**)keywords, &pyobj__layer_sizes) &&
        pyopencv_to(pyobj__layer_sizes, _layer_sizes, ArgInfo("_layer_sizes", 0)) )
    {
        ERRWRAP2(_self_->setLayerSizes(_layer_sizes));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj__layer_sizes = NULL;
    UMat _layer_sizes;

    const char* keywords[] = { "_layer_sizes", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_ANN_MLP.setLayerSizes", (char**)keywords, &pyobj__layer_sizes) &&
        pyopencv_to(pyobj__layer_sizes, _layer_sizes, ArgInfo("_layer_sizes", 0)) )
    {
        ERRWRAP2(_self_->setLayerSizes(_layer_sizes));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setRpropDW0(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_ANN_MLP.setRpropDW0", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setRpropDW0(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setRpropDWMax(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_ANN_MLP.setRpropDWMax", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setRpropDWMax(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setRpropDWMin(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_ANN_MLP.setRpropDWMin", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setRpropDWMin(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setRpropDWMinus(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_ANN_MLP.setRpropDWMinus", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setRpropDWMinus(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setRpropDWPlus(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_ANN_MLP.setRpropDWPlus", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setRpropDWPlus(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    TermCriteria val;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_ANN_MLP.setTermCriteria", (char**)keywords, &pyobj_val) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setTermCriteria(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_setTrainMethod(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP' or its derivative)");
    Ptr<cv::ml::ANN_MLP> _self_ = *(self1);
    int method=0;
    double param1=0;
    double param2=0;

    const char* keywords[] = { "method", "param1", "param2", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i|dd:ml_ANN_MLP.setTrainMethod", (char**)keywords, &method, &param1, &param2) )
    {
        ERRWRAP2(_self_->setTrainMethod(method, param1, param2));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (ml_ANN_MLP)

static PyGetSetDef pyopencv_ml_ANN_MLP_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_ml_ANN_MLP_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_create_static, METH_STATIC), "create() -> retval\n.   @brief Creates empty model\n.   \n.       Use StatModel::train to train the model, Algorithm::load\\<ANN_MLP\\>(filename) to load the pre-trained model.\n.       Note that the train method has optional flags: ANN_MLP::TrainFlags."},
    {"getAnnealCoolingRatio", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_getAnnealCoolingRatio, 0), "getAnnealCoolingRatio() -> retval\n.   @see setAnnealCoolingRatio"},
    {"getAnnealFinalT", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_getAnnealFinalT, 0), "getAnnealFinalT() -> retval\n.   @see setAnnealFinalT"},
    {"getAnnealInitialT", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_getAnnealInitialT, 0), "getAnnealInitialT() -> retval\n.   @see setAnnealInitialT"},
    {"getAnnealItePerStep", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_getAnnealItePerStep, 0), "getAnnealItePerStep() -> retval\n.   @see setAnnealItePerStep"},
    {"getBackpropMomentumScale", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_getBackpropMomentumScale, 0), "getBackpropMomentumScale() -> retval\n.   @see setBackpropMomentumScale"},
    {"getBackpropWeightScale", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_getBackpropWeightScale, 0), "getBackpropWeightScale() -> retval\n.   @see setBackpropWeightScale"},
    {"getLayerSizes", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_getLayerSizes, 0), "getLayerSizes() -> retval\n.   Integer vector specifying the number of neurons in each layer including the input and output layers.\n.       The very first element specifies the number of elements in the input layer.\n.       The last element - number of elements in the output layer.\n.   @sa setLayerSizes"},
    {"getRpropDW0", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_getRpropDW0, 0), "getRpropDW0() -> retval\n.   @see setRpropDW0"},
    {"getRpropDWMax", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_getRpropDWMax, 0), "getRpropDWMax() -> retval\n.   @see setRpropDWMax"},
    {"getRpropDWMin", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_getRpropDWMin, 0), "getRpropDWMin() -> retval\n.   @see setRpropDWMin"},
    {"getRpropDWMinus", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_getRpropDWMinus, 0), "getRpropDWMinus() -> retval\n.   @see setRpropDWMinus"},
    {"getRpropDWPlus", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_getRpropDWPlus, 0), "getRpropDWPlus() -> retval\n.   @see setRpropDWPlus"},
    {"getTermCriteria", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_getTermCriteria, 0), "getTermCriteria() -> retval\n.   @see setTermCriteria"},
    {"getTrainMethod", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_getTrainMethod, 0), "getTrainMethod() -> retval\n.   Returns current training method"},
    {"getWeights", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_getWeights, 0), "getWeights(layerIdx) -> retval\n."},
    {"load", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_load_static, METH_STATIC), "load(filepath) -> retval\n.   @brief Loads and creates a serialized ANN from a file\n.        *\n.        * Use ANN::save to serialize and store an ANN to disk.\n.        * Load the ANN from this file again, by calling this function with the path to the file.\n.        *\n.        * @param filepath path to serialized ANN"},
    {"setActivationFunction", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_setActivationFunction, 0), "setActivationFunction(type[, param1[, param2]]) -> None\n.   Initialize the activation function for each neuron.\n.       Currently the default and the only fully supported activation function is ANN_MLP::SIGMOID_SYM.\n.       @param type The type of activation function. See ANN_MLP::ActivationFunctions.\n.       @param param1 The first parameter of the activation function, \\f$\\alpha\\f$. Default value is 0.\n.       @param param2 The second parameter of the activation function, \\f$\\beta\\f$. Default value is 0."},
    {"setAnnealCoolingRatio", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_setAnnealCoolingRatio, 0), "setAnnealCoolingRatio(val) -> None\n.   @copybrief getAnnealCoolingRatio @see getAnnealCoolingRatio"},
    {"setAnnealFinalT", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_setAnnealFinalT, 0), "setAnnealFinalT(val) -> None\n.   @copybrief getAnnealFinalT @see getAnnealFinalT"},
    {"setAnnealInitialT", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_setAnnealInitialT, 0), "setAnnealInitialT(val) -> None\n.   @copybrief getAnnealInitialT @see getAnnealInitialT"},
    {"setAnnealItePerStep", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_setAnnealItePerStep, 0), "setAnnealItePerStep(val) -> None\n.   @copybrief getAnnealItePerStep @see getAnnealItePerStep"},
    {"setBackpropMomentumScale", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_setBackpropMomentumScale, 0), "setBackpropMomentumScale(val) -> None\n.   @copybrief getBackpropMomentumScale @see getBackpropMomentumScale"},
    {"setBackpropWeightScale", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_setBackpropWeightScale, 0), "setBackpropWeightScale(val) -> None\n.   @copybrief getBackpropWeightScale @see getBackpropWeightScale"},
    {"setLayerSizes", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_setLayerSizes, 0), "setLayerSizes(_layer_sizes) -> None\n.   Integer vector specifying the number of neurons in each layer including the input and output layers.\n.       The very first element specifies the number of elements in the input layer.\n.       The last element - number of elements in the output layer. Default value is empty Mat.\n.   @sa getLayerSizes"},
    {"setRpropDW0", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_setRpropDW0, 0), "setRpropDW0(val) -> None\n.   @copybrief getRpropDW0 @see getRpropDW0"},
    {"setRpropDWMax", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_setRpropDWMax, 0), "setRpropDWMax(val) -> None\n.   @copybrief getRpropDWMax @see getRpropDWMax"},
    {"setRpropDWMin", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_setRpropDWMin, 0), "setRpropDWMin(val) -> None\n.   @copybrief getRpropDWMin @see getRpropDWMin"},
    {"setRpropDWMinus", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_setRpropDWMinus, 0), "setRpropDWMinus(val) -> None\n.   @copybrief getRpropDWMinus @see getRpropDWMinus"},
    {"setRpropDWPlus", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_setRpropDWPlus, 0), "setRpropDWPlus(val) -> None\n.   @copybrief getRpropDWPlus @see getRpropDWPlus"},
    {"setTermCriteria", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_setTermCriteria, 0), "setTermCriteria(val) -> None\n.   @copybrief getTermCriteria @see getTermCriteria"},
    {"setTrainMethod", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_setTrainMethod, 0), "setTrainMethod(method[, param1[, param2]]) -> None\n.   Sets training method and common parameters.\n.       @param method Default value is ANN_MLP::RPROP. See ANN_MLP::TrainingMethods.\n.       @param param1 passed to setRpropDW0 for ANN_MLP::RPROP and to setBackpropWeightScale for ANN_MLP::BACKPROP and to initialT for ANN_MLP::ANNEAL.\n.       @param param2 passed to setRpropDWMin for ANN_MLP::RPROP and to setBackpropMomentumScale for ANN_MLP::BACKPROP and to finalT for ANN_MLP::ANNEAL."},

    {NULL,          NULL}
};

// Converter (ml_ANN_MLP)

template<>
struct PyOpenCV_Converter< Ptr<cv::ml::ANN_MLP> >
{
    static PyObject* from(const Ptr<cv::ml::ANN_MLP>& r)
    {
        return pyopencv_ml_ANN_MLP_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::ml::ANN_MLP>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::ml::ANN_MLP> * dst_;
        if (pyopencv_ml_ANN_MLP_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::ml::ANN_MLP> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// ml_ANN_MLP_ANNEAL (Generic)
//================================================================================

// GetSet (ml_ANN_MLP_ANNEAL)



// Methods (ml_ANN_MLP_ANNEAL)

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_ANNEAL_getAnnealCoolingRatio(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP_ANNEAL> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_ANNEAL_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP_ANNEAL' or its derivative)");
    Ptr<cv::ml::ANN_MLP_ANNEAL> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAnnealCoolingRatio());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_ANNEAL_getAnnealFinalT(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP_ANNEAL> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_ANNEAL_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP_ANNEAL' or its derivative)");
    Ptr<cv::ml::ANN_MLP_ANNEAL> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAnnealFinalT());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_ANNEAL_getAnnealInitialT(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP_ANNEAL> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_ANNEAL_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP_ANNEAL' or its derivative)");
    Ptr<cv::ml::ANN_MLP_ANNEAL> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAnnealInitialT());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_ANNEAL_getAnnealItePerStep(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP_ANNEAL> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_ANNEAL_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP_ANNEAL' or its derivative)");
    Ptr<cv::ml::ANN_MLP_ANNEAL> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAnnealItePerStep());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_ANNEAL_setAnnealCoolingRatio(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP_ANNEAL> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_ANNEAL_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP_ANNEAL' or its derivative)");
    Ptr<cv::ml::ANN_MLP_ANNEAL> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_ANN_MLP_ANNEAL.setAnnealCoolingRatio", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setAnnealCoolingRatio(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_ANNEAL_setAnnealFinalT(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP_ANNEAL> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_ANNEAL_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP_ANNEAL' or its derivative)");
    Ptr<cv::ml::ANN_MLP_ANNEAL> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_ANN_MLP_ANNEAL.setAnnealFinalT", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setAnnealFinalT(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_ANNEAL_setAnnealInitialT(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP_ANNEAL> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_ANNEAL_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP_ANNEAL' or its derivative)");
    Ptr<cv::ml::ANN_MLP_ANNEAL> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_ANN_MLP_ANNEAL.setAnnealInitialT", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setAnnealInitialT(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_ANN_MLP_ANNEAL_setAnnealItePerStep(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::ANN_MLP_ANNEAL> * self1 = 0;
    if (!pyopencv_ml_ANN_MLP_ANNEAL_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_ANN_MLP_ANNEAL' or its derivative)");
    Ptr<cv::ml::ANN_MLP_ANNEAL> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_ANN_MLP_ANNEAL.setAnnealItePerStep", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setAnnealItePerStep(val));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (ml_ANN_MLP_ANNEAL)

static PyGetSetDef pyopencv_ml_ANN_MLP_ANNEAL_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_ml_ANN_MLP_ANNEAL_methods[] =
{
    {"getAnnealCoolingRatio", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_ANNEAL_getAnnealCoolingRatio, 0), "getAnnealCoolingRatio() -> retval\n.   @see setAnnealCoolingRatio"},
    {"getAnnealFinalT", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_ANNEAL_getAnnealFinalT, 0), "getAnnealFinalT() -> retval\n.   @see setAnnealFinalT"},
    {"getAnnealInitialT", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_ANNEAL_getAnnealInitialT, 0), "getAnnealInitialT() -> retval\n.   @see setAnnealInitialT"},
    {"getAnnealItePerStep", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_ANNEAL_getAnnealItePerStep, 0), "getAnnealItePerStep() -> retval\n.   @see setAnnealItePerStep"},
    {"setAnnealCoolingRatio", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_ANNEAL_setAnnealCoolingRatio, 0), "setAnnealCoolingRatio(val) -> None\n.   @copybrief getAnnealCoolingRatio @see getAnnealCoolingRatio"},
    {"setAnnealFinalT", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_ANNEAL_setAnnealFinalT, 0), "setAnnealFinalT(val) -> None\n.   @copybrief getAnnealFinalT @see getAnnealFinalT"},
    {"setAnnealInitialT", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_ANNEAL_setAnnealInitialT, 0), "setAnnealInitialT(val) -> None\n.   @copybrief getAnnealInitialT @see getAnnealInitialT"},
    {"setAnnealItePerStep", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ANN_MLP_ANNEAL_setAnnealItePerStep, 0), "setAnnealItePerStep(val) -> None\n.   @copybrief getAnnealItePerStep @see getAnnealItePerStep"},

    {NULL,          NULL}
};

// Converter (ml_ANN_MLP_ANNEAL)

template<>
struct PyOpenCV_Converter< Ptr<cv::ml::ANN_MLP_ANNEAL> >
{
    static PyObject* from(const Ptr<cv::ml::ANN_MLP_ANNEAL>& r)
    {
        return pyopencv_ml_ANN_MLP_ANNEAL_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::ml::ANN_MLP_ANNEAL>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::ml::ANN_MLP_ANNEAL> * dst_;
        if (pyopencv_ml_ANN_MLP_ANNEAL_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::ml::ANN_MLP_ANNEAL> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// ml_Boost (Generic)
//================================================================================

// GetSet (ml_Boost)



// Methods (ml_Boost)

static PyObject* pyopencv_cv_ml_ml_Boost_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    Ptr<Boost> retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv::ml::Boost::create());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_Boost_getBoostType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::Boost> * self1 = 0;
    if (!pyopencv_ml_Boost_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_Boost' or its derivative)");
    Ptr<cv::ml::Boost> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getBoostType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_Boost_getWeakCount(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::Boost> * self1 = 0;
    if (!pyopencv_ml_Boost_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_Boost' or its derivative)");
    Ptr<cv::ml::Boost> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getWeakCount());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_Boost_getWeightTrimRate(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::Boost> * self1 = 0;
    if (!pyopencv_ml_Boost_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_Boost' or its derivative)");
    Ptr<cv::ml::Boost> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getWeightTrimRate());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_Boost_load_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    PyObject* pyobj_filepath = NULL;
    String filepath;
    PyObject* pyobj_nodeName = NULL;
    String nodeName;
    Ptr<Boost> retval;

    const char* keywords[] = { "filepath", "nodeName", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:ml_Boost.load", (char**)keywords, &pyobj_filepath, &pyobj_nodeName) &&
        pyopencv_to(pyobj_filepath, filepath, ArgInfo("filepath", 0)) &&
        pyopencv_to(pyobj_nodeName, nodeName, ArgInfo("nodeName", 0)) )
    {
        ERRWRAP2(retval = cv::ml::Boost::load(filepath, nodeName));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_Boost_setBoostType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::Boost> * self1 = 0;
    if (!pyopencv_ml_Boost_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_Boost' or its derivative)");
    Ptr<cv::ml::Boost> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_Boost.setBoostType", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setBoostType(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_Boost_setWeakCount(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::Boost> * self1 = 0;
    if (!pyopencv_ml_Boost_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_Boost' or its derivative)");
    Ptr<cv::ml::Boost> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_Boost.setWeakCount", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setWeakCount(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_Boost_setWeightTrimRate(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::Boost> * self1 = 0;
    if (!pyopencv_ml_Boost_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_Boost' or its derivative)");
    Ptr<cv::ml::Boost> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_Boost.setWeightTrimRate", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setWeightTrimRate(val));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (ml_Boost)

static PyGetSetDef pyopencv_ml_Boost_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_ml_Boost_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_Boost_create_static, METH_STATIC), "create() -> retval\n.   Creates the empty model.\n.   Use StatModel::train to train the model, Algorithm::load\\<Boost\\>(filename) to load the pre-trained model."},
    {"getBoostType", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_Boost_getBoostType, 0), "getBoostType() -> retval\n.   @see setBoostType"},
    {"getWeakCount", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_Boost_getWeakCount, 0), "getWeakCount() -> retval\n.   @see setWeakCount"},
    {"getWeightTrimRate", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_Boost_getWeightTrimRate, 0), "getWeightTrimRate() -> retval\n.   @see setWeightTrimRate"},
    {"load", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_Boost_load_static, METH_STATIC), "load(filepath[, nodeName]) -> retval\n.   @brief Loads and creates a serialized Boost from a file\n.        *\n.        * Use Boost::save to serialize and store an RTree to disk.\n.        * Load the Boost from this file again, by calling this function with the path to the file.\n.        * Optionally specify the node for the file containing the classifier\n.        *\n.        * @param filepath path to serialized Boost\n.        * @param nodeName name of node containing the classifier"},
    {"setBoostType", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_Boost_setBoostType, 0), "setBoostType(val) -> None\n.   @copybrief getBoostType @see getBoostType"},
    {"setWeakCount", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_Boost_setWeakCount, 0), "setWeakCount(val) -> None\n.   @copybrief getWeakCount @see getWeakCount"},
    {"setWeightTrimRate", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_Boost_setWeightTrimRate, 0), "setWeightTrimRate(val) -> None\n.   @copybrief getWeightTrimRate @see getWeightTrimRate"},

    {NULL,          NULL}
};

// Converter (ml_Boost)

template<>
struct PyOpenCV_Converter< Ptr<cv::ml::Boost> >
{
    static PyObject* from(const Ptr<cv::ml::Boost>& r)
    {
        return pyopencv_ml_Boost_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::ml::Boost>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::ml::Boost> * dst_;
        if (pyopencv_ml_Boost_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::ml::Boost> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// ml_DTrees (Generic)
//================================================================================

// GetSet (ml_DTrees)



// Methods (ml_DTrees)

static PyObject* pyopencv_cv_ml_ml_DTrees_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    Ptr<DTrees> retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv::ml::DTrees::create());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_getCVFolds(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::DTrees> * self1 = 0;
    if (!pyopencv_ml_DTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    Ptr<cv::ml::DTrees> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getCVFolds());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_getMaxCategories(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::DTrees> * self1 = 0;
    if (!pyopencv_ml_DTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    Ptr<cv::ml::DTrees> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxCategories());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_getMaxDepth(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::DTrees> * self1 = 0;
    if (!pyopencv_ml_DTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    Ptr<cv::ml::DTrees> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxDepth());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_getMinSampleCount(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::DTrees> * self1 = 0;
    if (!pyopencv_ml_DTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    Ptr<cv::ml::DTrees> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMinSampleCount());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_getPriors(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::DTrees> * self1 = 0;
    if (!pyopencv_ml_DTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    Ptr<cv::ml::DTrees> _self_ = *(self1);
    cv::Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPriors());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_getRegressionAccuracy(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::DTrees> * self1 = 0;
    if (!pyopencv_ml_DTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    Ptr<cv::ml::DTrees> _self_ = *(self1);
    float retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getRegressionAccuracy());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_getTruncatePrunedTree(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::DTrees> * self1 = 0;
    if (!pyopencv_ml_DTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    Ptr<cv::ml::DTrees> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTruncatePrunedTree());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_getUse1SERule(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::DTrees> * self1 = 0;
    if (!pyopencv_ml_DTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    Ptr<cv::ml::DTrees> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getUse1SERule());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_getUseSurrogates(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::DTrees> * self1 = 0;
    if (!pyopencv_ml_DTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    Ptr<cv::ml::DTrees> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getUseSurrogates());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_load_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    PyObject* pyobj_filepath = NULL;
    String filepath;
    PyObject* pyobj_nodeName = NULL;
    String nodeName;
    Ptr<DTrees> retval;

    const char* keywords[] = { "filepath", "nodeName", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:ml_DTrees.load", (char**)keywords, &pyobj_filepath, &pyobj_nodeName) &&
        pyopencv_to(pyobj_filepath, filepath, ArgInfo("filepath", 0)) &&
        pyopencv_to(pyobj_nodeName, nodeName, ArgInfo("nodeName", 0)) )
    {
        ERRWRAP2(retval = cv::ml::DTrees::load(filepath, nodeName));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_setCVFolds(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::DTrees> * self1 = 0;
    if (!pyopencv_ml_DTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    Ptr<cv::ml::DTrees> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_DTrees.setCVFolds", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setCVFolds(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_setMaxCategories(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::DTrees> * self1 = 0;
    if (!pyopencv_ml_DTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    Ptr<cv::ml::DTrees> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_DTrees.setMaxCategories", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setMaxCategories(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_setMaxDepth(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::DTrees> * self1 = 0;
    if (!pyopencv_ml_DTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    Ptr<cv::ml::DTrees> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_DTrees.setMaxDepth", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setMaxDepth(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_setMinSampleCount(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::DTrees> * self1 = 0;
    if (!pyopencv_ml_DTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    Ptr<cv::ml::DTrees> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_DTrees.setMinSampleCount", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setMinSampleCount(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_setPriors(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::DTrees> * self1 = 0;
    if (!pyopencv_ml_DTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    Ptr<cv::ml::DTrees> _self_ = *(self1);
    {
    PyObject* pyobj_val = NULL;
    Mat val;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_DTrees.setPriors", (char**)keywords, &pyobj_val) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setPriors(val));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_val = NULL;
    Mat val;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_DTrees.setPriors", (char**)keywords, &pyobj_val) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setPriors(val));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_setRegressionAccuracy(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::DTrees> * self1 = 0;
    if (!pyopencv_ml_DTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    Ptr<cv::ml::DTrees> _self_ = *(self1);
    float val=0.f;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:ml_DTrees.setRegressionAccuracy", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setRegressionAccuracy(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_setTruncatePrunedTree(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::DTrees> * self1 = 0;
    if (!pyopencv_ml_DTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    Ptr<cv::ml::DTrees> _self_ = *(self1);
    bool val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:ml_DTrees.setTruncatePrunedTree", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setTruncatePrunedTree(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_setUse1SERule(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::DTrees> * self1 = 0;
    if (!pyopencv_ml_DTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    Ptr<cv::ml::DTrees> _self_ = *(self1);
    bool val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:ml_DTrees.setUse1SERule", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setUse1SERule(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_DTrees_setUseSurrogates(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::DTrees> * self1 = 0;
    if (!pyopencv_ml_DTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_DTrees' or its derivative)");
    Ptr<cv::ml::DTrees> _self_ = *(self1);
    bool val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:ml_DTrees.setUseSurrogates", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setUseSurrogates(val));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (ml_DTrees)

static PyGetSetDef pyopencv_ml_DTrees_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_ml_DTrees_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_DTrees_create_static, METH_STATIC), "create() -> retval\n.   @brief Creates the empty model\n.   \n.       The static method creates empty decision tree with the specified parameters. It should be then\n.       trained using train method (see StatModel::train). Alternatively, you can load the model from\n.       file using Algorithm::load\\<DTrees\\>(filename)."},
    {"getCVFolds", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_DTrees_getCVFolds, 0), "getCVFolds() -> retval\n.   @see setCVFolds"},
    {"getMaxCategories", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_DTrees_getMaxCategories, 0), "getMaxCategories() -> retval\n.   @see setMaxCategories"},
    {"getMaxDepth", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_DTrees_getMaxDepth, 0), "getMaxDepth() -> retval\n.   @see setMaxDepth"},
    {"getMinSampleCount", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_DTrees_getMinSampleCount, 0), "getMinSampleCount() -> retval\n.   @see setMinSampleCount"},
    {"getPriors", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_DTrees_getPriors, 0), "getPriors() -> retval\n.   @see setPriors"},
    {"getRegressionAccuracy", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_DTrees_getRegressionAccuracy, 0), "getRegressionAccuracy() -> retval\n.   @see setRegressionAccuracy"},
    {"getTruncatePrunedTree", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_DTrees_getTruncatePrunedTree, 0), "getTruncatePrunedTree() -> retval\n.   @see setTruncatePrunedTree"},
    {"getUse1SERule", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_DTrees_getUse1SERule, 0), "getUse1SERule() -> retval\n.   @see setUse1SERule"},
    {"getUseSurrogates", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_DTrees_getUseSurrogates, 0), "getUseSurrogates() -> retval\n.   @see setUseSurrogates"},
    {"load", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_DTrees_load_static, METH_STATIC), "load(filepath[, nodeName]) -> retval\n.   @brief Loads and creates a serialized DTrees from a file\n.        *\n.        * Use DTree::save to serialize and store an DTree to disk.\n.        * Load the DTree from this file again, by calling this function with the path to the file.\n.        * Optionally specify the node for the file containing the classifier\n.        *\n.        * @param filepath path to serialized DTree\n.        * @param nodeName name of node containing the classifier"},
    {"setCVFolds", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_DTrees_setCVFolds, 0), "setCVFolds(val) -> None\n.   @copybrief getCVFolds @see getCVFolds"},
    {"setMaxCategories", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_DTrees_setMaxCategories, 0), "setMaxCategories(val) -> None\n.   @copybrief getMaxCategories @see getMaxCategories"},
    {"setMaxDepth", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_DTrees_setMaxDepth, 0), "setMaxDepth(val) -> None\n.   @copybrief getMaxDepth @see getMaxDepth"},
    {"setMinSampleCount", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_DTrees_setMinSampleCount, 0), "setMinSampleCount(val) -> None\n.   @copybrief getMinSampleCount @see getMinSampleCount"},
    {"setPriors", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_DTrees_setPriors, 0), "setPriors(val) -> None\n.   @copybrief getPriors @see getPriors"},
    {"setRegressionAccuracy", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_DTrees_setRegressionAccuracy, 0), "setRegressionAccuracy(val) -> None\n.   @copybrief getRegressionAccuracy @see getRegressionAccuracy"},
    {"setTruncatePrunedTree", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_DTrees_setTruncatePrunedTree, 0), "setTruncatePrunedTree(val) -> None\n.   @copybrief getTruncatePrunedTree @see getTruncatePrunedTree"},
    {"setUse1SERule", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_DTrees_setUse1SERule, 0), "setUse1SERule(val) -> None\n.   @copybrief getUse1SERule @see getUse1SERule"},
    {"setUseSurrogates", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_DTrees_setUseSurrogates, 0), "setUseSurrogates(val) -> None\n.   @copybrief getUseSurrogates @see getUseSurrogates"},

    {NULL,          NULL}
};

// Converter (ml_DTrees)

template<>
struct PyOpenCV_Converter< Ptr<cv::ml::DTrees> >
{
    static PyObject* from(const Ptr<cv::ml::DTrees>& r)
    {
        return pyopencv_ml_DTrees_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::ml::DTrees>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::ml::DTrees> * dst_;
        if (pyopencv_ml_DTrees_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::ml::DTrees> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// ml_EM (Generic)
//================================================================================

// GetSet (ml_EM)



// Methods (ml_EM)

static PyObject* pyopencv_cv_ml_ml_EM_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    Ptr<EM> retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv::ml::EM::create());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_getClustersNumber(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::EM> * self1 = 0;
    if (!pyopencv_ml_EM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    Ptr<cv::ml::EM> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getClustersNumber());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_getCovarianceMatrixType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::EM> * self1 = 0;
    if (!pyopencv_ml_EM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    Ptr<cv::ml::EM> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getCovarianceMatrixType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_getCovs(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::EM> * self1 = 0;
    if (!pyopencv_ml_EM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    Ptr<cv::ml::EM> _self_ = *(self1);
    {
    PyObject* pyobj_covs = NULL;
    vector_Mat covs;

    const char* keywords[] = { "covs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:ml_EM.getCovs", (char**)keywords, &pyobj_covs) &&
        pyopencv_to(pyobj_covs, covs, ArgInfo("covs", 1)) )
    {
        ERRWRAP2(_self_->getCovs(covs));
        return pyopencv_from(covs);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_covs = NULL;
    vector_Mat covs;

    const char* keywords[] = { "covs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|O:ml_EM.getCovs", (char**)keywords, &pyobj_covs) &&
        pyopencv_to(pyobj_covs, covs, ArgInfo("covs", 1)) )
    {
        ERRWRAP2(_self_->getCovs(covs));
        return pyopencv_from(covs);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_getMeans(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::EM> * self1 = 0;
    if (!pyopencv_ml_EM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    Ptr<cv::ml::EM> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMeans());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_getTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::EM> * self1 = 0;
    if (!pyopencv_ml_EM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    Ptr<cv::ml::EM> _self_ = *(self1);
    TermCriteria retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTermCriteria());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_getWeights(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::EM> * self1 = 0;
    if (!pyopencv_ml_EM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    Ptr<cv::ml::EM> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getWeights());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_load_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    PyObject* pyobj_filepath = NULL;
    String filepath;
    PyObject* pyobj_nodeName = NULL;
    String nodeName;
    Ptr<EM> retval;

    const char* keywords[] = { "filepath", "nodeName", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:ml_EM.load", (char**)keywords, &pyobj_filepath, &pyobj_nodeName) &&
        pyopencv_to(pyobj_filepath, filepath, ArgInfo("filepath", 0)) &&
        pyopencv_to(pyobj_nodeName, nodeName, ArgInfo("nodeName", 0)) )
    {
        ERRWRAP2(retval = cv::ml::EM::load(filepath, nodeName));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::EM> * self1 = 0;
    if (!pyopencv_ml_EM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    Ptr<cv::ml::EM> _self_ = *(self1);
    {
    PyObject* pyobj_samples = NULL;
    Mat samples;
    PyObject* pyobj_results = NULL;
    Mat results;
    int flags=0;
    float retval;

    const char* keywords[] = { "samples", "results", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Oi:ml_EM.predict", (char**)keywords, &pyobj_samples, &pyobj_results, &flags) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_results, results, ArgInfo("results", 1)) )
    {
        ERRWRAP2(retval = _self_->predict(samples, results, flags));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(results));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    UMat samples;
    PyObject* pyobj_results = NULL;
    UMat results;
    int flags=0;
    float retval;

    const char* keywords[] = { "samples", "results", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Oi:ml_EM.predict", (char**)keywords, &pyobj_samples, &pyobj_results, &flags) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_results, results, ArgInfo("results", 1)) )
    {
        ERRWRAP2(retval = _self_->predict(samples, results, flags));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(results));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_predict2(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::EM> * self1 = 0;
    if (!pyopencv_ml_EM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    Ptr<cv::ml::EM> _self_ = *(self1);
    {
    PyObject* pyobj_sample = NULL;
    Mat sample;
    PyObject* pyobj_probs = NULL;
    Mat probs;
    Vec2d retval;

    const char* keywords[] = { "sample", "probs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:ml_EM.predict2", (char**)keywords, &pyobj_sample, &pyobj_probs) &&
        pyopencv_to(pyobj_sample, sample, ArgInfo("sample", 0)) &&
        pyopencv_to(pyobj_probs, probs, ArgInfo("probs", 1)) )
    {
        ERRWRAP2(retval = _self_->predict2(sample, probs));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(probs));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_sample = NULL;
    UMat sample;
    PyObject* pyobj_probs = NULL;
    UMat probs;
    Vec2d retval;

    const char* keywords[] = { "sample", "probs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:ml_EM.predict2", (char**)keywords, &pyobj_sample, &pyobj_probs) &&
        pyopencv_to(pyobj_sample, sample, ArgInfo("sample", 0)) &&
        pyopencv_to(pyobj_probs, probs, ArgInfo("probs", 1)) )
    {
        ERRWRAP2(retval = _self_->predict2(sample, probs));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(probs));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_setClustersNumber(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::EM> * self1 = 0;
    if (!pyopencv_ml_EM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    Ptr<cv::ml::EM> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_EM.setClustersNumber", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setClustersNumber(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_setCovarianceMatrixType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::EM> * self1 = 0;
    if (!pyopencv_ml_EM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    Ptr<cv::ml::EM> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_EM.setCovarianceMatrixType", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setCovarianceMatrixType(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_setTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::EM> * self1 = 0;
    if (!pyopencv_ml_EM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    Ptr<cv::ml::EM> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    TermCriteria val;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_EM.setTermCriteria", (char**)keywords, &pyobj_val) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setTermCriteria(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_trainE(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::EM> * self1 = 0;
    if (!pyopencv_ml_EM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    Ptr<cv::ml::EM> _self_ = *(self1);
    {
    PyObject* pyobj_samples = NULL;
    Mat samples;
    PyObject* pyobj_means0 = NULL;
    Mat means0;
    PyObject* pyobj_covs0 = NULL;
    Mat covs0;
    PyObject* pyobj_weights0 = NULL;
    Mat weights0;
    PyObject* pyobj_logLikelihoods = NULL;
    Mat logLikelihoods;
    PyObject* pyobj_labels = NULL;
    Mat labels;
    PyObject* pyobj_probs = NULL;
    Mat probs;
    bool retval;

    const char* keywords[] = { "samples", "means0", "covs0", "weights0", "logLikelihoods", "labels", "probs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|OOOOO:ml_EM.trainE", (char**)keywords, &pyobj_samples, &pyobj_means0, &pyobj_covs0, &pyobj_weights0, &pyobj_logLikelihoods, &pyobj_labels, &pyobj_probs) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_means0, means0, ArgInfo("means0", 0)) &&
        pyopencv_to(pyobj_covs0, covs0, ArgInfo("covs0", 0)) &&
        pyopencv_to(pyobj_weights0, weights0, ArgInfo("weights0", 0)) &&
        pyopencv_to(pyobj_logLikelihoods, logLikelihoods, ArgInfo("logLikelihoods", 1)) &&
        pyopencv_to(pyobj_labels, labels, ArgInfo("labels", 1)) &&
        pyopencv_to(pyobj_probs, probs, ArgInfo("probs", 1)) )
    {
        ERRWRAP2(retval = _self_->trainE(samples, means0, covs0, weights0, logLikelihoods, labels, probs));
        return Py_BuildValue("(NNNN)", pyopencv_from(retval), pyopencv_from(logLikelihoods), pyopencv_from(labels), pyopencv_from(probs));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    UMat samples;
    PyObject* pyobj_means0 = NULL;
    UMat means0;
    PyObject* pyobj_covs0 = NULL;
    UMat covs0;
    PyObject* pyobj_weights0 = NULL;
    UMat weights0;
    PyObject* pyobj_logLikelihoods = NULL;
    UMat logLikelihoods;
    PyObject* pyobj_labels = NULL;
    UMat labels;
    PyObject* pyobj_probs = NULL;
    UMat probs;
    bool retval;

    const char* keywords[] = { "samples", "means0", "covs0", "weights0", "logLikelihoods", "labels", "probs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|OOOOO:ml_EM.trainE", (char**)keywords, &pyobj_samples, &pyobj_means0, &pyobj_covs0, &pyobj_weights0, &pyobj_logLikelihoods, &pyobj_labels, &pyobj_probs) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_means0, means0, ArgInfo("means0", 0)) &&
        pyopencv_to(pyobj_covs0, covs0, ArgInfo("covs0", 0)) &&
        pyopencv_to(pyobj_weights0, weights0, ArgInfo("weights0", 0)) &&
        pyopencv_to(pyobj_logLikelihoods, logLikelihoods, ArgInfo("logLikelihoods", 1)) &&
        pyopencv_to(pyobj_labels, labels, ArgInfo("labels", 1)) &&
        pyopencv_to(pyobj_probs, probs, ArgInfo("probs", 1)) )
    {
        ERRWRAP2(retval = _self_->trainE(samples, means0, covs0, weights0, logLikelihoods, labels, probs));
        return Py_BuildValue("(NNNN)", pyopencv_from(retval), pyopencv_from(logLikelihoods), pyopencv_from(labels), pyopencv_from(probs));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_trainEM(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::EM> * self1 = 0;
    if (!pyopencv_ml_EM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    Ptr<cv::ml::EM> _self_ = *(self1);
    {
    PyObject* pyobj_samples = NULL;
    Mat samples;
    PyObject* pyobj_logLikelihoods = NULL;
    Mat logLikelihoods;
    PyObject* pyobj_labels = NULL;
    Mat labels;
    PyObject* pyobj_probs = NULL;
    Mat probs;
    bool retval;

    const char* keywords[] = { "samples", "logLikelihoods", "labels", "probs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOO:ml_EM.trainEM", (char**)keywords, &pyobj_samples, &pyobj_logLikelihoods, &pyobj_labels, &pyobj_probs) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_logLikelihoods, logLikelihoods, ArgInfo("logLikelihoods", 1)) &&
        pyopencv_to(pyobj_labels, labels, ArgInfo("labels", 1)) &&
        pyopencv_to(pyobj_probs, probs, ArgInfo("probs", 1)) )
    {
        ERRWRAP2(retval = _self_->trainEM(samples, logLikelihoods, labels, probs));
        return Py_BuildValue("(NNNN)", pyopencv_from(retval), pyopencv_from(logLikelihoods), pyopencv_from(labels), pyopencv_from(probs));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    UMat samples;
    PyObject* pyobj_logLikelihoods = NULL;
    UMat logLikelihoods;
    PyObject* pyobj_labels = NULL;
    UMat labels;
    PyObject* pyobj_probs = NULL;
    UMat probs;
    bool retval;

    const char* keywords[] = { "samples", "logLikelihoods", "labels", "probs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOO:ml_EM.trainEM", (char**)keywords, &pyobj_samples, &pyobj_logLikelihoods, &pyobj_labels, &pyobj_probs) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_logLikelihoods, logLikelihoods, ArgInfo("logLikelihoods", 1)) &&
        pyopencv_to(pyobj_labels, labels, ArgInfo("labels", 1)) &&
        pyopencv_to(pyobj_probs, probs, ArgInfo("probs", 1)) )
    {
        ERRWRAP2(retval = _self_->trainEM(samples, logLikelihoods, labels, probs));
        return Py_BuildValue("(NNNN)", pyopencv_from(retval), pyopencv_from(logLikelihoods), pyopencv_from(labels), pyopencv_from(probs));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_EM_trainM(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::EM> * self1 = 0;
    if (!pyopencv_ml_EM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_EM' or its derivative)");
    Ptr<cv::ml::EM> _self_ = *(self1);
    {
    PyObject* pyobj_samples = NULL;
    Mat samples;
    PyObject* pyobj_probs0 = NULL;
    Mat probs0;
    PyObject* pyobj_logLikelihoods = NULL;
    Mat logLikelihoods;
    PyObject* pyobj_labels = NULL;
    Mat labels;
    PyObject* pyobj_probs = NULL;
    Mat probs;
    bool retval;

    const char* keywords[] = { "samples", "probs0", "logLikelihoods", "labels", "probs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|OOO:ml_EM.trainM", (char**)keywords, &pyobj_samples, &pyobj_probs0, &pyobj_logLikelihoods, &pyobj_labels, &pyobj_probs) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_probs0, probs0, ArgInfo("probs0", 0)) &&
        pyopencv_to(pyobj_logLikelihoods, logLikelihoods, ArgInfo("logLikelihoods", 1)) &&
        pyopencv_to(pyobj_labels, labels, ArgInfo("labels", 1)) &&
        pyopencv_to(pyobj_probs, probs, ArgInfo("probs", 1)) )
    {
        ERRWRAP2(retval = _self_->trainM(samples, probs0, logLikelihoods, labels, probs));
        return Py_BuildValue("(NNNN)", pyopencv_from(retval), pyopencv_from(logLikelihoods), pyopencv_from(labels), pyopencv_from(probs));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    UMat samples;
    PyObject* pyobj_probs0 = NULL;
    UMat probs0;
    PyObject* pyobj_logLikelihoods = NULL;
    UMat logLikelihoods;
    PyObject* pyobj_labels = NULL;
    UMat labels;
    PyObject* pyobj_probs = NULL;
    UMat probs;
    bool retval;

    const char* keywords[] = { "samples", "probs0", "logLikelihoods", "labels", "probs", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO|OOO:ml_EM.trainM", (char**)keywords, &pyobj_samples, &pyobj_probs0, &pyobj_logLikelihoods, &pyobj_labels, &pyobj_probs) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_probs0, probs0, ArgInfo("probs0", 0)) &&
        pyopencv_to(pyobj_logLikelihoods, logLikelihoods, ArgInfo("logLikelihoods", 1)) &&
        pyopencv_to(pyobj_labels, labels, ArgInfo("labels", 1)) &&
        pyopencv_to(pyobj_probs, probs, ArgInfo("probs", 1)) )
    {
        ERRWRAP2(retval = _self_->trainM(samples, probs0, logLikelihoods, labels, probs));
        return Py_BuildValue("(NNNN)", pyopencv_from(retval), pyopencv_from(logLikelihoods), pyopencv_from(labels), pyopencv_from(probs));
    }
    }

    return NULL;
}



// Tables (ml_EM)

static PyGetSetDef pyopencv_ml_EM_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_ml_EM_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_EM_create_static, METH_STATIC), "create() -> retval\n.   Creates empty %EM model.\n.       The model should be trained then using StatModel::train(traindata, flags) method. Alternatively, you\n.       can use one of the EM::train\\* methods or load it from file using Algorithm::load\\<EM\\>(filename)."},
    {"getClustersNumber", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_EM_getClustersNumber, 0), "getClustersNumber() -> retval\n.   @see setClustersNumber"},
    {"getCovarianceMatrixType", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_EM_getCovarianceMatrixType, 0), "getCovarianceMatrixType() -> retval\n.   @see setCovarianceMatrixType"},
    {"getCovs", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_EM_getCovs, 0), "getCovs([, covs]) -> covs\n.   @brief Returns covariation matrices\n.   \n.       Returns vector of covariation matrices. Number of matrices is the number of gaussian mixtures,\n.       each matrix is a square floating-point matrix NxN, where N is the space dimensionality."},
    {"getMeans", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_EM_getMeans, 0), "getMeans() -> retval\n.   @brief Returns the cluster centers (means of the Gaussian mixture)\n.   \n.       Returns matrix with the number of rows equal to the number of mixtures and number of columns\n.       equal to the space dimensionality."},
    {"getTermCriteria", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_EM_getTermCriteria, 0), "getTermCriteria() -> retval\n.   @see setTermCriteria"},
    {"getWeights", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_EM_getWeights, 0), "getWeights() -> retval\n.   @brief Returns weights of the mixtures\n.   \n.       Returns vector with the number of elements equal to the number of mixtures."},
    {"load", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_EM_load_static, METH_STATIC), "load(filepath[, nodeName]) -> retval\n.   @brief Loads and creates a serialized EM from a file\n.        *\n.        * Use EM::save to serialize and store an EM to disk.\n.        * Load the EM from this file again, by calling this function with the path to the file.\n.        * Optionally specify the node for the file containing the classifier\n.        *\n.        * @param filepath path to serialized EM\n.        * @param nodeName name of node containing the classifier"},
    {"predict", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_EM_predict, 0), "predict(samples[, results[, flags]]) -> retval, results\n.   @brief Returns posterior probabilities for the provided samples\n.   \n.       @param samples The input samples, floating-point matrix\n.       @param results The optional output \\f$ nSamples \\times nClusters\\f$ matrix of results. It contains\n.       posterior probabilities for each sample from the input\n.       @param flags This parameter will be ignored"},
    {"predict2", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_EM_predict2, 0), "predict2(sample[, probs]) -> retval, probs\n.   @brief Returns a likelihood logarithm value and an index of the most probable mixture component\n.       for the given sample.\n.   \n.       @param sample A sample for classification. It should be a one-channel matrix of\n.           \\f$1 \\times dims\\f$ or \\f$dims \\times 1\\f$ size.\n.       @param probs Optional output matrix that contains posterior probabilities of each component\n.           given the sample. It has \\f$1 \\times nclusters\\f$ size and CV_64FC1 type.\n.   \n.       The method returns a two-element double vector. Zero element is a likelihood logarithm value for\n.       the sample. First element is an index of the most probable mixture component for the given\n.       sample."},
    {"setClustersNumber", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_EM_setClustersNumber, 0), "setClustersNumber(val) -> None\n.   @copybrief getClustersNumber @see getClustersNumber"},
    {"setCovarianceMatrixType", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_EM_setCovarianceMatrixType, 0), "setCovarianceMatrixType(val) -> None\n.   @copybrief getCovarianceMatrixType @see getCovarianceMatrixType"},
    {"setTermCriteria", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_EM_setTermCriteria, 0), "setTermCriteria(val) -> None\n.   @copybrief getTermCriteria @see getTermCriteria"},
    {"trainE", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_EM_trainE, 0), "trainE(samples, means0[, covs0[, weights0[, logLikelihoods[, labels[, probs]]]]]) -> retval, logLikelihoods, labels, probs\n.   @brief Estimate the Gaussian mixture parameters from a samples set.\n.   \n.       This variation starts with Expectation step. You need to provide initial means \\f$a_k\\f$ of\n.       mixture components. Optionally you can pass initial weights \\f$\\pi_k\\f$ and covariance matrices\n.       \\f$S_k\\f$ of mixture components.\n.   \n.       @param samples Samples from which the Gaussian mixture model will be estimated. It should be a\n.           one-channel matrix, each row of which is a sample. If the matrix does not have CV_64F type\n.           it will be converted to the inner matrix of such type for the further computing.\n.       @param means0 Initial means \\f$a_k\\f$ of mixture components. It is a one-channel matrix of\n.           \\f$nclusters \\times dims\\f$ size. If the matrix does not have CV_64F type it will be\n.           converted to the inner matrix of such type for the further computing.\n.       @param covs0 The vector of initial covariance matrices \\f$S_k\\f$ of mixture components. Each of\n.           covariance matrices is a one-channel matrix of \\f$dims \\times dims\\f$ size. If the matrices\n.           do not have CV_64F type they will be converted to the inner matrices of such type for the\n.           further computing.\n.       @param weights0 Initial weights \\f$\\pi_k\\f$ of mixture components. It should be a one-channel\n.           floating-point matrix with \\f$1 \\times nclusters\\f$ or \\f$nclusters \\times 1\\f$ size.\n.       @param logLikelihoods The optional output matrix that contains a likelihood logarithm value for\n.           each sample. It has \\f$nsamples \\times 1\\f$ size and CV_64FC1 type.\n.       @param labels The optional output \"class label\" for each sample:\n.           \\f$\\texttt{labels}_i=\\texttt{arg max}_k(p_{i,k}), i=1..N\\f$ (indices of the most probable\n.           mixture component for each sample). It has \\f$nsamples \\times 1\\f$ size and CV_32SC1 type.\n.       @param probs The optional output matrix that contains posterior probabilities of each Gaussian\n.           mixture component given the each sample. It has \\f$nsamples \\times nclusters\\f$ size and\n.           CV_64FC1 type."},
    {"trainEM", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_EM_trainEM, 0), "trainEM(samples[, logLikelihoods[, labels[, probs]]]) -> retval, logLikelihoods, labels, probs\n.   @brief Estimate the Gaussian mixture parameters from a samples set.\n.   \n.       This variation starts with Expectation step. Initial values of the model parameters will be\n.       estimated by the k-means algorithm.\n.   \n.       Unlike many of the ML models, %EM is an unsupervised learning algorithm and it does not take\n.       responses (class labels or function values) as input. Instead, it computes the *Maximum\n.       Likelihood Estimate* of the Gaussian mixture parameters from an input sample set, stores all the\n.       parameters inside the structure: \\f$p_{i,k}\\f$ in probs, \\f$a_k\\f$ in means , \\f$S_k\\f$ in\n.       covs[k], \\f$\\pi_k\\f$ in weights , and optionally computes the output \"class label\" for each\n.       sample: \\f$\\texttt{labels}_i=\\texttt{arg max}_k(p_{i,k}), i=1..N\\f$ (indices of the most\n.       probable mixture component for each sample).\n.   \n.       The trained model can be used further for prediction, just like any other classifier. The\n.       trained model is similar to the NormalBayesClassifier.\n.   \n.       @param samples Samples from which the Gaussian mixture model will be estimated. It should be a\n.           one-channel matrix, each row of which is a sample. If the matrix does not have CV_64F type\n.           it will be converted to the inner matrix of such type for the further computing.\n.       @param logLikelihoods The optional output matrix that contains a likelihood logarithm value for\n.           each sample. It has \\f$nsamples \\times 1\\f$ size and CV_64FC1 type.\n.       @param labels The optional output \"class label\" for each sample:\n.           \\f$\\texttt{labels}_i=\\texttt{arg max}_k(p_{i,k}), i=1..N\\f$ (indices of the most probable\n.           mixture component for each sample). It has \\f$nsamples \\times 1\\f$ size and CV_32SC1 type.\n.       @param probs The optional output matrix that contains posterior probabilities of each Gaussian\n.           mixture component given the each sample. It has \\f$nsamples \\times nclusters\\f$ size and\n.           CV_64FC1 type."},
    {"trainM", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_EM_trainM, 0), "trainM(samples, probs0[, logLikelihoods[, labels[, probs]]]) -> retval, logLikelihoods, labels, probs\n.   @brief Estimate the Gaussian mixture parameters from a samples set.\n.   \n.       This variation starts with Maximization step. You need to provide initial probabilities\n.       \\f$p_{i,k}\\f$ to use this option.\n.   \n.       @param samples Samples from which the Gaussian mixture model will be estimated. It should be a\n.           one-channel matrix, each row of which is a sample. If the matrix does not have CV_64F type\n.           it will be converted to the inner matrix of such type for the further computing.\n.       @param probs0 the probabilities\n.       @param logLikelihoods The optional output matrix that contains a likelihood logarithm value for\n.           each sample. It has \\f$nsamples \\times 1\\f$ size and CV_64FC1 type.\n.       @param labels The optional output \"class label\" for each sample:\n.           \\f$\\texttt{labels}_i=\\texttt{arg max}_k(p_{i,k}), i=1..N\\f$ (indices of the most probable\n.           mixture component for each sample). It has \\f$nsamples \\times 1\\f$ size and CV_32SC1 type.\n.       @param probs The optional output matrix that contains posterior probabilities of each Gaussian\n.           mixture component given the each sample. It has \\f$nsamples \\times nclusters\\f$ size and\n.           CV_64FC1 type."},

    {NULL,          NULL}
};

// Converter (ml_EM)

template<>
struct PyOpenCV_Converter< Ptr<cv::ml::EM> >
{
    static PyObject* from(const Ptr<cv::ml::EM>& r)
    {
        return pyopencv_ml_EM_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::ml::EM>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::ml::EM> * dst_;
        if (pyopencv_ml_EM_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::ml::EM> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// ml_KNearest (Generic)
//================================================================================

// GetSet (ml_KNearest)



// Methods (ml_KNearest)

static PyObject* pyopencv_cv_ml_ml_KNearest_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    Ptr<KNearest> retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv::ml::KNearest::create());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_KNearest_findNearest(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::KNearest> * self1 = 0;
    if (!pyopencv_ml_KNearest_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_KNearest' or its derivative)");
    Ptr<cv::ml::KNearest> _self_ = *(self1);
    {
    PyObject* pyobj_samples = NULL;
    Mat samples;
    int k=0;
    PyObject* pyobj_results = NULL;
    Mat results;
    PyObject* pyobj_neighborResponses = NULL;
    Mat neighborResponses;
    PyObject* pyobj_dist = NULL;
    Mat dist;
    float retval;

    const char* keywords[] = { "samples", "k", "results", "neighborResponses", "dist", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|OOO:ml_KNearest.findNearest", (char**)keywords, &pyobj_samples, &k, &pyobj_results, &pyobj_neighborResponses, &pyobj_dist) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_results, results, ArgInfo("results", 1)) &&
        pyopencv_to(pyobj_neighborResponses, neighborResponses, ArgInfo("neighborResponses", 1)) &&
        pyopencv_to(pyobj_dist, dist, ArgInfo("dist", 1)) )
    {
        ERRWRAP2(retval = _self_->findNearest(samples, k, results, neighborResponses, dist));
        return Py_BuildValue("(NNNN)", pyopencv_from(retval), pyopencv_from(results), pyopencv_from(neighborResponses), pyopencv_from(dist));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    UMat samples;
    int k=0;
    PyObject* pyobj_results = NULL;
    UMat results;
    PyObject* pyobj_neighborResponses = NULL;
    UMat neighborResponses;
    PyObject* pyobj_dist = NULL;
    UMat dist;
    float retval;

    const char* keywords[] = { "samples", "k", "results", "neighborResponses", "dist", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|OOO:ml_KNearest.findNearest", (char**)keywords, &pyobj_samples, &k, &pyobj_results, &pyobj_neighborResponses, &pyobj_dist) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_results, results, ArgInfo("results", 1)) &&
        pyopencv_to(pyobj_neighborResponses, neighborResponses, ArgInfo("neighborResponses", 1)) &&
        pyopencv_to(pyobj_dist, dist, ArgInfo("dist", 1)) )
    {
        ERRWRAP2(retval = _self_->findNearest(samples, k, results, neighborResponses, dist));
        return Py_BuildValue("(NNNN)", pyopencv_from(retval), pyopencv_from(results), pyopencv_from(neighborResponses), pyopencv_from(dist));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_KNearest_getAlgorithmType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::KNearest> * self1 = 0;
    if (!pyopencv_ml_KNearest_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_KNearest' or its derivative)");
    Ptr<cv::ml::KNearest> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAlgorithmType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_KNearest_getDefaultK(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::KNearest> * self1 = 0;
    if (!pyopencv_ml_KNearest_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_KNearest' or its derivative)");
    Ptr<cv::ml::KNearest> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultK());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_KNearest_getEmax(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::KNearest> * self1 = 0;
    if (!pyopencv_ml_KNearest_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_KNearest' or its derivative)");
    Ptr<cv::ml::KNearest> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getEmax());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_KNearest_getIsClassifier(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::KNearest> * self1 = 0;
    if (!pyopencv_ml_KNearest_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_KNearest' or its derivative)");
    Ptr<cv::ml::KNearest> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getIsClassifier());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_KNearest_load_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    PyObject* pyobj_filepath = NULL;
    String filepath;
    Ptr<KNearest> retval;

    const char* keywords[] = { "filepath", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_KNearest.load", (char**)keywords, &pyobj_filepath) &&
        pyopencv_to(pyobj_filepath, filepath, ArgInfo("filepath", 0)) )
    {
        ERRWRAP2(retval = cv::ml::KNearest::load(filepath));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_KNearest_setAlgorithmType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::KNearest> * self1 = 0;
    if (!pyopencv_ml_KNearest_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_KNearest' or its derivative)");
    Ptr<cv::ml::KNearest> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_KNearest.setAlgorithmType", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setAlgorithmType(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_KNearest_setDefaultK(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::KNearest> * self1 = 0;
    if (!pyopencv_ml_KNearest_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_KNearest' or its derivative)");
    Ptr<cv::ml::KNearest> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_KNearest.setDefaultK", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setDefaultK(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_KNearest_setEmax(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::KNearest> * self1 = 0;
    if (!pyopencv_ml_KNearest_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_KNearest' or its derivative)");
    Ptr<cv::ml::KNearest> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_KNearest.setEmax", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setEmax(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_KNearest_setIsClassifier(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::KNearest> * self1 = 0;
    if (!pyopencv_ml_KNearest_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_KNearest' or its derivative)");
    Ptr<cv::ml::KNearest> _self_ = *(self1);
    bool val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:ml_KNearest.setIsClassifier", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setIsClassifier(val));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (ml_KNearest)

static PyGetSetDef pyopencv_ml_KNearest_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_ml_KNearest_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_KNearest_create_static, METH_STATIC), "create() -> retval\n.   @brief Creates the empty model\n.   \n.       The static method creates empty %KNearest classifier. It should be then trained using StatModel::train method."},
    {"findNearest", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_KNearest_findNearest, 0), "findNearest(samples, k[, results[, neighborResponses[, dist]]]) -> retval, results, neighborResponses, dist\n.   @brief Finds the neighbors and predicts responses for input vectors.\n.   \n.       @param samples Input samples stored by rows. It is a single-precision floating-point matrix of\n.           `<number_of_samples> * k` size.\n.       @param k Number of used nearest neighbors. Should be greater than 1.\n.       @param results Vector with results of prediction (regression or classification) for each input\n.           sample. It is a single-precision floating-point vector with `<number_of_samples>` elements.\n.       @param neighborResponses Optional output values for corresponding neighbors. It is a single-\n.           precision floating-point matrix of `<number_of_samples> * k` size.\n.       @param dist Optional output distances from the input vectors to the corresponding neighbors. It\n.           is a single-precision floating-point matrix of `<number_of_samples> * k` size.\n.   \n.       For each input vector (a row of the matrix samples), the method finds the k nearest neighbors.\n.       In case of regression, the predicted result is a mean value of the particular vector's neighbor\n.       responses. In case of classification, the class is determined by voting.\n.   \n.       For each input vector, the neighbors are sorted by their distances to the vector.\n.   \n.       In case of C++ interface you can use output pointers to empty matrices and the function will\n.       allocate memory itself.\n.   \n.       If only a single input vector is passed, all output matrices are optional and the predicted\n.       value is returned by the method.\n.   \n.       The function is parallelized with the TBB library."},
    {"getAlgorithmType", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_KNearest_getAlgorithmType, 0), "getAlgorithmType() -> retval\n.   @see setAlgorithmType"},
    {"getDefaultK", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_KNearest_getDefaultK, 0), "getDefaultK() -> retval\n.   @see setDefaultK"},
    {"getEmax", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_KNearest_getEmax, 0), "getEmax() -> retval\n.   @see setEmax"},
    {"getIsClassifier", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_KNearest_getIsClassifier, 0), "getIsClassifier() -> retval\n.   @see setIsClassifier"},
    {"load", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_KNearest_load_static, METH_STATIC), "load(filepath) -> retval\n.   @brief Loads and creates a serialized knearest from a file\n.        *\n.        * Use KNearest::save to serialize and store an KNearest to disk.\n.        * Load the KNearest from this file again, by calling this function with the path to the file.\n.        *\n.        * @param filepath path to serialized KNearest"},
    {"setAlgorithmType", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_KNearest_setAlgorithmType, 0), "setAlgorithmType(val) -> None\n.   @copybrief getAlgorithmType @see getAlgorithmType"},
    {"setDefaultK", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_KNearest_setDefaultK, 0), "setDefaultK(val) -> None\n.   @copybrief getDefaultK @see getDefaultK"},
    {"setEmax", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_KNearest_setEmax, 0), "setEmax(val) -> None\n.   @copybrief getEmax @see getEmax"},
    {"setIsClassifier", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_KNearest_setIsClassifier, 0), "setIsClassifier(val) -> None\n.   @copybrief getIsClassifier @see getIsClassifier"},

    {NULL,          NULL}
};

// Converter (ml_KNearest)

template<>
struct PyOpenCV_Converter< Ptr<cv::ml::KNearest> >
{
    static PyObject* from(const Ptr<cv::ml::KNearest>& r)
    {
        return pyopencv_ml_KNearest_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::ml::KNearest>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::ml::KNearest> * dst_;
        if (pyopencv_ml_KNearest_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::ml::KNearest> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// ml_LogisticRegression (Generic)
//================================================================================

// GetSet (ml_LogisticRegression)



// Methods (ml_LogisticRegression)

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    Ptr<LogisticRegression> retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv::ml::LogisticRegression::create());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_getIterations(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::LogisticRegression> * self1 = 0;
    if (!pyopencv_ml_LogisticRegression_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    Ptr<cv::ml::LogisticRegression> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getIterations());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_getLearningRate(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::LogisticRegression> * self1 = 0;
    if (!pyopencv_ml_LogisticRegression_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    Ptr<cv::ml::LogisticRegression> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getLearningRate());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_getMiniBatchSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::LogisticRegression> * self1 = 0;
    if (!pyopencv_ml_LogisticRegression_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    Ptr<cv::ml::LogisticRegression> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMiniBatchSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_getRegularization(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::LogisticRegression> * self1 = 0;
    if (!pyopencv_ml_LogisticRegression_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    Ptr<cv::ml::LogisticRegression> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getRegularization());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_getTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::LogisticRegression> * self1 = 0;
    if (!pyopencv_ml_LogisticRegression_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    Ptr<cv::ml::LogisticRegression> _self_ = *(self1);
    TermCriteria retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTermCriteria());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_getTrainMethod(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::LogisticRegression> * self1 = 0;
    if (!pyopencv_ml_LogisticRegression_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    Ptr<cv::ml::LogisticRegression> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTrainMethod());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_get_learnt_thetas(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::LogisticRegression> * self1 = 0;
    if (!pyopencv_ml_LogisticRegression_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    Ptr<cv::ml::LogisticRegression> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->get_learnt_thetas());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_load_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    PyObject* pyobj_filepath = NULL;
    String filepath;
    PyObject* pyobj_nodeName = NULL;
    String nodeName;
    Ptr<LogisticRegression> retval;

    const char* keywords[] = { "filepath", "nodeName", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:ml_LogisticRegression.load", (char**)keywords, &pyobj_filepath, &pyobj_nodeName) &&
        pyopencv_to(pyobj_filepath, filepath, ArgInfo("filepath", 0)) &&
        pyopencv_to(pyobj_nodeName, nodeName, ArgInfo("nodeName", 0)) )
    {
        ERRWRAP2(retval = cv::ml::LogisticRegression::load(filepath, nodeName));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::LogisticRegression> * self1 = 0;
    if (!pyopencv_ml_LogisticRegression_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    Ptr<cv::ml::LogisticRegression> _self_ = *(self1);
    {
    PyObject* pyobj_samples = NULL;
    Mat samples;
    PyObject* pyobj_results = NULL;
    Mat results;
    int flags=0;
    float retval;

    const char* keywords[] = { "samples", "results", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Oi:ml_LogisticRegression.predict", (char**)keywords, &pyobj_samples, &pyobj_results, &flags) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_results, results, ArgInfo("results", 1)) )
    {
        ERRWRAP2(retval = _self_->predict(samples, results, flags));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(results));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    UMat samples;
    PyObject* pyobj_results = NULL;
    UMat results;
    int flags=0;
    float retval;

    const char* keywords[] = { "samples", "results", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Oi:ml_LogisticRegression.predict", (char**)keywords, &pyobj_samples, &pyobj_results, &flags) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_results, results, ArgInfo("results", 1)) )
    {
        ERRWRAP2(retval = _self_->predict(samples, results, flags));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(results));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_setIterations(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::LogisticRegression> * self1 = 0;
    if (!pyopencv_ml_LogisticRegression_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    Ptr<cv::ml::LogisticRegression> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_LogisticRegression.setIterations", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setIterations(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_setLearningRate(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::LogisticRegression> * self1 = 0;
    if (!pyopencv_ml_LogisticRegression_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    Ptr<cv::ml::LogisticRegression> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_LogisticRegression.setLearningRate", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setLearningRate(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_setMiniBatchSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::LogisticRegression> * self1 = 0;
    if (!pyopencv_ml_LogisticRegression_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    Ptr<cv::ml::LogisticRegression> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_LogisticRegression.setMiniBatchSize", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setMiniBatchSize(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_setRegularization(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::LogisticRegression> * self1 = 0;
    if (!pyopencv_ml_LogisticRegression_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    Ptr<cv::ml::LogisticRegression> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_LogisticRegression.setRegularization", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setRegularization(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_setTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::LogisticRegression> * self1 = 0;
    if (!pyopencv_ml_LogisticRegression_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    Ptr<cv::ml::LogisticRegression> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    TermCriteria val;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_LogisticRegression.setTermCriteria", (char**)keywords, &pyobj_val) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setTermCriteria(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_LogisticRegression_setTrainMethod(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::LogisticRegression> * self1 = 0;
    if (!pyopencv_ml_LogisticRegression_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_LogisticRegression' or its derivative)");
    Ptr<cv::ml::LogisticRegression> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_LogisticRegression.setTrainMethod", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setTrainMethod(val));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (ml_LogisticRegression)

static PyGetSetDef pyopencv_ml_LogisticRegression_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_ml_LogisticRegression_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_LogisticRegression_create_static, METH_STATIC), "create() -> retval\n.   @brief Creates empty model.\n.   \n.       Creates Logistic Regression model with parameters given."},
    {"getIterations", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_LogisticRegression_getIterations, 0), "getIterations() -> retval\n.   @see setIterations"},
    {"getLearningRate", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_LogisticRegression_getLearningRate, 0), "getLearningRate() -> retval\n.   @see setLearningRate"},
    {"getMiniBatchSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_LogisticRegression_getMiniBatchSize, 0), "getMiniBatchSize() -> retval\n.   @see setMiniBatchSize"},
    {"getRegularization", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_LogisticRegression_getRegularization, 0), "getRegularization() -> retval\n.   @see setRegularization"},
    {"getTermCriteria", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_LogisticRegression_getTermCriteria, 0), "getTermCriteria() -> retval\n.   @see setTermCriteria"},
    {"getTrainMethod", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_LogisticRegression_getTrainMethod, 0), "getTrainMethod() -> retval\n.   @see setTrainMethod"},
    {"get_learnt_thetas", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_LogisticRegression_get_learnt_thetas, 0), "get_learnt_thetas() -> retval\n.   @brief This function returns the trained parameters arranged across rows.\n.   \n.       For a two class classifcation problem, it returns a row matrix. It returns learnt parameters of\n.       the Logistic Regression as a matrix of type CV_32F."},
    {"load", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_LogisticRegression_load_static, METH_STATIC), "load(filepath[, nodeName]) -> retval\n.   @brief Loads and creates a serialized LogisticRegression from a file\n.        *\n.        * Use LogisticRegression::save to serialize and store an LogisticRegression to disk.\n.        * Load the LogisticRegression from this file again, by calling this function with the path to the file.\n.        * Optionally specify the node for the file containing the classifier\n.        *\n.        * @param filepath path to serialized LogisticRegression\n.        * @param nodeName name of node containing the classifier"},
    {"predict", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_LogisticRegression_predict, 0), "predict(samples[, results[, flags]]) -> retval, results\n.   @brief Predicts responses for input samples and returns a float type.\n.   \n.       @param samples The input data for the prediction algorithm. Matrix [m x n], where each row\n.           contains variables (features) of one object being classified. Should have data type CV_32F.\n.       @param results Predicted labels as a column matrix of type CV_32S.\n.       @param flags Not used."},
    {"setIterations", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_LogisticRegression_setIterations, 0), "setIterations(val) -> None\n.   @copybrief getIterations @see getIterations"},
    {"setLearningRate", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_LogisticRegression_setLearningRate, 0), "setLearningRate(val) -> None\n.   @copybrief getLearningRate @see getLearningRate"},
    {"setMiniBatchSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_LogisticRegression_setMiniBatchSize, 0), "setMiniBatchSize(val) -> None\n.   @copybrief getMiniBatchSize @see getMiniBatchSize"},
    {"setRegularization", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_LogisticRegression_setRegularization, 0), "setRegularization(val) -> None\n.   @copybrief getRegularization @see getRegularization"},
    {"setTermCriteria", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_LogisticRegression_setTermCriteria, 0), "setTermCriteria(val) -> None\n.   @copybrief getTermCriteria @see getTermCriteria"},
    {"setTrainMethod", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_LogisticRegression_setTrainMethod, 0), "setTrainMethod(val) -> None\n.   @copybrief getTrainMethod @see getTrainMethod"},

    {NULL,          NULL}
};

// Converter (ml_LogisticRegression)

template<>
struct PyOpenCV_Converter< Ptr<cv::ml::LogisticRegression> >
{
    static PyObject* from(const Ptr<cv::ml::LogisticRegression>& r)
    {
        return pyopencv_ml_LogisticRegression_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::ml::LogisticRegression>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::ml::LogisticRegression> * dst_;
        if (pyopencv_ml_LogisticRegression_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::ml::LogisticRegression> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// ml_NormalBayesClassifier (Generic)
//================================================================================

// GetSet (ml_NormalBayesClassifier)



// Methods (ml_NormalBayesClassifier)

static PyObject* pyopencv_cv_ml_ml_NormalBayesClassifier_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    Ptr<NormalBayesClassifier> retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv::ml::NormalBayesClassifier::create());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_NormalBayesClassifier_load_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    PyObject* pyobj_filepath = NULL;
    String filepath;
    PyObject* pyobj_nodeName = NULL;
    String nodeName;
    Ptr<NormalBayesClassifier> retval;

    const char* keywords[] = { "filepath", "nodeName", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:ml_NormalBayesClassifier.load", (char**)keywords, &pyobj_filepath, &pyobj_nodeName) &&
        pyopencv_to(pyobj_filepath, filepath, ArgInfo("filepath", 0)) &&
        pyopencv_to(pyobj_nodeName, nodeName, ArgInfo("nodeName", 0)) )
    {
        ERRWRAP2(retval = cv::ml::NormalBayesClassifier::load(filepath, nodeName));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_NormalBayesClassifier_predictProb(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::NormalBayesClassifier> * self1 = 0;
    if (!pyopencv_ml_NormalBayesClassifier_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_NormalBayesClassifier' or its derivative)");
    Ptr<cv::ml::NormalBayesClassifier> _self_ = *(self1);
    {
    PyObject* pyobj_inputs = NULL;
    Mat inputs;
    PyObject* pyobj_outputs = NULL;
    Mat outputs;
    PyObject* pyobj_outputProbs = NULL;
    Mat outputProbs;
    int flags=0;
    float retval;

    const char* keywords[] = { "inputs", "outputs", "outputProbs", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOi:ml_NormalBayesClassifier.predictProb", (char**)keywords, &pyobj_inputs, &pyobj_outputs, &pyobj_outputProbs, &flags) &&
        pyopencv_to(pyobj_inputs, inputs, ArgInfo("inputs", 0)) &&
        pyopencv_to(pyobj_outputs, outputs, ArgInfo("outputs", 1)) &&
        pyopencv_to(pyobj_outputProbs, outputProbs, ArgInfo("outputProbs", 1)) )
    {
        ERRWRAP2(retval = _self_->predictProb(inputs, outputs, outputProbs, flags));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(outputs), pyopencv_from(outputProbs));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_inputs = NULL;
    UMat inputs;
    PyObject* pyobj_outputs = NULL;
    UMat outputs;
    PyObject* pyobj_outputProbs = NULL;
    UMat outputProbs;
    int flags=0;
    float retval;

    const char* keywords[] = { "inputs", "outputs", "outputProbs", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|OOi:ml_NormalBayesClassifier.predictProb", (char**)keywords, &pyobj_inputs, &pyobj_outputs, &pyobj_outputProbs, &flags) &&
        pyopencv_to(pyobj_inputs, inputs, ArgInfo("inputs", 0)) &&
        pyopencv_to(pyobj_outputs, outputs, ArgInfo("outputs", 1)) &&
        pyopencv_to(pyobj_outputProbs, outputProbs, ArgInfo("outputProbs", 1)) )
    {
        ERRWRAP2(retval = _self_->predictProb(inputs, outputs, outputProbs, flags));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(outputs), pyopencv_from(outputProbs));
    }
    }

    return NULL;
}



// Tables (ml_NormalBayesClassifier)

static PyGetSetDef pyopencv_ml_NormalBayesClassifier_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_ml_NormalBayesClassifier_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_NormalBayesClassifier_create_static, METH_STATIC), "create() -> retval\n.   Creates empty model\n.   Use StatModel::train to train the model after creation."},
    {"load", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_NormalBayesClassifier_load_static, METH_STATIC), "load(filepath[, nodeName]) -> retval\n.   @brief Loads and creates a serialized NormalBayesClassifier from a file\n.        *\n.        * Use NormalBayesClassifier::save to serialize and store an NormalBayesClassifier to disk.\n.        * Load the NormalBayesClassifier from this file again, by calling this function with the path to the file.\n.        * Optionally specify the node for the file containing the classifier\n.        *\n.        * @param filepath path to serialized NormalBayesClassifier\n.        * @param nodeName name of node containing the classifier"},
    {"predictProb", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_NormalBayesClassifier_predictProb, 0), "predictProb(inputs[, outputs[, outputProbs[, flags]]]) -> retval, outputs, outputProbs\n.   @brief Predicts the response for sample(s).\n.   \n.       The method estimates the most probable classes for input vectors. Input vectors (one or more)\n.       are stored as rows of the matrix inputs. In case of multiple input vectors, there should be one\n.       output vector outputs. The predicted class for a single input vector is returned by the method.\n.       The vector outputProbs contains the output probabilities corresponding to each element of\n.       result."},

    {NULL,          NULL}
};

// Converter (ml_NormalBayesClassifier)

template<>
struct PyOpenCV_Converter< Ptr<cv::ml::NormalBayesClassifier> >
{
    static PyObject* from(const Ptr<cv::ml::NormalBayesClassifier>& r)
    {
        return pyopencv_ml_NormalBayesClassifier_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::ml::NormalBayesClassifier>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::ml::NormalBayesClassifier> * dst_;
        if (pyopencv_ml_NormalBayesClassifier_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::ml::NormalBayesClassifier> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// ml_ParamGrid (Generic)
//================================================================================

// GetSet (ml_ParamGrid)


static PyObject* pyopencv_ml_ParamGrid_get_logStep(pyopencv_ml_ParamGrid_t* p, void *closure)
{
    return pyopencv_from(p->v->logStep);
}

static int pyopencv_ml_ParamGrid_set_logStep(pyopencv_ml_ParamGrid_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the logStep attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->logStep, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_ml_ParamGrid_get_maxVal(pyopencv_ml_ParamGrid_t* p, void *closure)
{
    return pyopencv_from(p->v->maxVal);
}

static int pyopencv_ml_ParamGrid_set_maxVal(pyopencv_ml_ParamGrid_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxVal attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->maxVal, ArgInfo("value", false)) ? 0 : -1;
}

static PyObject* pyopencv_ml_ParamGrid_get_minVal(pyopencv_ml_ParamGrid_t* p, void *closure)
{
    return pyopencv_from(p->v->minVal);
}

static int pyopencv_ml_ParamGrid_set_minVal(pyopencv_ml_ParamGrid_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minVal attribute");
        return -1;
    }
    return pyopencv_to(value, p->v->minVal, ArgInfo("value", false)) ? 0 : -1;
}


// Methods (ml_ParamGrid)

static PyObject* pyopencv_cv_ml_ml_ParamGrid_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    double minVal=0.;
    double maxVal=0.;
    double logstep=1.;
    Ptr<ParamGrid> retval;

    const char* keywords[] = { "minVal", "maxVal", "logstep", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|ddd:ml_ParamGrid.create", (char**)keywords, &minVal, &maxVal, &logstep) )
    {
        ERRWRAP2(retval = cv::ml::ParamGrid::create(minVal, maxVal, logstep));
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (ml_ParamGrid)

static PyGetSetDef pyopencv_ml_ParamGrid_getseters[] =
{
    {(char*)"logStep", (getter)pyopencv_ml_ParamGrid_get_logStep, (setter)pyopencv_ml_ParamGrid_set_logStep, (char*)"logStep", NULL},
    {(char*)"maxVal", (getter)pyopencv_ml_ParamGrid_get_maxVal, (setter)pyopencv_ml_ParamGrid_set_maxVal, (char*)"maxVal", NULL},
    {(char*)"minVal", (getter)pyopencv_ml_ParamGrid_get_minVal, (setter)pyopencv_ml_ParamGrid_set_minVal, (char*)"minVal", NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_ml_ParamGrid_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_ParamGrid_create_static, METH_STATIC), "create([, minVal[, maxVal[, logstep]]]) -> retval\n.   @brief Creates a ParamGrid Ptr that can be given to the %SVM::trainAuto method\n.   \n.       @param minVal minimum value of the parameter grid\n.       @param maxVal maximum value of the parameter grid\n.       @param logstep Logarithmic step for iterating the statmodel parameter"},

    {NULL,          NULL}
};

// Converter (ml_ParamGrid)

template<>
struct PyOpenCV_Converter< Ptr<cv::ml::ParamGrid> >
{
    static PyObject* from(const Ptr<cv::ml::ParamGrid>& r)
    {
        return pyopencv_ml_ParamGrid_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::ml::ParamGrid>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::ml::ParamGrid> * dst_;
        if (pyopencv_ml_ParamGrid_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::ml::ParamGrid> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// ml_RTrees (Generic)
//================================================================================

// GetSet (ml_RTrees)



// Methods (ml_RTrees)

static PyObject* pyopencv_cv_ml_ml_RTrees_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    Ptr<RTrees> retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv::ml::RTrees::create());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_RTrees_getActiveVarCount(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::RTrees> * self1 = 0;
    if (!pyopencv_ml_RTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_RTrees' or its derivative)");
    Ptr<cv::ml::RTrees> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getActiveVarCount());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_RTrees_getCalculateVarImportance(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::RTrees> * self1 = 0;
    if (!pyopencv_ml_RTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_RTrees' or its derivative)");
    Ptr<cv::ml::RTrees> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getCalculateVarImportance());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_RTrees_getTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::RTrees> * self1 = 0;
    if (!pyopencv_ml_RTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_RTrees' or its derivative)");
    Ptr<cv::ml::RTrees> _self_ = *(self1);
    TermCriteria retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTermCriteria());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_RTrees_getVarImportance(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::RTrees> * self1 = 0;
    if (!pyopencv_ml_RTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_RTrees' or its derivative)");
    Ptr<cv::ml::RTrees> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarImportance());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_RTrees_getVotes(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::RTrees> * self1 = 0;
    if (!pyopencv_ml_RTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_RTrees' or its derivative)");
    Ptr<cv::ml::RTrees> _self_ = *(self1);
    {
    PyObject* pyobj_samples = NULL;
    Mat samples;
    PyObject* pyobj_results = NULL;
    Mat results;
    int flags=0;

    const char* keywords[] = { "samples", "flags", "results", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|O:ml_RTrees.getVotes", (char**)keywords, &pyobj_samples, &flags, &pyobj_results) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_results, results, ArgInfo("results", 1)) )
    {
        ERRWRAP2(_self_->getVotes(samples, results, flags));
        return pyopencv_from(results);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    UMat samples;
    PyObject* pyobj_results = NULL;
    UMat results;
    int flags=0;

    const char* keywords[] = { "samples", "flags", "results", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oi|O:ml_RTrees.getVotes", (char**)keywords, &pyobj_samples, &flags, &pyobj_results) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_results, results, ArgInfo("results", 1)) )
    {
        ERRWRAP2(_self_->getVotes(samples, results, flags));
        return pyopencv_from(results);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_RTrees_load_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    PyObject* pyobj_filepath = NULL;
    String filepath;
    PyObject* pyobj_nodeName = NULL;
    String nodeName;
    Ptr<RTrees> retval;

    const char* keywords[] = { "filepath", "nodeName", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:ml_RTrees.load", (char**)keywords, &pyobj_filepath, &pyobj_nodeName) &&
        pyopencv_to(pyobj_filepath, filepath, ArgInfo("filepath", 0)) &&
        pyopencv_to(pyobj_nodeName, nodeName, ArgInfo("nodeName", 0)) )
    {
        ERRWRAP2(retval = cv::ml::RTrees::load(filepath, nodeName));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_RTrees_setActiveVarCount(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::RTrees> * self1 = 0;
    if (!pyopencv_ml_RTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_RTrees' or its derivative)");
    Ptr<cv::ml::RTrees> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_RTrees.setActiveVarCount", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setActiveVarCount(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_RTrees_setCalculateVarImportance(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::RTrees> * self1 = 0;
    if (!pyopencv_ml_RTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_RTrees' or its derivative)");
    Ptr<cv::ml::RTrees> _self_ = *(self1);
    bool val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "b:ml_RTrees.setCalculateVarImportance", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setCalculateVarImportance(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_RTrees_setTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::RTrees> * self1 = 0;
    if (!pyopencv_ml_RTrees_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_RTrees' or its derivative)");
    Ptr<cv::ml::RTrees> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    TermCriteria val;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_RTrees.setTermCriteria", (char**)keywords, &pyobj_val) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setTermCriteria(val));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (ml_RTrees)

static PyGetSetDef pyopencv_ml_RTrees_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_ml_RTrees_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_RTrees_create_static, METH_STATIC), "create() -> retval\n.   Creates the empty model.\n.       Use StatModel::train to train the model, StatModel::train to create and train the model,\n.       Algorithm::load to load the pre-trained model."},
    {"getActiveVarCount", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_RTrees_getActiveVarCount, 0), "getActiveVarCount() -> retval\n.   @see setActiveVarCount"},
    {"getCalculateVarImportance", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_RTrees_getCalculateVarImportance, 0), "getCalculateVarImportance() -> retval\n.   @see setCalculateVarImportance"},
    {"getTermCriteria", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_RTrees_getTermCriteria, 0), "getTermCriteria() -> retval\n.   @see setTermCriteria"},
    {"getVarImportance", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_RTrees_getVarImportance, 0), "getVarImportance() -> retval\n.   Returns the variable importance array.\n.       The method returns the variable importance vector, computed at the training stage when\n.       CalculateVarImportance is set to true. If this flag was set to false, the empty matrix is\n.       returned."},
    {"getVotes", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_RTrees_getVotes, 0), "getVotes(samples, flags[, results]) -> results\n.   Returns the result of each individual tree in the forest.\n.       In case the model is a regression problem, the method will return each of the trees'\n.       results for each of the sample cases. If the model is a classifier, it will return\n.       a Mat with samples + 1 rows, where the first row gives the class number and the\n.       following rows return the votes each class had for each sample.\n.           @param samples Array containing the samples for which votes will be calculated.\n.           @param results Array where the result of the calculation will be written.\n.           @param flags Flags for defining the type of RTrees."},
    {"load", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_RTrees_load_static, METH_STATIC), "load(filepath[, nodeName]) -> retval\n.   @brief Loads and creates a serialized RTree from a file\n.        *\n.        * Use RTree::save to serialize and store an RTree to disk.\n.        * Load the RTree from this file again, by calling this function with the path to the file.\n.        * Optionally specify the node for the file containing the classifier\n.        *\n.        * @param filepath path to serialized RTree\n.        * @param nodeName name of node containing the classifier"},
    {"setActiveVarCount", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_RTrees_setActiveVarCount, 0), "setActiveVarCount(val) -> None\n.   @copybrief getActiveVarCount @see getActiveVarCount"},
    {"setCalculateVarImportance", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_RTrees_setCalculateVarImportance, 0), "setCalculateVarImportance(val) -> None\n.   @copybrief getCalculateVarImportance @see getCalculateVarImportance"},
    {"setTermCriteria", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_RTrees_setTermCriteria, 0), "setTermCriteria(val) -> None\n.   @copybrief getTermCriteria @see getTermCriteria"},

    {NULL,          NULL}
};

// Converter (ml_RTrees)

template<>
struct PyOpenCV_Converter< Ptr<cv::ml::RTrees> >
{
    static PyObject* from(const Ptr<cv::ml::RTrees>& r)
    {
        return pyopencv_ml_RTrees_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::ml::RTrees>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::ml::RTrees> * dst_;
        if (pyopencv_ml_RTrees_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::ml::RTrees> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// ml_SVM (Generic)
//================================================================================

// GetSet (ml_SVM)



// Methods (ml_SVM)

static PyObject* pyopencv_cv_ml_ml_SVM_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    Ptr<SVM> retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv::ml::SVM::create());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getC(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getC());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getClassWeights(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    cv::Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getClassWeights());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getCoef0(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getCoef0());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getDecisionFunction(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    {
    int i=0;
    PyObject* pyobj_alpha = NULL;
    Mat alpha;
    PyObject* pyobj_svidx = NULL;
    Mat svidx;
    double retval;

    const char* keywords[] = { "i", "alpha", "svidx", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i|OO:ml_SVM.getDecisionFunction", (char**)keywords, &i, &pyobj_alpha, &pyobj_svidx) &&
        pyopencv_to(pyobj_alpha, alpha, ArgInfo("alpha", 1)) &&
        pyopencv_to(pyobj_svidx, svidx, ArgInfo("svidx", 1)) )
    {
        ERRWRAP2(retval = _self_->getDecisionFunction(i, alpha, svidx));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(alpha), pyopencv_from(svidx));
    }
    }
    PyErr_Clear();

    {
    int i=0;
    PyObject* pyobj_alpha = NULL;
    UMat alpha;
    PyObject* pyobj_svidx = NULL;
    UMat svidx;
    double retval;

    const char* keywords[] = { "i", "alpha", "svidx", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i|OO:ml_SVM.getDecisionFunction", (char**)keywords, &i, &pyobj_alpha, &pyobj_svidx) &&
        pyopencv_to(pyobj_alpha, alpha, ArgInfo("alpha", 1)) &&
        pyopencv_to(pyobj_svidx, svidx, ArgInfo("svidx", 1)) )
    {
        ERRWRAP2(retval = _self_->getDecisionFunction(i, alpha, svidx));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(alpha), pyopencv_from(svidx));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getDefaultGridPtr_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    int param_id=0;
    Ptr<ParamGrid> retval;

    const char* keywords[] = { "param_id", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_SVM.getDefaultGridPtr", (char**)keywords, &param_id) )
    {
        ERRWRAP2(retval = cv::ml::SVM::getDefaultGridPtr(param_id));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getDegree(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDegree());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getGamma(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getGamma());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getKernelType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getKernelType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getNu(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNu());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getP(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    double retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getP());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getSupportVectors(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSupportVectors());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    cv::TermCriteria retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTermCriteria());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_getUncompressedSupportVectors(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getUncompressedSupportVectors());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_load_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    PyObject* pyobj_filepath = NULL;
    String filepath;
    Ptr<SVM> retval;

    const char* keywords[] = { "filepath", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_SVM.load", (char**)keywords, &pyobj_filepath) &&
        pyopencv_to(pyobj_filepath, filepath, ArgInfo("filepath", 0)) )
    {
        ERRWRAP2(retval = cv::ml::SVM::load(filepath));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_setC(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_SVM.setC", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setC(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_setClassWeights(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    {
    PyObject* pyobj_val = NULL;
    Mat val;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_SVM.setClassWeights", (char**)keywords, &pyobj_val) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setClassWeights(val));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_val = NULL;
    Mat val;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_SVM.setClassWeights", (char**)keywords, &pyobj_val) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setClassWeights(val));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_setCoef0(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_SVM.setCoef0", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setCoef0(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_setDegree(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_SVM.setDegree", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setDegree(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_setGamma(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_SVM.setGamma", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setGamma(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_setKernel(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    int kernelType=0;

    const char* keywords[] = { "kernelType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_SVM.setKernel", (char**)keywords, &kernelType) )
    {
        ERRWRAP2(_self_->setKernel(kernelType));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_setNu(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_SVM.setNu", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setNu(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_setP(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    double val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d:ml_SVM.setP", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setP(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_setTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    TermCriteria val;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_SVM.setTermCriteria", (char**)keywords, &pyobj_val) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setTermCriteria(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_setType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_SVM.setType", (char**)keywords, &val) )
    {
        ERRWRAP2(_self_->setType(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVM_trainAuto(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVM> * self1 = 0;
    if (!pyopencv_ml_SVM_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVM' or its derivative)");
    Ptr<cv::ml::SVM> _self_ = *(self1);
    {
    PyObject* pyobj_samples = NULL;
    Mat samples;
    int layout=0;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    int kFold=10;
    PyObject* pyobj_Cgrid = NULL;
    Ptr<ParamGrid> Cgrid=SVM::getDefaultGridPtr(SVM::C);
    PyObject* pyobj_gammaGrid = NULL;
    Ptr<ParamGrid> gammaGrid=SVM::getDefaultGridPtr(SVM::GAMMA);
    PyObject* pyobj_pGrid = NULL;
    Ptr<ParamGrid> pGrid=SVM::getDefaultGridPtr(SVM::P);
    PyObject* pyobj_nuGrid = NULL;
    Ptr<ParamGrid> nuGrid=SVM::getDefaultGridPtr(SVM::NU);
    PyObject* pyobj_coeffGrid = NULL;
    Ptr<ParamGrid> coeffGrid=SVM::getDefaultGridPtr(SVM::COEF);
    PyObject* pyobj_degreeGrid = NULL;
    Ptr<ParamGrid> degreeGrid=SVM::getDefaultGridPtr(SVM::DEGREE);
    bool balanced=false;
    bool retval;

    const char* keywords[] = { "samples", "layout", "responses", "kFold", "Cgrid", "gammaGrid", "pGrid", "nuGrid", "coeffGrid", "degreeGrid", "balanced", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiO|iOOOOOOb:ml_SVM.trainAuto", (char**)keywords, &pyobj_samples, &layout, &pyobj_responses, &kFold, &pyobj_Cgrid, &pyobj_gammaGrid, &pyobj_pGrid, &pyobj_nuGrid, &pyobj_coeffGrid, &pyobj_degreeGrid, &balanced) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_responses, responses, ArgInfo("responses", 0)) &&
        pyopencv_to(pyobj_Cgrid, Cgrid, ArgInfo("Cgrid", 0)) &&
        pyopencv_to(pyobj_gammaGrid, gammaGrid, ArgInfo("gammaGrid", 0)) &&
        pyopencv_to(pyobj_pGrid, pGrid, ArgInfo("pGrid", 0)) &&
        pyopencv_to(pyobj_nuGrid, nuGrid, ArgInfo("nuGrid", 0)) &&
        pyopencv_to(pyobj_coeffGrid, coeffGrid, ArgInfo("coeffGrid", 0)) &&
        pyopencv_to(pyobj_degreeGrid, degreeGrid, ArgInfo("degreeGrid", 0)) )
    {
        ERRWRAP2(retval = _self_->trainAuto(samples, layout, responses, kFold, Cgrid, gammaGrid, pGrid, nuGrid, coeffGrid, degreeGrid, balanced));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    UMat samples;
    int layout=0;
    PyObject* pyobj_responses = NULL;
    UMat responses;
    int kFold=10;
    PyObject* pyobj_Cgrid = NULL;
    Ptr<ParamGrid> Cgrid=SVM::getDefaultGridPtr(SVM::C);
    PyObject* pyobj_gammaGrid = NULL;
    Ptr<ParamGrid> gammaGrid=SVM::getDefaultGridPtr(SVM::GAMMA);
    PyObject* pyobj_pGrid = NULL;
    Ptr<ParamGrid> pGrid=SVM::getDefaultGridPtr(SVM::P);
    PyObject* pyobj_nuGrid = NULL;
    Ptr<ParamGrid> nuGrid=SVM::getDefaultGridPtr(SVM::NU);
    PyObject* pyobj_coeffGrid = NULL;
    Ptr<ParamGrid> coeffGrid=SVM::getDefaultGridPtr(SVM::COEF);
    PyObject* pyobj_degreeGrid = NULL;
    Ptr<ParamGrid> degreeGrid=SVM::getDefaultGridPtr(SVM::DEGREE);
    bool balanced=false;
    bool retval;

    const char* keywords[] = { "samples", "layout", "responses", "kFold", "Cgrid", "gammaGrid", "pGrid", "nuGrid", "coeffGrid", "degreeGrid", "balanced", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiO|iOOOOOOb:ml_SVM.trainAuto", (char**)keywords, &pyobj_samples, &layout, &pyobj_responses, &kFold, &pyobj_Cgrid, &pyobj_gammaGrid, &pyobj_pGrid, &pyobj_nuGrid, &pyobj_coeffGrid, &pyobj_degreeGrid, &balanced) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_responses, responses, ArgInfo("responses", 0)) &&
        pyopencv_to(pyobj_Cgrid, Cgrid, ArgInfo("Cgrid", 0)) &&
        pyopencv_to(pyobj_gammaGrid, gammaGrid, ArgInfo("gammaGrid", 0)) &&
        pyopencv_to(pyobj_pGrid, pGrid, ArgInfo("pGrid", 0)) &&
        pyopencv_to(pyobj_nuGrid, nuGrid, ArgInfo("nuGrid", 0)) &&
        pyopencv_to(pyobj_coeffGrid, coeffGrid, ArgInfo("coeffGrid", 0)) &&
        pyopencv_to(pyobj_degreeGrid, degreeGrid, ArgInfo("degreeGrid", 0)) )
    {
        ERRWRAP2(retval = _self_->trainAuto(samples, layout, responses, kFold, Cgrid, gammaGrid, pGrid, nuGrid, coeffGrid, degreeGrid, balanced));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}



// Tables (ml_SVM)

static PyGetSetDef pyopencv_ml_SVM_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_ml_SVM_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_create_static, METH_STATIC), "create() -> retval\n.   Creates empty model.\n.       Use StatModel::train to train the model. Since %SVM has several parameters, you may want to\n.   find the best parameters for your problem, it can be done with SVM::trainAuto."},
    {"getC", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_getC, 0), "getC() -> retval\n.   @see setC"},
    {"getClassWeights", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_getClassWeights, 0), "getClassWeights() -> retval\n.   @see setClassWeights"},
    {"getCoef0", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_getCoef0, 0), "getCoef0() -> retval\n.   @see setCoef0"},
    {"getDecisionFunction", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_getDecisionFunction, 0), "getDecisionFunction(i[, alpha[, svidx]]) -> retval, alpha, svidx\n.   @brief Retrieves the decision function\n.   \n.       @param i the index of the decision function. If the problem solved is regression, 1-class or\n.           2-class classification, then there will be just one decision function and the index should\n.           always be 0. Otherwise, in the case of N-class classification, there will be \\f$N(N-1)/2\\f$\n.           decision functions.\n.       @param alpha the optional output vector for weights, corresponding to different support vectors.\n.           In the case of linear %SVM all the alpha's will be 1's.\n.       @param svidx the optional output vector of indices of support vectors within the matrix of\n.           support vectors (which can be retrieved by SVM::getSupportVectors). In the case of linear\n.           %SVM each decision function consists of a single \"compressed\" support vector.\n.   \n.       The method returns rho parameter of the decision function, a scalar subtracted from the weighted\n.       sum of kernel responses."},
    {"getDefaultGridPtr", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_getDefaultGridPtr_static, METH_STATIC), "getDefaultGridPtr(param_id) -> retval\n.   @brief Generates a grid for %SVM parameters.\n.   \n.       @param param_id %SVM parameters IDs that must be one of the SVM::ParamTypes. The grid is\n.       generated for the parameter with this ID.\n.   \n.       The function generates a grid pointer for the specified parameter of the %SVM algorithm.\n.       The grid may be passed to the function SVM::trainAuto."},
    {"getDegree", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_getDegree, 0), "getDegree() -> retval\n.   @see setDegree"},
    {"getGamma", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_getGamma, 0), "getGamma() -> retval\n.   @see setGamma"},
    {"getKernelType", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_getKernelType, 0), "getKernelType() -> retval\n.   Type of a %SVM kernel.\n.   See SVM::KernelTypes. Default value is SVM::RBF."},
    {"getNu", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_getNu, 0), "getNu() -> retval\n.   @see setNu"},
    {"getP", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_getP, 0), "getP() -> retval\n.   @see setP"},
    {"getSupportVectors", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_getSupportVectors, 0), "getSupportVectors() -> retval\n.   @brief Retrieves all the support vectors\n.   \n.       The method returns all the support vectors as a floating-point matrix, where support vectors are\n.       stored as matrix rows."},
    {"getTermCriteria", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_getTermCriteria, 0), "getTermCriteria() -> retval\n.   @see setTermCriteria"},
    {"getType", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_getType, 0), "getType() -> retval\n.   @see setType"},
    {"getUncompressedSupportVectors", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_getUncompressedSupportVectors, 0), "getUncompressedSupportVectors() -> retval\n.   @brief Retrieves all the uncompressed support vectors of a linear %SVM\n.   \n.       The method returns all the uncompressed support vectors of a linear %SVM that the compressed\n.       support vector, used for prediction, was derived from. They are returned in a floating-point\n.       matrix, where the support vectors are stored as matrix rows."},
    {"load", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_load_static, METH_STATIC), "load(filepath) -> retval\n.   @brief Loads and creates a serialized svm from a file\n.        *\n.        * Use SVM::save to serialize and store an SVM to disk.\n.        * Load the SVM from this file again, by calling this function with the path to the file.\n.        *\n.        * @param filepath path to serialized svm"},
    {"setC", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_setC, 0), "setC(val) -> None\n.   @copybrief getC @see getC"},
    {"setClassWeights", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_setClassWeights, 0), "setClassWeights(val) -> None\n.   @copybrief getClassWeights @see getClassWeights"},
    {"setCoef0", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_setCoef0, 0), "setCoef0(val) -> None\n.   @copybrief getCoef0 @see getCoef0"},
    {"setDegree", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_setDegree, 0), "setDegree(val) -> None\n.   @copybrief getDegree @see getDegree"},
    {"setGamma", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_setGamma, 0), "setGamma(val) -> None\n.   @copybrief getGamma @see getGamma"},
    {"setKernel", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_setKernel, 0), "setKernel(kernelType) -> None\n.   Initialize with one of predefined kernels.\n.   See SVM::KernelTypes."},
    {"setNu", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_setNu, 0), "setNu(val) -> None\n.   @copybrief getNu @see getNu"},
    {"setP", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_setP, 0), "setP(val) -> None\n.   @copybrief getP @see getP"},
    {"setTermCriteria", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_setTermCriteria, 0), "setTermCriteria(val) -> None\n.   @copybrief getTermCriteria @see getTermCriteria"},
    {"setType", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_setType, 0), "setType(val) -> None\n.   @copybrief getType @see getType"},
    {"trainAuto", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVM_trainAuto, 0), "trainAuto(samples, layout, responses[, kFold[, Cgrid[, gammaGrid[, pGrid[, nuGrid[, coeffGrid[, degreeGrid[, balanced]]]]]]]]) -> retval\n.   @brief Trains an %SVM with optimal parameters\n.   \n.       @param samples training samples\n.       @param layout See ml::SampleTypes.\n.       @param responses vector of responses associated with the training samples.\n.       @param kFold Cross-validation parameter. The training set is divided into kFold subsets. One\n.           subset is used to test the model, the others form the train set. So, the %SVM algorithm is\n.       @param Cgrid grid for C\n.       @param gammaGrid grid for gamma\n.       @param pGrid grid for p\n.       @param nuGrid grid for nu\n.       @param coeffGrid grid for coeff\n.       @param degreeGrid grid for degree\n.       @param balanced If true and the problem is 2-class classification then the method creates more\n.           balanced cross-validation subsets that is proportions between classes in subsets are close\n.           to such proportion in the whole train dataset.\n.   \n.       The method trains the %SVM model automatically by choosing the optimal parameters C, gamma, p,\n.       nu, coef0, degree. Parameters are considered optimal when the cross-validation\n.       estimate of the test set error is minimal.\n.   \n.       This function only makes use of SVM::getDefaultGrid for parameter optimization and thus only\n.       offers rudimentary parameter options.\n.   \n.       This function works for the classification (SVM::C_SVC or SVM::NU_SVC) as well as for the\n.       regression (SVM::EPS_SVR or SVM::NU_SVR). If it is SVM::ONE_CLASS, no optimization is made and\n.       the usual %SVM with parameters specified in params is executed."},

    {NULL,          NULL}
};

// Converter (ml_SVM)

template<>
struct PyOpenCV_Converter< Ptr<cv::ml::SVM> >
{
    static PyObject* from(const Ptr<cv::ml::SVM>& r)
    {
        return pyopencv_ml_SVM_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::ml::SVM>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::ml::SVM> * dst_;
        if (pyopencv_ml_SVM_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::ml::SVM> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// ml_SVMSGD (Generic)
//================================================================================

// GetSet (ml_SVMSGD)



// Methods (ml_SVMSGD)

static PyObject* pyopencv_cv_ml_ml_SVMSGD_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    Ptr<SVMSGD> retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv::ml::SVMSGD::create());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_getInitialStepSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVMSGD> * self1 = 0;
    if (!pyopencv_ml_SVMSGD_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    Ptr<cv::ml::SVMSGD> _self_ = *(self1);
    float retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getInitialStepSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_getMarginRegularization(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVMSGD> * self1 = 0;
    if (!pyopencv_ml_SVMSGD_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    Ptr<cv::ml::SVMSGD> _self_ = *(self1);
    float retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMarginRegularization());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_getMarginType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVMSGD> * self1 = 0;
    if (!pyopencv_ml_SVMSGD_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    Ptr<cv::ml::SVMSGD> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMarginType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_getShift(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVMSGD> * self1 = 0;
    if (!pyopencv_ml_SVMSGD_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    Ptr<cv::ml::SVMSGD> _self_ = *(self1);
    float retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getShift());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_getStepDecreasingPower(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVMSGD> * self1 = 0;
    if (!pyopencv_ml_SVMSGD_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    Ptr<cv::ml::SVMSGD> _self_ = *(self1);
    float retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getStepDecreasingPower());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_getSvmsgdType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVMSGD> * self1 = 0;
    if (!pyopencv_ml_SVMSGD_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    Ptr<cv::ml::SVMSGD> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSvmsgdType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_getTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVMSGD> * self1 = 0;
    if (!pyopencv_ml_SVMSGD_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    Ptr<cv::ml::SVMSGD> _self_ = *(self1);
    TermCriteria retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTermCriteria());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_getWeights(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVMSGD> * self1 = 0;
    if (!pyopencv_ml_SVMSGD_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    Ptr<cv::ml::SVMSGD> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getWeights());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_load_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    PyObject* pyobj_filepath = NULL;
    String filepath;
    PyObject* pyobj_nodeName = NULL;
    String nodeName;
    Ptr<SVMSGD> retval;

    const char* keywords[] = { "filepath", "nodeName", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|O:ml_SVMSGD.load", (char**)keywords, &pyobj_filepath, &pyobj_nodeName) &&
        pyopencv_to(pyobj_filepath, filepath, ArgInfo("filepath", 0)) &&
        pyopencv_to(pyobj_nodeName, nodeName, ArgInfo("nodeName", 0)) )
    {
        ERRWRAP2(retval = cv::ml::SVMSGD::load(filepath, nodeName));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_setInitialStepSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVMSGD> * self1 = 0;
    if (!pyopencv_ml_SVMSGD_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    Ptr<cv::ml::SVMSGD> _self_ = *(self1);
    float InitialStepSize=0.f;

    const char* keywords[] = { "InitialStepSize", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:ml_SVMSGD.setInitialStepSize", (char**)keywords, &InitialStepSize) )
    {
        ERRWRAP2(_self_->setInitialStepSize(InitialStepSize));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_setMarginRegularization(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVMSGD> * self1 = 0;
    if (!pyopencv_ml_SVMSGD_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    Ptr<cv::ml::SVMSGD> _self_ = *(self1);
    float marginRegularization=0.f;

    const char* keywords[] = { "marginRegularization", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:ml_SVMSGD.setMarginRegularization", (char**)keywords, &marginRegularization) )
    {
        ERRWRAP2(_self_->setMarginRegularization(marginRegularization));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_setMarginType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVMSGD> * self1 = 0;
    if (!pyopencv_ml_SVMSGD_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    Ptr<cv::ml::SVMSGD> _self_ = *(self1);
    int marginType=0;

    const char* keywords[] = { "marginType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_SVMSGD.setMarginType", (char**)keywords, &marginType) )
    {
        ERRWRAP2(_self_->setMarginType(marginType));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_setOptimalParameters(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVMSGD> * self1 = 0;
    if (!pyopencv_ml_SVMSGD_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    Ptr<cv::ml::SVMSGD> _self_ = *(self1);
    int svmsgdType=SVMSGD::ASGD;
    int marginType=SVMSGD::SOFT_MARGIN;

    const char* keywords[] = { "svmsgdType", "marginType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|ii:ml_SVMSGD.setOptimalParameters", (char**)keywords, &svmsgdType, &marginType) )
    {
        ERRWRAP2(_self_->setOptimalParameters(svmsgdType, marginType));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_setStepDecreasingPower(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVMSGD> * self1 = 0;
    if (!pyopencv_ml_SVMSGD_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    Ptr<cv::ml::SVMSGD> _self_ = *(self1);
    float stepDecreasingPower=0.f;

    const char* keywords[] = { "stepDecreasingPower", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "f:ml_SVMSGD.setStepDecreasingPower", (char**)keywords, &stepDecreasingPower) )
    {
        ERRWRAP2(_self_->setStepDecreasingPower(stepDecreasingPower));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_setSvmsgdType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVMSGD> * self1 = 0;
    if (!pyopencv_ml_SVMSGD_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    Ptr<cv::ml::SVMSGD> _self_ = *(self1);
    int svmsgdType=0;

    const char* keywords[] = { "svmsgdType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_SVMSGD.setSvmsgdType", (char**)keywords, &svmsgdType) )
    {
        ERRWRAP2(_self_->setSvmsgdType(svmsgdType));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_SVMSGD_setTermCriteria(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::SVMSGD> * self1 = 0;
    if (!pyopencv_ml_SVMSGD_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_SVMSGD' or its derivative)");
    Ptr<cv::ml::SVMSGD> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    TermCriteria val;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_SVMSGD.setTermCriteria", (char**)keywords, &pyobj_val) &&
        pyopencv_to(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setTermCriteria(val));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (ml_SVMSGD)

static PyGetSetDef pyopencv_ml_SVMSGD_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_ml_SVMSGD_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVMSGD_create_static, METH_STATIC), "create() -> retval\n.   @brief Creates empty model.\n.        * Use StatModel::train to train the model. Since %SVMSGD has several parameters, you may want to\n.        * find the best parameters for your problem or use setOptimalParameters() to set some default parameters."},
    {"getInitialStepSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVMSGD_getInitialStepSize, 0), "getInitialStepSize() -> retval\n.   @see setInitialStepSize"},
    {"getMarginRegularization", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVMSGD_getMarginRegularization, 0), "getMarginRegularization() -> retval\n.   @see setMarginRegularization"},
    {"getMarginType", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVMSGD_getMarginType, 0), "getMarginType() -> retval\n.   @see setMarginType"},
    {"getShift", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVMSGD_getShift, 0), "getShift() -> retval\n.   * @return the shift of the trained model (decision function f(x) = weights * x + shift)."},
    {"getStepDecreasingPower", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVMSGD_getStepDecreasingPower, 0), "getStepDecreasingPower() -> retval\n.   @see setStepDecreasingPower"},
    {"getSvmsgdType", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVMSGD_getSvmsgdType, 0), "getSvmsgdType() -> retval\n.   @see setSvmsgdType"},
    {"getTermCriteria", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVMSGD_getTermCriteria, 0), "getTermCriteria() -> retval\n.   @see setTermCriteria"},
    {"getWeights", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVMSGD_getWeights, 0), "getWeights() -> retval\n.   * @return the weights of the trained model (decision function f(x) = weights * x + shift)."},
    {"load", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVMSGD_load_static, METH_STATIC), "load(filepath[, nodeName]) -> retval\n.   @brief Loads and creates a serialized SVMSGD from a file\n.        *\n.        * Use SVMSGD::save to serialize and store an SVMSGD to disk.\n.        * Load the SVMSGD from this file again, by calling this function with the path to the file.\n.        * Optionally specify the node for the file containing the classifier\n.        *\n.        * @param filepath path to serialized SVMSGD\n.        * @param nodeName name of node containing the classifier"},
    {"setInitialStepSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVMSGD_setInitialStepSize, 0), "setInitialStepSize(InitialStepSize) -> None\n.   @copybrief getInitialStepSize @see getInitialStepSize"},
    {"setMarginRegularization", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVMSGD_setMarginRegularization, 0), "setMarginRegularization(marginRegularization) -> None\n.   @copybrief getMarginRegularization @see getMarginRegularization"},
    {"setMarginType", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVMSGD_setMarginType, 0), "setMarginType(marginType) -> None\n.   @copybrief getMarginType @see getMarginType"},
    {"setOptimalParameters", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVMSGD_setOptimalParameters, 0), "setOptimalParameters([, svmsgdType[, marginType]]) -> None\n.   @brief Function sets optimal parameters values for chosen SVM SGD model.\n.        * @param svmsgdType is the type of SVMSGD classifier.\n.        * @param marginType is the type of margin constraint."},
    {"setStepDecreasingPower", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVMSGD_setStepDecreasingPower, 0), "setStepDecreasingPower(stepDecreasingPower) -> None\n.   @copybrief getStepDecreasingPower @see getStepDecreasingPower"},
    {"setSvmsgdType", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVMSGD_setSvmsgdType, 0), "setSvmsgdType(svmsgdType) -> None\n.   @copybrief getSvmsgdType @see getSvmsgdType"},
    {"setTermCriteria", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_SVMSGD_setTermCriteria, 0), "setTermCriteria(val) -> None\n.   @copybrief getTermCriteria @see getTermCriteria"},

    {NULL,          NULL}
};

// Converter (ml_SVMSGD)

template<>
struct PyOpenCV_Converter< Ptr<cv::ml::SVMSGD> >
{
    static PyObject* from(const Ptr<cv::ml::SVMSGD>& r)
    {
        return pyopencv_ml_SVMSGD_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::ml::SVMSGD>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::ml::SVMSGD> * dst_;
        if (pyopencv_ml_SVMSGD_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::ml::SVMSGD> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// ml_StatModel (Generic)
//================================================================================

// GetSet (ml_StatModel)



// Methods (ml_StatModel)

static PyObject* pyopencv_cv_ml_ml_StatModel_calcError(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::StatModel> * self1 = 0;
    if (!pyopencv_ml_StatModel_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_StatModel' or its derivative)");
    Ptr<cv::ml::StatModel> _self_ = *(self1);
    {
    PyObject* pyobj_data = NULL;
    Ptr<TrainData> data;
    bool test=0;
    PyObject* pyobj_resp = NULL;
    Mat resp;
    float retval;

    const char* keywords[] = { "data", "test", "resp", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Ob|O:ml_StatModel.calcError", (char**)keywords, &pyobj_data, &test, &pyobj_resp) &&
        pyopencv_to(pyobj_data, data, ArgInfo("data", 0)) &&
        pyopencv_to(pyobj_resp, resp, ArgInfo("resp", 1)) )
    {
        ERRWRAP2(retval = _self_->calcError(data, test, resp));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(resp));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_data = NULL;
    Ptr<TrainData> data;
    bool test=0;
    PyObject* pyobj_resp = NULL;
    UMat resp;
    float retval;

    const char* keywords[] = { "data", "test", "resp", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Ob|O:ml_StatModel.calcError", (char**)keywords, &pyobj_data, &test, &pyobj_resp) &&
        pyopencv_to(pyobj_data, data, ArgInfo("data", 0)) &&
        pyopencv_to(pyobj_resp, resp, ArgInfo("resp", 1)) )
    {
        ERRWRAP2(retval = _self_->calcError(data, test, resp));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(resp));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_StatModel_empty(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::StatModel> * self1 = 0;
    if (!pyopencv_ml_StatModel_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_StatModel' or its derivative)");
    Ptr<cv::ml::StatModel> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_StatModel_getVarCount(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::StatModel> * self1 = 0;
    if (!pyopencv_ml_StatModel_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_StatModel' or its derivative)");
    Ptr<cv::ml::StatModel> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarCount());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_StatModel_isClassifier(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::StatModel> * self1 = 0;
    if (!pyopencv_ml_StatModel_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_StatModel' or its derivative)");
    Ptr<cv::ml::StatModel> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isClassifier());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_StatModel_isTrained(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::StatModel> * self1 = 0;
    if (!pyopencv_ml_StatModel_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_StatModel' or its derivative)");
    Ptr<cv::ml::StatModel> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isTrained());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_StatModel_predict(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::StatModel> * self1 = 0;
    if (!pyopencv_ml_StatModel_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_StatModel' or its derivative)");
    Ptr<cv::ml::StatModel> _self_ = *(self1);
    {
    PyObject* pyobj_samples = NULL;
    Mat samples;
    PyObject* pyobj_results = NULL;
    Mat results;
    int flags=0;
    float retval;

    const char* keywords[] = { "samples", "results", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Oi:ml_StatModel.predict", (char**)keywords, &pyobj_samples, &pyobj_results, &flags) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_results, results, ArgInfo("results", 1)) )
    {
        ERRWRAP2(retval = _self_->predict(samples, results, flags));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(results));
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    UMat samples;
    PyObject* pyobj_results = NULL;
    UMat results;
    int flags=0;
    float retval;

    const char* keywords[] = { "samples", "results", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|Oi:ml_StatModel.predict", (char**)keywords, &pyobj_samples, &pyobj_results, &flags) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_results, results, ArgInfo("results", 1)) )
    {
        ERRWRAP2(retval = _self_->predict(samples, results, flags));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(results));
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_StatModel_train(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::StatModel> * self1 = 0;
    if (!pyopencv_ml_StatModel_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_StatModel' or its derivative)");
    Ptr<cv::ml::StatModel> _self_ = *(self1);
    {
    PyObject* pyobj_trainData = NULL;
    Ptr<TrainData> trainData;
    int flags=0;
    bool retval;

    const char* keywords[] = { "trainData", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O|i:ml_StatModel.train", (char**)keywords, &pyobj_trainData, &flags) &&
        pyopencv_to(pyobj_trainData, trainData, ArgInfo("trainData", 0)) )
    {
        ERRWRAP2(retval = _self_->train(trainData, flags));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    Mat samples;
    int layout=0;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    bool retval;

    const char* keywords[] = { "samples", "layout", "responses", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiO:ml_StatModel.train", (char**)keywords, &pyobj_samples, &layout, &pyobj_responses) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_responses, responses, ArgInfo("responses", 0)) )
    {
        ERRWRAP2(retval = _self_->train(samples, layout, responses));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    UMat samples;
    int layout=0;
    PyObject* pyobj_responses = NULL;
    UMat responses;
    bool retval;

    const char* keywords[] = { "samples", "layout", "responses", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiO:ml_StatModel.train", (char**)keywords, &pyobj_samples, &layout, &pyobj_responses) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_responses, responses, ArgInfo("responses", 0)) )
    {
        ERRWRAP2(retval = _self_->train(samples, layout, responses));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}



// Tables (ml_StatModel)

static PyGetSetDef pyopencv_ml_StatModel_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_ml_StatModel_methods[] =
{
    {"calcError", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_StatModel_calcError, 0), "calcError(data, test[, resp]) -> retval, resp\n.   @brief Computes error on the training or test dataset\n.   \n.       @param data the training data\n.       @param test if true, the error is computed over the test subset of the data, otherwise it's\n.           computed over the training subset of the data. Please note that if you loaded a completely\n.           different dataset to evaluate already trained classifier, you will probably want not to set\n.           the test subset at all with TrainData::setTrainTestSplitRatio and specify test=false, so\n.           that the error is computed for the whole new set. Yes, this sounds a bit confusing.\n.       @param resp the optional output responses.\n.   \n.       The method uses StatModel::predict to compute the error. For regression models the error is\n.       computed as RMS, for classifiers - as a percent of missclassified samples (0%-100%)."},
    {"empty", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_StatModel_empty, 0), "empty() -> retval\n."},
    {"getVarCount", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_StatModel_getVarCount, 0), "getVarCount() -> retval\n.   @brief Returns the number of variables in training samples"},
    {"isClassifier", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_StatModel_isClassifier, 0), "isClassifier() -> retval\n.   @brief Returns true if the model is classifier"},
    {"isTrained", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_StatModel_isTrained, 0), "isTrained() -> retval\n.   @brief Returns true if the model is trained"},
    {"predict", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_StatModel_predict, 0), "predict(samples[, results[, flags]]) -> retval, results\n.   @brief Predicts response(s) for the provided sample(s)\n.   \n.       @param samples The input samples, floating-point matrix\n.       @param results The optional output matrix of results.\n.       @param flags The optional flags, model-dependent. See cv::ml::StatModel::Flags."},
    {"train", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_StatModel_train, 0), "train(trainData[, flags]) -> retval\n.   @brief Trains the statistical model\n.   \n.       @param trainData training data that can be loaded from file using TrainData::loadFromCSV or\n.           created with TrainData::create.\n.       @param flags optional flags, depending on the model. Some of the models can be updated with the\n.           new training samples, not completely overwritten (such as NormalBayesClassifier or ANN_MLP).\n\n\n\ntrain(samples, layout, responses) -> retval\n.   @brief Trains the statistical model\n.   \n.       @param samples training samples\n.       @param layout See ml::SampleTypes.\n.       @param responses vector of responses associated with the training samples."},

    {NULL,          NULL}
};

// Converter (ml_StatModel)

template<>
struct PyOpenCV_Converter< Ptr<cv::ml::StatModel> >
{
    static PyObject* from(const Ptr<cv::ml::StatModel>& r)
    {
        return pyopencv_ml_StatModel_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::ml::StatModel>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::ml::StatModel> * dst_;
        if (pyopencv_ml_StatModel_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::ml::StatModel> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// ml_TrainData (Generic)
//================================================================================

// GetSet (ml_TrainData)



// Methods (ml_TrainData)

static PyObject* pyopencv_cv_ml_ml_TrainData_create_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    {
    PyObject* pyobj_samples = NULL;
    Mat samples;
    int layout=0;
    PyObject* pyobj_responses = NULL;
    Mat responses;
    PyObject* pyobj_varIdx = NULL;
    Mat varIdx;
    PyObject* pyobj_sampleIdx = NULL;
    Mat sampleIdx;
    PyObject* pyobj_sampleWeights = NULL;
    Mat sampleWeights;
    PyObject* pyobj_varType = NULL;
    Mat varType;
    Ptr<TrainData> retval;

    const char* keywords[] = { "samples", "layout", "responses", "varIdx", "sampleIdx", "sampleWeights", "varType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiO|OOOO:ml_TrainData.create", (char**)keywords, &pyobj_samples, &layout, &pyobj_responses, &pyobj_varIdx, &pyobj_sampleIdx, &pyobj_sampleWeights, &pyobj_varType) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_responses, responses, ArgInfo("responses", 0)) &&
        pyopencv_to(pyobj_varIdx, varIdx, ArgInfo("varIdx", 0)) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx, ArgInfo("sampleIdx", 0)) &&
        pyopencv_to(pyobj_sampleWeights, sampleWeights, ArgInfo("sampleWeights", 0)) &&
        pyopencv_to(pyobj_varType, varType, ArgInfo("varType", 0)) )
    {
        ERRWRAP2(retval = cv::ml::TrainData::create(samples, layout, responses, varIdx, sampleIdx, sampleWeights, varType));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_samples = NULL;
    UMat samples;
    int layout=0;
    PyObject* pyobj_responses = NULL;
    UMat responses;
    PyObject* pyobj_varIdx = NULL;
    UMat varIdx;
    PyObject* pyobj_sampleIdx = NULL;
    UMat sampleIdx;
    PyObject* pyobj_sampleWeights = NULL;
    UMat sampleWeights;
    PyObject* pyobj_varType = NULL;
    UMat varType;
    Ptr<TrainData> retval;

    const char* keywords[] = { "samples", "layout", "responses", "varIdx", "sampleIdx", "sampleWeights", "varType", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OiO|OOOO:ml_TrainData.create", (char**)keywords, &pyobj_samples, &layout, &pyobj_responses, &pyobj_varIdx, &pyobj_sampleIdx, &pyobj_sampleWeights, &pyobj_varType) &&
        pyopencv_to(pyobj_samples, samples, ArgInfo("samples", 0)) &&
        pyopencv_to(pyobj_responses, responses, ArgInfo("responses", 0)) &&
        pyopencv_to(pyobj_varIdx, varIdx, ArgInfo("varIdx", 0)) &&
        pyopencv_to(pyobj_sampleIdx, sampleIdx, ArgInfo("sampleIdx", 0)) &&
        pyopencv_to(pyobj_sampleWeights, sampleWeights, ArgInfo("sampleWeights", 0)) &&
        pyopencv_to(pyobj_varType, varType, ArgInfo("varType", 0)) )
    {
        ERRWRAP2(retval = cv::ml::TrainData::create(samples, layout, responses, varIdx, sampleIdx, sampleWeights, varType));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getCatCount(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    int vi=0;
    int retval;

    const char* keywords[] = { "vi", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i:ml_TrainData.getCatCount", (char**)keywords, &vi) )
    {
        ERRWRAP2(retval = _self_->getCatCount(vi));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getCatMap(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getCatMap());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getCatOfs(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getCatOfs());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getClassLabels(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getClassLabels());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getDefaultSubstValues(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultSubstValues());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getLayout(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getLayout());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getMissing(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMissing());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getNAllVars(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNAllVars());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getNSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNSamples());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getNTestSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNTestSamples());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getNTrainSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNTrainSamples());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getNVars(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNVars());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getNames(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    PyObject* pyobj_names = NULL;
    vector_String names;

    const char* keywords[] = { "names", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ml_TrainData.getNames", (char**)keywords, &pyobj_names) &&
        pyopencv_to(pyobj_names, names, ArgInfo("names", 0)) )
    {
        ERRWRAP2(_self_->getNames(names));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getNormCatResponses(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNormCatResponses());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getResponseType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getResponseType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getResponses(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getResponses());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getSample(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    {
    PyObject* pyobj_varIdx = NULL;
    Mat varIdx;
    int sidx=0;
    float buf=0.f;

    const char* keywords[] = { "varIdx", "sidx", "buf", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oif:ml_TrainData.getSample", (char**)keywords, &pyobj_varIdx, &sidx, &buf) &&
        pyopencv_to(pyobj_varIdx, varIdx, ArgInfo("varIdx", 0)) )
    {
        ERRWRAP2(_self_->getSample(varIdx, sidx, &buf));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_varIdx = NULL;
    UMat varIdx;
    int sidx=0;
    float buf=0.f;

    const char* keywords[] = { "varIdx", "sidx", "buf", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "Oif:ml_TrainData.getSample", (char**)keywords, &pyobj_varIdx, &sidx, &buf) &&
        pyopencv_to(pyobj_varIdx, varIdx, ArgInfo("varIdx", 0)) )
    {
        ERRWRAP2(_self_->getSample(varIdx, sidx, &buf));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getSampleWeights(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSampleWeights());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSamples());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getSubMatrix_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    {
    PyObject* pyobj_matrix = NULL;
    Mat matrix;
    PyObject* pyobj_idx = NULL;
    Mat idx;
    int layout=0;
    Mat retval;

    const char* keywords[] = { "matrix", "idx", "layout", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOi:ml_TrainData.getSubMatrix", (char**)keywords, &pyobj_matrix, &pyobj_idx, &layout) &&
        pyopencv_to(pyobj_matrix, matrix, ArgInfo("matrix", 0)) &&
        pyopencv_to(pyobj_idx, idx, ArgInfo("idx", 0)) )
    {
        ERRWRAP2(retval = cv::ml::TrainData::getSubMatrix(matrix, idx, layout));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_matrix = NULL;
    Mat matrix;
    PyObject* pyobj_idx = NULL;
    Mat idx;
    int layout=0;
    Mat retval;

    const char* keywords[] = { "matrix", "idx", "layout", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OOi:ml_TrainData.getSubMatrix", (char**)keywords, &pyobj_matrix, &pyobj_idx, &layout) &&
        pyopencv_to(pyobj_matrix, matrix, ArgInfo("matrix", 0)) &&
        pyopencv_to(pyobj_idx, idx, ArgInfo("idx", 0)) )
    {
        ERRWRAP2(retval = cv::ml::TrainData::getSubMatrix(matrix, idx, layout));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getSubVector_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;

    {
    PyObject* pyobj_vec = NULL;
    Mat vec;
    PyObject* pyobj_idx = NULL;
    Mat idx;
    Mat retval;

    const char* keywords[] = { "vec", "idx", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:ml_TrainData.getSubVector", (char**)keywords, &pyobj_vec, &pyobj_idx) &&
        pyopencv_to(pyobj_vec, vec, ArgInfo("vec", 0)) &&
        pyopencv_to(pyobj_idx, idx, ArgInfo("idx", 0)) )
    {
        ERRWRAP2(retval = cv::ml::TrainData::getSubVector(vec, idx));
        return pyopencv_from(retval);
    }
    }
    PyErr_Clear();

    {
    PyObject* pyobj_vec = NULL;
    Mat vec;
    PyObject* pyobj_idx = NULL;
    Mat idx;
    Mat retval;

    const char* keywords[] = { "vec", "idx", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "OO:ml_TrainData.getSubVector", (char**)keywords, &pyobj_vec, &pyobj_idx) &&
        pyopencv_to(pyobj_vec, vec, ArgInfo("vec", 0)) &&
        pyopencv_to(pyobj_idx, idx, ArgInfo("idx", 0)) )
    {
        ERRWRAP2(retval = cv::ml::TrainData::getSubVector(vec, idx));
        return pyopencv_from(retval);
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getTestNormCatResponses(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTestNormCatResponses());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getTestResponses(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTestResponses());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getTestSampleIdx(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTestSampleIdx());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getTestSampleWeights(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTestSampleWeights());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getTestSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTestSamples());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getTrainNormCatResponses(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTrainNormCatResponses());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getTrainResponses(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTrainResponses());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getTrainSampleIdx(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTrainSampleIdx());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getTrainSampleWeights(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTrainSampleWeights());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getTrainSamples(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    int layout=ROW_SAMPLE;
    bool compressSamples=true;
    bool compressVars=true;
    Mat retval;

    const char* keywords[] = { "layout", "compressSamples", "compressVars", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "|ibb:ml_TrainData.getTrainSamples", (char**)keywords, &layout, &compressSamples, &compressVars) )
    {
        ERRWRAP2(retval = _self_->getTrainSamples(layout, compressSamples, compressVars));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getValues(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    {
    int vi=0;
    PyObject* pyobj_sidx = NULL;
    Mat sidx;
    float values=0.f;

    const char* keywords[] = { "vi", "sidx", "values", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "iOf:ml_TrainData.getValues", (char**)keywords, &vi, &pyobj_sidx, &values) &&
        pyopencv_to(pyobj_sidx, sidx, ArgInfo("sidx", 0)) )
    {
        ERRWRAP2(_self_->getValues(vi, sidx, &values));
        Py_RETURN_NONE;
    }
    }
    PyErr_Clear();

    {
    int vi=0;
    PyObject* pyobj_sidx = NULL;
    UMat sidx;
    float values=0.f;

    const char* keywords[] = { "vi", "sidx", "values", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "iOf:ml_TrainData.getValues", (char**)keywords, &vi, &pyobj_sidx, &values) &&
        pyopencv_to(pyobj_sidx, sidx, ArgInfo("sidx", 0)) )
    {
        ERRWRAP2(_self_->getValues(vi, sidx, &values));
        Py_RETURN_NONE;
    }
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getVarIdx(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarIdx());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getVarSymbolFlags(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarSymbolFlags());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_getVarType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_setTrainTestSplit(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    int count=0;
    bool shuffle=true;

    const char* keywords[] = { "count", "shuffle", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "i|b:ml_TrainData.setTrainTestSplit", (char**)keywords, &count, &shuffle) )
    {
        ERRWRAP2(_self_->setTrainTestSplit(count, shuffle));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_setTrainTestSplitRatio(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);
    double ratio=0;
    bool shuffle=true;

    const char* keywords[] = { "ratio", "shuffle", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "d|b:ml_TrainData.setTrainTestSplitRatio", (char**)keywords, &ratio, &shuffle) )
    {
        ERRWRAP2(_self_->setTrainTestSplitRatio(ratio, shuffle));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ml_ml_TrainData_shuffleTrainTest(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ml;


    Ptr<cv::ml::TrainData> * self1 = 0;
    if (!pyopencv_ml_TrainData_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ml_TrainData' or its derivative)");
    Ptr<cv::ml::TrainData> _self_ = *(self1);

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->shuffleTrainTest());
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (ml_TrainData)

static PyGetSetDef pyopencv_ml_TrainData_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_ml_TrainData_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_create_static, METH_STATIC), "create(samples, layout, responses[, varIdx[, sampleIdx[, sampleWeights[, varType]]]]) -> retval\n.   @brief Creates training data from in-memory arrays.\n.   \n.       @param samples matrix of samples. It should have CV_32F type.\n.       @param layout see ml::SampleTypes.\n.       @param responses matrix of responses. If the responses are scalar, they should be stored as a\n.           single row or as a single column. The matrix should have type CV_32F or CV_32S (in the\n.           former case the responses are considered as ordered by default; in the latter case - as\n.           categorical)\n.       @param varIdx vector specifying which variables to use for training. It can be an integer vector\n.           (CV_32S) containing 0-based variable indices or byte vector (CV_8U) containing a mask of\n.           active variables.\n.       @param sampleIdx vector specifying which samples to use for training. It can be an integer\n.           vector (CV_32S) containing 0-based sample indices or byte vector (CV_8U) containing a mask\n.           of training samples.\n.       @param sampleWeights optional vector with weights for each sample. It should have CV_32F type.\n.       @param varType optional vector of type CV_8U and size `<number_of_variables_in_samples> +\n.           <number_of_variables_in_responses>`, containing types of each input and output variable. See\n.           ml::VariableTypes."},
    {"getCatCount", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getCatCount, 0), "getCatCount(vi) -> retval\n."},
    {"getCatMap", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getCatMap, 0), "getCatMap() -> retval\n."},
    {"getCatOfs", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getCatOfs, 0), "getCatOfs() -> retval\n."},
    {"getClassLabels", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getClassLabels, 0), "getClassLabels() -> retval\n.   @brief Returns the vector of class labels\n.   \n.       The function returns vector of unique labels occurred in the responses."},
    {"getDefaultSubstValues", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getDefaultSubstValues, 0), "getDefaultSubstValues() -> retval\n."},
    {"getLayout", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getLayout, 0), "getLayout() -> retval\n."},
    {"getMissing", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getMissing, 0), "getMissing() -> retval\n."},
    {"getNAllVars", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getNAllVars, 0), "getNAllVars() -> retval\n."},
    {"getNSamples", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getNSamples, 0), "getNSamples() -> retval\n."},
    {"getNTestSamples", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getNTestSamples, 0), "getNTestSamples() -> retval\n."},
    {"getNTrainSamples", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getNTrainSamples, 0), "getNTrainSamples() -> retval\n."},
    {"getNVars", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getNVars, 0), "getNVars() -> retval\n."},
    {"getNames", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getNames, 0), "getNames(names) -> None\n.   @brief Returns vector of symbolic names captured in loadFromCSV()"},
    {"getNormCatResponses", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getNormCatResponses, 0), "getNormCatResponses() -> retval\n."},
    {"getResponseType", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getResponseType, 0), "getResponseType() -> retval\n."},
    {"getResponses", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getResponses, 0), "getResponses() -> retval\n."},
    {"getSample", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getSample, 0), "getSample(varIdx, sidx, buf) -> None\n."},
    {"getSampleWeights", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getSampleWeights, 0), "getSampleWeights() -> retval\n."},
    {"getSamples", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getSamples, 0), "getSamples() -> retval\n."},
    {"getSubMatrix", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getSubMatrix_static, METH_STATIC), "getSubMatrix(matrix, idx, layout) -> retval\n.   @brief Extract from matrix rows/cols specified by passed indexes.\n.       @param matrix input matrix (supported types: CV_32S, CV_32F, CV_64F)\n.       @param idx 1D index vector\n.       @param layout specifies to extract rows (cv::ml::ROW_SAMPLES) or to extract columns (cv::ml::COL_SAMPLES)"},
    {"getSubVector", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getSubVector_static, METH_STATIC), "getSubVector(vec, idx) -> retval\n.   @brief Extract from 1D vector elements specified by passed indexes.\n.       @param vec input vector (supported types: CV_32S, CV_32F, CV_64F)\n.       @param idx 1D index vector"},
    {"getTestNormCatResponses", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getTestNormCatResponses, 0), "getTestNormCatResponses() -> retval\n."},
    {"getTestResponses", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getTestResponses, 0), "getTestResponses() -> retval\n."},
    {"getTestSampleIdx", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getTestSampleIdx, 0), "getTestSampleIdx() -> retval\n."},
    {"getTestSampleWeights", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getTestSampleWeights, 0), "getTestSampleWeights() -> retval\n."},
    {"getTestSamples", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getTestSamples, 0), "getTestSamples() -> retval\n.   @brief Returns matrix of test samples"},
    {"getTrainNormCatResponses", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getTrainNormCatResponses, 0), "getTrainNormCatResponses() -> retval\n.   @brief Returns the vector of normalized categorical responses\n.   \n.       The function returns vector of responses. Each response is integer from `0` to `<number of\n.       classes>-1`. The actual label value can be retrieved then from the class label vector, see\n.       TrainData::getClassLabels."},
    {"getTrainResponses", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getTrainResponses, 0), "getTrainResponses() -> retval\n.   @brief Returns the vector of responses\n.   \n.       The function returns ordered or the original categorical responses. Usually it's used in\n.       regression algorithms."},
    {"getTrainSampleIdx", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getTrainSampleIdx, 0), "getTrainSampleIdx() -> retval\n."},
    {"getTrainSampleWeights", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getTrainSampleWeights, 0), "getTrainSampleWeights() -> retval\n."},
    {"getTrainSamples", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getTrainSamples, 0), "getTrainSamples([, layout[, compressSamples[, compressVars]]]) -> retval\n.   @brief Returns matrix of train samples\n.   \n.       @param layout The requested layout. If it's different from the initial one, the matrix is\n.           transposed. See ml::SampleTypes.\n.       @param compressSamples if true, the function returns only the training samples (specified by\n.           sampleIdx)\n.       @param compressVars if true, the function returns the shorter training samples, containing only\n.           the active variables.\n.   \n.       In current implementation the function tries to avoid physical data copying and returns the\n.       matrix stored inside TrainData (unless the transposition or compression is needed)."},
    {"getValues", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getValues, 0), "getValues(vi, sidx, values) -> None\n."},
    {"getVarIdx", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getVarIdx, 0), "getVarIdx() -> retval\n."},
    {"getVarSymbolFlags", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getVarSymbolFlags, 0), "getVarSymbolFlags() -> retval\n."},
    {"getVarType", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_getVarType, 0), "getVarType() -> retval\n."},
    {"setTrainTestSplit", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_setTrainTestSplit, 0), "setTrainTestSplit(count[, shuffle]) -> None\n.   @brief Splits the training data into the training and test parts\n.       @sa TrainData::setTrainTestSplitRatio"},
    {"setTrainTestSplitRatio", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_setTrainTestSplitRatio, 0), "setTrainTestSplitRatio(ratio[, shuffle]) -> None\n.   @brief Splits the training data into the training and test parts\n.   \n.       The function selects a subset of specified relative size and then returns it as the training\n.       set. If the function is not called, all the data is used for training. Please, note that for\n.       each of TrainData::getTrain\\* there is corresponding TrainData::getTest\\*, so that the test\n.       subset can be retrieved and processed as well.\n.       @sa TrainData::setTrainTestSplit"},
    {"shuffleTrainTest", CV_PY_FN_WITH_KW_(pyopencv_cv_ml_ml_TrainData_shuffleTrainTest, 0), "shuffleTrainTest() -> None\n."},

    {NULL,          NULL}
};

// Converter (ml_TrainData)

template<>
struct PyOpenCV_Converter< Ptr<cv::ml::TrainData> >
{
    static PyObject* from(const Ptr<cv::ml::TrainData>& r)
    {
        return pyopencv_ml_TrainData_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::ml::TrainData>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::ml::TrainData> * dst_;
        if (pyopencv_ml_TrainData_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::ml::TrainData> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// ocl_Device (Generic)
//================================================================================

// GetSet (ocl_Device)



// Methods (ocl_Device)

static int pyopencv_cv_ocl_ocl_Device_Device(pyopencv_ocl_Device_t* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::ocl::Device());
        return 0;
    }

    return -1;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_OpenCLVersion(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    String retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->OpenCLVersion());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_OpenCL_C_Version(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    String retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->OpenCL_C_Version());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_addressBits(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->addressBits());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_available(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->available());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_compilerAvailable(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->compilerAvailable());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_deviceVersionMajor(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->deviceVersionMajor());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_deviceVersionMinor(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->deviceVersionMinor());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_doubleFPConfig(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->doubleFPConfig());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_driverVersion(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    String retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->driverVersion());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_endianLittle(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->endianLittle());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_errorCorrectionSupport(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->errorCorrectionSupport());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_executionCapabilities(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->executionCapabilities());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_extensions(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    String retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->extensions());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_getDefault_static(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;

    Device retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv::ocl::Device::getDefault());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_globalMemCacheLineSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->globalMemCacheLineSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_globalMemCacheSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->globalMemCacheSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_globalMemCacheType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->globalMemCacheType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_globalMemSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->globalMemSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_halfFPConfig(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->halfFPConfig());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_hostUnifiedMemory(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->hostUnifiedMemory());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_image2DMaxHeight(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->image2DMaxHeight());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_image2DMaxWidth(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->image2DMaxWidth());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_image3DMaxDepth(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->image3DMaxDepth());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_image3DMaxHeight(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->image3DMaxHeight());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_image3DMaxWidth(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->image3DMaxWidth());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_imageFromBufferSupport(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->imageFromBufferSupport());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_imageMaxArraySize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->imageMaxArraySize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_imageMaxBufferSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->imageMaxBufferSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_imageSupport(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->imageSupport());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_intelSubgroupsSupport(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->intelSubgroupsSupport());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_isAMD(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isAMD());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_isExtensionSupported(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    PyObject* pyobj_extensionName = NULL;
    String extensionName;
    bool retval;

    const char* keywords[] = { "extensionName", NULL };
    if( PyArg_ParseTupleAndKeywords(args, kw, "O:ocl_Device.isExtensionSupported", (char**)keywords, &pyobj_extensionName) &&
        pyopencv_to(pyobj_extensionName, extensionName, ArgInfo("extensionName", 0)) )
    {
        ERRWRAP2(retval = _self_->isExtensionSupported(extensionName));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_isIntel(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isIntel());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_isNVidia(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isNVidia());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_linkerAvailable(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->linkerAvailable());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_localMemSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->localMemSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_localMemType(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->localMemType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_maxClockFrequency(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxClockFrequency());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_maxComputeUnits(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxComputeUnits());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_maxConstantArgs(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxConstantArgs());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_maxConstantBufferSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxConstantBufferSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_maxMemAllocSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxMemAllocSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_maxParameterSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxParameterSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_maxReadImageArgs(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxReadImageArgs());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_maxSamplers(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxSamplers());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_maxWorkGroupSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxWorkGroupSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_maxWorkItemDims(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxWorkItemDims());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_maxWriteImageArgs(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxWriteImageArgs());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_memBaseAddrAlign(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->memBaseAddrAlign());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_name(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    String retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->name());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_nativeVectorWidthChar(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->nativeVectorWidthChar());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_nativeVectorWidthDouble(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->nativeVectorWidthDouble());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_nativeVectorWidthFloat(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->nativeVectorWidthFloat());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_nativeVectorWidthHalf(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->nativeVectorWidthHalf());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_nativeVectorWidthInt(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->nativeVectorWidthInt());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_nativeVectorWidthLong(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->nativeVectorWidthLong());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_nativeVectorWidthShort(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->nativeVectorWidthShort());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_preferredVectorWidthChar(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->preferredVectorWidthChar());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_preferredVectorWidthDouble(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->preferredVectorWidthDouble());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_preferredVectorWidthFloat(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->preferredVectorWidthFloat());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_preferredVectorWidthHalf(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->preferredVectorWidthHalf());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_preferredVectorWidthInt(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->preferredVectorWidthInt());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_preferredVectorWidthLong(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->preferredVectorWidthLong());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_preferredVectorWidthShort(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->preferredVectorWidthShort());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_printfBufferSize(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->printfBufferSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_profilingTimerResolution(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->profilingTimerResolution());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_singleFPConfig(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->singleFPConfig());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_type(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->type());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_vendorID(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->vendorID());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_vendorName(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    String retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->vendorName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_version(PyObject* self, PyObject* args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    String retval;

    if(PyObject_Size(args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->version());
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (ocl_Device)

static PyGetSetDef pyopencv_ocl_Device_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_ocl_Device_methods[] =
{
    {"OpenCLVersion", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_OpenCLVersion, 0), "OpenCLVersion() -> retval\n."},
    {"OpenCL_C_Version", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_OpenCL_C_Version, 0), "OpenCL_C_Version() -> retval\n."},
    {"addressBits", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_addressBits, 0), "addressBits() -> retval\n."},
    {"available", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_available, 0), "available() -> retval\n."},
    {"compilerAvailable", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_compilerAvailable, 0), "compilerAvailable() -> retval\n."},
    {"deviceVersionMajor", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_deviceVersionMajor, 0), "deviceVersionMajor() -> retval\n."},
    {"deviceVersionMinor", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_deviceVersionMinor, 0), "deviceVersionMinor() -> retval\n."},
    {"doubleFPConfig", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_doubleFPConfig, 0), "doubleFPConfig() -> retval\n."},
    {"driverVersion", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_driverVersion, 0), "driverVersion() -> retval\n."},
    {"endianLittle", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_endianLittle, 0), "endianLittle() -> retval\n."},
    {"errorCorrectionSupport", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_errorCorrectionSupport, 0), "errorCorrectionSupport() -> retval\n."},
    {"executionCapabilities", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_executionCapabilities, 0), "executionCapabilities() -> retval\n."},
    {"extensions", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_extensions, 0), "extensions() -> retval\n."},
    {"getDefault", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_getDefault_static, METH_STATIC), "getDefault() -> retval\n."},
    {"globalMemCacheLineSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_globalMemCacheLineSize, 0), "globalMemCacheLineSize() -> retval\n."},
    {"globalMemCacheSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_globalMemCacheSize, 0), "globalMemCacheSize() -> retval\n."},
    {"globalMemCacheType", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_globalMemCacheType, 0), "globalMemCacheType() -> retval\n."},
    {"globalMemSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_globalMemSize, 0), "globalMemSize() -> retval\n."},
    {"halfFPConfig", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_halfFPConfig, 0), "halfFPConfig() -> retval\n."},
    {"hostUnifiedMemory", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_hostUnifiedMemory, 0), "hostUnifiedMemory() -> retval\n."},
    {"image2DMaxHeight", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_image2DMaxHeight, 0), "image2DMaxHeight() -> retval\n."},
    {"image2DMaxWidth", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_image2DMaxWidth, 0), "image2DMaxWidth() -> retval\n."},
    {"image3DMaxDepth", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_image3DMaxDepth, 0), "image3DMaxDepth() -> retval\n."},
    {"image3DMaxHeight", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_image3DMaxHeight, 0), "image3DMaxHeight() -> retval\n."},
    {"image3DMaxWidth", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_image3DMaxWidth, 0), "image3DMaxWidth() -> retval\n."},
    {"imageFromBufferSupport", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_imageFromBufferSupport, 0), "imageFromBufferSupport() -> retval\n."},
    {"imageMaxArraySize", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_imageMaxArraySize, 0), "imageMaxArraySize() -> retval\n."},
    {"imageMaxBufferSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_imageMaxBufferSize, 0), "imageMaxBufferSize() -> retval\n."},
    {"imageSupport", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_imageSupport, 0), "imageSupport() -> retval\n."},
    {"intelSubgroupsSupport", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_intelSubgroupsSupport, 0), "intelSubgroupsSupport() -> retval\n."},
    {"isAMD", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_isAMD, 0), "isAMD() -> retval\n."},
    {"isExtensionSupported", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_isExtensionSupported, 0), "isExtensionSupported(extensionName) -> retval\n."},
    {"isIntel", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_isIntel, 0), "isIntel() -> retval\n."},
    {"isNVidia", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_isNVidia, 0), "isNVidia() -> retval\n."},
    {"linkerAvailable", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_linkerAvailable, 0), "linkerAvailable() -> retval\n."},
    {"localMemSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_localMemSize, 0), "localMemSize() -> retval\n."},
    {"localMemType", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_localMemType, 0), "localMemType() -> retval\n."},
    {"maxClockFrequency", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_maxClockFrequency, 0), "maxClockFrequency() -> retval\n."},
    {"maxComputeUnits", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_maxComputeUnits, 0), "maxComputeUnits() -> retval\n."},
    {"maxConstantArgs", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_maxConstantArgs, 0), "maxConstantArgs() -> retval\n."},
    {"maxConstantBufferSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_maxConstantBufferSize, 0), "maxConstantBufferSize() -> retval\n."},
    {"maxMemAllocSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_maxMemAllocSize, 0), "maxMemAllocSize() -> retval\n."},
    {"maxParameterSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_maxParameterSize, 0), "maxParameterSize() -> retval\n."},
    {"maxReadImageArgs", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_maxReadImageArgs, 0), "maxReadImageArgs() -> retval\n."},
    {"maxSamplers", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_maxSamplers, 0), "maxSamplers() -> retval\n."},
    {"maxWorkGroupSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_maxWorkGroupSize, 0), "maxWorkGroupSize() -> retval\n."},
    {"maxWorkItemDims", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_maxWorkItemDims, 0), "maxWorkItemDims() -> retval\n."},
    {"maxWriteImageArgs", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_maxWriteImageArgs, 0), "maxWriteImageArgs() -> retval\n."},
    {"memBaseAddrAlign", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_memBaseAddrAlign, 0), "memBaseAddrAlign() -> retval\n."},
    {"name", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_name, 0), "name() -> retval\n."},
    {"nativeVectorWidthChar", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_nativeVectorWidthChar, 0), "nativeVectorWidthChar() -> retval\n."},
    {"nativeVectorWidthDouble", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_nativeVectorWidthDouble, 0), "nativeVectorWidthDouble() -> retval\n."},
    {"nativeVectorWidthFloat", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_nativeVectorWidthFloat, 0), "nativeVectorWidthFloat() -> retval\n."},
    {"nativeVectorWidthHalf", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_nativeVectorWidthHalf, 0), "nativeVectorWidthHalf() -> retval\n."},
    {"nativeVectorWidthInt", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_nativeVectorWidthInt, 0), "nativeVectorWidthInt() -> retval\n."},
    {"nativeVectorWidthLong", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_nativeVectorWidthLong, 0), "nativeVectorWidthLong() -> retval\n."},
    {"nativeVectorWidthShort", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_nativeVectorWidthShort, 0), "nativeVectorWidthShort() -> retval\n."},
    {"preferredVectorWidthChar", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_preferredVectorWidthChar, 0), "preferredVectorWidthChar() -> retval\n."},
    {"preferredVectorWidthDouble", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_preferredVectorWidthDouble, 0), "preferredVectorWidthDouble() -> retval\n."},
    {"preferredVectorWidthFloat", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_preferredVectorWidthFloat, 0), "preferredVectorWidthFloat() -> retval\n."},
    {"preferredVectorWidthHalf", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_preferredVectorWidthHalf, 0), "preferredVectorWidthHalf() -> retval\n."},
    {"preferredVectorWidthInt", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_preferredVectorWidthInt, 0), "preferredVectorWidthInt() -> retval\n."},
    {"preferredVectorWidthLong", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_preferredVectorWidthLong, 0), "preferredVectorWidthLong() -> retval\n."},
    {"preferredVectorWidthShort", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_preferredVectorWidthShort, 0), "preferredVectorWidthShort() -> retval\n."},
    {"printfBufferSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_printfBufferSize, 0), "printfBufferSize() -> retval\n."},
    {"profilingTimerResolution", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_profilingTimerResolution, 0), "profilingTimerResolution() -> retval\n."},
    {"singleFPConfig", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_singleFPConfig, 0), "singleFPConfig() -> retval\n."},
    {"type", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_type, 0), "type() -> retval\n."},
    {"vendorID", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_vendorID, 0), "vendorID() -> retval\n."},
    {"vendorName", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_vendorName, 0), "vendorName() -> retval\n."},
    {"version", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_version, 0), "version() -> retval\n."},

    {NULL,          NULL}
};

// Converter (ocl_Device)

template<>
struct PyOpenCV_Converter< cv::ocl::Device >
{
    static PyObject* from(const cv::ocl::Device& r)
    {
        return pyopencv_ocl_Device_Instance(r);
    }
    static bool to(PyObject* src, cv::ocl::Device& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        cv::ocl::Device * dst_;
        if (pyopencv_ocl_Device_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected cv::ocl::Device for argument '%s'", info.name);
        return false;
    }
};

