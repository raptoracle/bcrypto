/*!
 * bn.js - big numbers for bcrypto
 * Copyright (c) 2017-2019, Christopher Jeffrey (MIT License).
 * https://github.com/raptoracle/bcrypto
 */

'use strict';

if (process.env.BCRYPTO_FORCE_BIGINT || process.env.NODE_BACKEND !== 'js') {
  try {
    module.exports = require('./native/bn');
    // See: https://github.com/raptoracle/bcrypto/issues/27
    //      https://github.com/raptoracle/bcrypto/issues/35
    if (!module.exports.native)
      throw new Error();
  } catch (e) {
    module.exports = require('./js/bn');
  }
} else {
  module.exports = require('./js/bn');
}
