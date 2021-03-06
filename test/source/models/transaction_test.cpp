//
// MIT License
//
// Copyright (c) 2017 Thibault Martinez
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
//

#include <gtest/gtest.h>

#include <iota/models/transaction.hpp>

TEST(Transaction, DefaultCtor) {
  IOTA::Models::Transaction t;

  EXPECT_EQ(t.getSignatureFragments(), "");
  EXPECT_EQ(t.getCurrentIndex(), 0);
  EXPECT_EQ(t.getLastIndex(), 0);
  EXPECT_EQ(t.getNonce(), "");
  EXPECT_EQ(t.getHash(), "");
  EXPECT_EQ(t.getTag(), "");
  EXPECT_EQ(t.getTimestamp(), 0);
  EXPECT_EQ(t.getTrunkTransaction(), "");
  EXPECT_EQ(t.getBranchTransaction(), "");
  EXPECT_EQ(t.getAddress(), "");
  EXPECT_EQ(t.getValue(), 0);
  EXPECT_EQ(t.getBundle(), "");
  EXPECT_EQ(t.getPersistence(), false);
}

TEST(Transaction, CtorFromTrxTrytesAndToTrytes) {
  IOTA::Models::Transaction t(
      "SPAMSPAMSPAM99999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "9999999999999999999999MFEGAXD99999999999999999999OEQXMGAVOEAPIBSUUYWPGCXBSNBKGGVKLTVMBUBLLXK"
      "ISI9EBIFWKOQ9QECUETLGCAYRTLTRQXBLNXOFDQYRCKTCKXQLSLTMXDLTWYUEMBNSMOLJFWVHOSNZUXICZWKWPQCUPQZ"
      "PRYZILEWTNWRRKMASDSRCN99999CFNEKLBPISWWHJMZFNEYSITSXAXNUF9WSV9H9WZTBOPBCEOYKHXOTUMORFERYEJJD"
      "XRCHGOXODZ9Z9999999999999999999999999999999SXKLXQCIE999999999L99999999LURBXNQVXYSHUMTADJJYTY"
      "STHMI");

  EXPECT_EQ(
      t.getSignatureFragments(),
      "SPAMSPAMSPAM99999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999");
  EXPECT_EQ(t.getCurrentIndex(), 0);
  EXPECT_EQ(t.getLastIndex(), 0);
  EXPECT_EQ(t.getNonce(),
            "999999999999999999999999999SXKLXQCIE999999999L99999999LURBXNQVXYSHUMTADJJYTYSTHMI");
  EXPECT_EQ(t.getHash(),
            "9NHSCVDQZXJDOC9FGVWTQDMPDCGWNGWVLREQRNGDJQIRMKCPVBSLLQPSZUHTDQYJWECBDEWQOJMP99999");
  EXPECT_EQ(t.getTag(), "999999999999999999999999999");
  EXPECT_EQ(t.getTimestamp(), 1507308277);
  EXPECT_EQ(t.getTrunkTransaction(),
            "QYRCKTCKXQLSLTMXDLTWYUEMBNSMOLJFWVHOSNZUXICZWKWPQCUPQZPRYZILEWTNWRRKMASDSRCN99999");
  EXPECT_EQ(t.getBranchTransaction(),
            "CFNEKLBPISWWHJMZFNEYSITSXAXNUF9WSV9H9WZTBOPBCEOYKHXOTUMORFERYEJJDXRCHGOXODZ9Z9999");
  EXPECT_EQ(t.getAddress(),
            "999999999999999999999999999999999999999999999999999999999999999999999999999999999");
  EXPECT_EQ(t.getValue(), 0);
  EXPECT_EQ(t.getBundle(),
            "OEQXMGAVOEAPIBSUUYWPGCXBSNBKGGVKLTVMBUBLLXKISI9EBIFWKOQ9QECUETLGCAYRTLTRQXBLNXOFD");
  EXPECT_EQ(t.getPersistence(), false);

  EXPECT_EQ(
      t.toTrytes(),
      "SPAMSPAMSPAM99999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"
      "9999999999999999999999MFEGAXD99999999999999999999OEQXMGAVOEAPIBSUUYWPGCXBSNBKGGVKLTVMBUBLLXK"
      "ISI9EBIFWKOQ9QECUETLGCAYRTLTRQXBLNXOFDQYRCKTCKXQLSLTMXDLTWYUEMBNSMOLJFWVHOSNZUXICZWKWPQCUPQZ"
      "PRYZILEWTNWRRKMASDSRCN99999CFNEKLBPISWWHJMZFNEYSITSXAXNUF9WSV9H9WZTBOPBCEOYKHXOTUMORFERYEJJD"
      "XRCHGOXODZ9Z9999999999999999999999999999999SXKLXQCIE999999999L99999999LURBXNQVXYSHUMTADJJYTY"
      "STHMI");
}

