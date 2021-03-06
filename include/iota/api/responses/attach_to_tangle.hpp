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

#pragma once

#include <json.hpp>

#include <iota/api/responses/base.hpp>

using json = nlohmann::json;

namespace IOTA {

namespace API {

namespace Responses {

/*
 * AttachToTangle API call response.
 * Attaches the specified transactions (trytes) to the Tangle by doing Proof of Work. You need to
 * supply branchTransaction as well as trunkTransaction (basically the tips which you're going to
 * validate and reference with this transaction) - both of which you'll get through the
 * getTransactionsToApprove API call.
 * The returned value is a different set of tryte values which you can input into
 * broadcastTransactions and storeTransactions. The returned tryte value, the last 243 trytes
 * basically consist of the: trunkTransaction + branchTransaction + nonce. These are valid trytes
 * which are then accepted by the network.
 * https://iota.readme.io/docs/attachtotangle
 */
class AttachToTangle : public Base {
public:
  /**
   * full init ctor
   */
  AttachToTangle(const std::vector<std::string>& trytes = {});

  /**
   * default dtor
   */
  ~AttachToTangle() = default;

public:
  /**
   * init class based on json data
   *
   * @param res json data to be used for deserialization
   */
  void deserialize(const json& res);

public:
  /**
   * @return trytes
   */
  const std::vector<std::string>& getTrytes() const;

  /**
   * @return trytes (non const version)
   */
  std::vector<std::string>& getTrytes();

  /**
   * @param trytes new trytes for api call
   */
  void setTrytes(const std::vector<std::string>& trytes);

private:
  std::vector<std::string> trytes_;
};

}  // namespace Responses

}  // namespace API

}  // namespace IOTA
