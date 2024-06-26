/*!
 * secp256k1.js - secp256k1 for bcrypto
 * Copyright (c) 2014-2015, Fedor Indutny (MIT License)
 * Copyright (c) 2014-2019, Christopher Jeffrey (MIT License).
 * https://github.com/raptoracle/bcrypto
 */

'use strict';

if (process.env.NODE_BACKEND === 'js')
  module.exports = require('./js/secp256k1');
else
  module.exports = require('./native/secp256k1');
