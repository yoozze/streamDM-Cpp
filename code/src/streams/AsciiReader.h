/*
 * Copyright (C) 2015 Holmes Team at HUAWEI Noah's Ark Lab.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef ASCIIREADER_H_
#define ASCIIREADER_H_

#include "../Common.h"
#include "../API.h"

using namespace std;

class STREAMDM_API AsciiReader: public Reader {
public:
	AsciiReader();
	virtual ~AsciiReader();
	virtual int input(string&);
protected:
	InstanceInformation* mInstanceInformation;
  
private:

	bool mFileOpened;
	ifstream* mFile;

	bool openFile(const string& fileName);
	bool readData();

	void renew();
	bool checkFileExist(const string& fileName);

public:
	virtual Instance* nextInstance();
	virtual bool setFile(const string& fileName);

};

#endif /* ASCIIREADER_H_ */