TEST(Transaction, CtorFull) {
  IOTA::Models::Transaction t = {
    "signatureFragments", 1,         2, "nonce", "hash", "tag", 3, "trunkTransaction",
    "branchTransaction",  "address", 4, "bundle"
  };

  EXPECT_EQ(t.getSignatureFragments(), "signatureFragments");
  EXPECT_EQ(t.getCurrentIndex(), 1);
  EXPECT_EQ(t.getLastIndex(), 2);
  EXPECT_EQ(t.getNonce(), "nonce");
  EXPECT_EQ(t.getHash(), "hash");
  EXPECT_EQ(t.getTag(), "tag");
  EXPECT_EQ(t.getTimestamp(), 3);
  EXPECT_EQ(t.getTrunkTransaction(), "trunkTransaction");
  EXPECT_EQ(t.getBranchTransaction(), "branchTransaction");
  EXPECT_EQ(t.getAddress(), "address");
  EXPECT_EQ(t.getValue(), 4);
  EXPECT_EQ(t.getBundle(), "bundle");
  EXPECT_EQ(t.getPersistence(), false);
}

TEST(Transaction, CtorShort) {
  IOTA::Models::Transaction t = { "address", 1, "tag", 2 };

  EXPECT_EQ(t.getSignatureFragments(), "");
  EXPECT_EQ(t.getCurrentIndex(), 0);
  EXPECT_EQ(t.getLastIndex(), 0);
  EXPECT_EQ(t.getNonce(), "");
  EXPECT_EQ(t.getHash(), "");
  EXPECT_EQ(t.getTag(), "tag");
  EXPECT_EQ(t.getTimestamp(), 2);
  EXPECT_EQ(t.getTrunkTransaction(), "");
  EXPECT_EQ(t.getBranchTransaction(), "");
  EXPECT_EQ(t.getAddress(), "address");
  EXPECT_EQ(t.getValue(), 1);
  EXPECT_EQ(t.getBundle(), "");
  EXPECT_EQ(t.getPersistence(), false);
}

TEST(Transaction, ConstGetters) {
  const IOTA::Models::Transaction t = {
    "signatureFragments", 1,         2, "nonce", "hash", "tag", 3, "trunkTransaction",
    "branchTransaction",  "address", 4, "bundle"
  };

  EXPECT_EQ(t.getSignatureFragments(), "signatureFragments");
  EXPECT_EQ(t.getCurrentIndex(), 1);
  EXPECT_EQ(t.getLastIndex(), 2);
  EXPECT_EQ(t.getNonce(), "nonce");
  EXPECT_EQ(t.getHash(), "hash");
  EXPECT_EQ(t.getTag(), "tag");
  EXPECT_EQ(t.getTimestamp(), 3);
  EXPECT_EQ(t.getTrunkTransaction(), "trunkTransaction");
  EXPECT_EQ(t.getBranchTransaction(), "branchTransaction");
  EXPECT_EQ(t.getAddress(), "address");
  EXPECT_EQ(t.getValue(), 4);
  EXPECT_EQ(t.getBundle(), "bundle");
  EXPECT_EQ(t.getPersistence(), false);
}

TEST(Transaction, BundleGetterAndSetter) {
  IOTA::Models::Transaction t;
  EXPECT_EQ(t.getBundle(), "");

  t.setBundle("bundle");
  EXPECT_EQ(t.getBundle(), "bundle");
}

TEST(Transaction, BranchTransactionGetterAndSetter) {
  IOTA::Models::Transaction t;
  EXPECT_EQ(t.getBranchTransaction(), "");

  t.setBranchTransaction("trx");
  EXPECT_EQ(t.getBranchTransaction(), "trx");
}

TEST(Transaction, TrunkTransactionGetterAndSetter) {
  IOTA::Models::Transaction t;
  EXPECT_EQ(t.getTrunkTransaction(), "");

  t.setTrunkTransaction("trx");
  EXPECT_EQ(t.getTrunkTransaction(), "trx");
}

