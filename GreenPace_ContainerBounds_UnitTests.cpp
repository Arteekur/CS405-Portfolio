// CS 405 | Project Two | Green Pace | STD-008-CPP
// Visual Studio 2022: create a C++ "Native Unit Test Project" and replace
// the generated test .cpp contents with this file. Keep the project's pch.h.
// This is a student testing example, not a statement that tests have been run.
#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include <stdexcept>
#include <cstddef>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GreenPace
{
    // Validates signed input BEFORE converting to an unsigned vector index.
    int ReadAt(const std::vector<int>& values, long long index)
    {
        if (index < 0 ||
            static_cast<unsigned long long>(index) >= values.size())
        {
            throw std::out_of_range("Container index is out of bounds");
        }
        return values.at(static_cast<std::size_t>(index));
    }
}

namespace GreenPaceTests
{
    TEST_CLASS(ContainerBoundsTests)
    {
    public:
        TEST_METHOD(ValidFirstIndex)
        {
            Assert::AreEqual(10, GreenPace::ReadAt({10, 20, 30}, 0));
        }

        TEST_METHOD(ValidLastIndex)
        {
            Assert::AreEqual(30, GreenPace::ReadAt({10, 20, 30}, 2));
        }

        TEST_METHOD(ValidMiddleIndex)
        {
            Assert::AreEqual(20, GreenPace::ReadAt({10, 20, 30}, 1));
        }

        TEST_METHOD(RejectNegativeIndex)
        {
            Assert::ExpectException<std::out_of_range>([] {
                GreenPace::ReadAt({10, 20, 30}, -1);
            });
        }

        TEST_METHOD(RejectIndexAtSize)
        {
            Assert::ExpectException<std::out_of_range>([] {
                GreenPace::ReadAt({10, 20, 30}, 3);
            });
        }

        TEST_METHOD(RejectEmptyContainer)
        {
            Assert::ExpectException<std::out_of_range>([] {
                GreenPace::ReadAt({}, 0);
            });
        }
    };
}
