/*!
 * pgpdf.js - pgpdf for bcrypto
 * Copyright (c) 2017-2019, Christopher Jeffrey (MIT License).
 * https://github.com/raptoracle/bcrypto
 */

'use strict';

if (process.env.NODE_BACKEND === 'js')
  module.exports = require('../js/pgpdf');
else
  module.exports = require('../native/pgpdf');