TEST(Transaction, TimestampGetterAndSetter) {
  IOTA::Models::Transaction t;
  EXPECT_EQ(t.getTimestamp(), 0);

  t.setTimestamp(1);
  EXPECT_EQ(t.getTimestamp(), 1);
}

TEST(Transaction, ValueGetterAndSetter) {
  IOTA::Models::Transaction t;
  EXPECT_EQ(t.getValue(), 0);

  t.setValue(1);
  EXPECT_EQ(t.getValue(), 1);
}

TEST(Transaction, TagGetterAndSetter) {
  IOTA::Models::Transaction t;
  EXPECT_EQ(t.getTag(), "");

  t.setTag("tag");
  EXPECT_EQ(t.getTag(), "tag");
}

TEST(Transaction, AddressGetterAndSetter) {
  IOTA::Models::Transaction t;
  EXPECT_EQ(t.getAddress(), "");

  t.setAddress("addr");
  EXPECT_EQ(t.getAddress(), "addr");
}

TEST(Transaction, SignatureFragmentsGetterAndSetter) {
  IOTA::Models::Transaction t;
  EXPECT_EQ(t.getSignatureFragments(), "");

  t.setSignatureFragments("frag");
  EXPECT_EQ(t.getSignatureFragments(), "frag");
}

TEST(Transaction, CurrentIndexGetterAndSetter) {
  IOTA::Models::Transaction t;
  EXPECT_EQ(t.getCurrentIndex(), 0);

  t.setCurrentIndex(1);
  EXPECT_EQ(t.getCurrentIndex(), 1);
}

TEST(Transaction, LastIndexGetterAndSetter) {
  IOTA::Models::Transaction t;
  EXPECT_EQ(t.getLastIndex(), 0);

  t.setLastIndex(1);
  EXPECT_EQ(t.getLastIndex(), 1);
}

TEST(Transaction, NonceGetterAndSetter) {
  IOTA::Models::Transaction t;
  EXPECT_EQ(t.getNonce(), "");

  t.setNonce("nonce");
  EXPECT_EQ(t.getNonce(), "nonce");
}

TEST(Transaction, HashGetterAndSetter) {
  IOTA::Models::Transaction t;
  EXPECT_EQ(t.getHash(), "");

  t.setHash("hash");
  EXPECT_EQ(t.getHash(), "hash");
}

TEST(Transaction, PersistenceGetterAndSetter) {
  IOTA::Models::Transaction t;
  EXPECT_EQ(t.getPersistence(), false);

  t.setPersistence(true);
  EXPECT_EQ(t.getPersistence(), true);
}

TEST(Transaction, OperatorEq) {
  IOTA::Models::Transaction t1 = {
    "signatureFragments1", 11,         21, "nonce1", "hash1", "tag1", 31, "trunkTransaction1",
    "branchTransaction1",  "address1", 41, "bundle1"
  };

  IOTA::Models::Transaction t2 = {
    "signatureFragments2", 12,         22, "nonce2", "hash2", "tag2", 32, "trunkTransaction2",
    "branchTransaction2",  "address2", 42, "bundle2"
  };

  EXPECT_EQ(t1 == t2, false);

  t1.setHash("hashEQ");
  t2.setHash("hashEQ");

  EXPECT_EQ(t1 == t2, true);
}

TEST(Transaction, OperatorNEq) {
  IOTA::Models::Transaction t1 = {
    "signatureFragments1", 11,         21, "nonce1", "hash1", "tag1", 31, "trunkTransaction1",
    "branchTransaction1",  "address1", 41, "bundle1"
  };

  IOTA::Models::Transaction t2 = {
    "signatureFragments2", 12,         22, "nonce2", "hash2", "tag2", 32, "trunkTransaction2",
    "branchTransaction2",  "address2", 42, "bundle2"
  };

  EXPECT_EQ(t1 != t2, true);

  t1.setHash("hashEQ");
  t2.setHash("hashEQ");

  EXPECT_EQ(t1 != t2, false);
}

TEST(Transaction, IsTailTransaction) {
  IOTA::Models::Transaction t = {
    "signatureFragments", 1,         2, "nonce", "hash", "tag", 3, "trunkTransaction",
    "branchTransaction",  "address", 4, "bundle"
  };

  EXPECT_EQ(t.isTailTransaction(), false);

  t.setCurrentIndex(0);
  EXPECT_EQ(t.isTailTransaction(), true);
}
