#include "pch.h"
#include "CppUnitTest.h"
#include "../ADS_CA2_Tree/tNode.h"
#include "../ADS_CA2_Tree/BinaryTree.h"
#include "../ADS_CA2_Tree/utils.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ADSCA2TreeTests
{
	TEST_CLASS(ADSCA2TreeTests)
	{
	public:

		//tNode tests
		
		TEST_METHOD(GetData)
		{
			tNode<int> node(5);
			Assert::AreEqual(5, node.getItem());
		}

		TEST_METHOD(SetData)
		{
			tNode<int> node(5);
			node.setItem(10);
			Assert::AreEqual(10, node.getItem());
		}
		
		TEST_METHOD(Count)
		{
			tNode<int> node(5);
			Assert::AreEqual(0, node.count());
		}

		TEST_METHOD(Add)
		{
			tNode<int> node(5);
			node.add(10);
			Assert::AreEqual(0, node.count());
		}
		
		TEST_METHOD(GetParent)
		{
			tNode<int> node(5);
			Assert::IsNull(node.getParent());
		}
		
		TEST_METHOD(GetLeft)
		{
			tNode<int> node(5);
			Assert::IsNull(node.getLeft());
		}
		
		TEST_METHOD(GetRight)
		{
			tNode<int> node(5);
			Assert::IsNull(node.getRight());
		}
		
		TEST_METHOD(SetLeft)
		{
			tNode<int> node(5);
			tNode<int> left(10);
			node.setLeft(&left);
			Assert::AreEqual(10, node.getLeft()->getItem());
		}
		
		TEST_METHOD(SetRight)
		{
			tNode<int> node(5);
			tNode<int> right(10);
			node.setRight(&right);
			Assert::AreEqual(10, node.getRight()->getItem());
		}
		
		
		//tree tests

		TEST_METHOD(add)
		{
			Tree<int> tree;
			tree.add(5);
			Assert::AreEqual(1, tree.count());
		}
		
		TEST_METHOD(count)
		{
			Tree<int> tree;
			tree.add(5);
			Assert::AreEqual(1, tree.count());
		}
		
		TEST_METHOD(remove)
		{
			Tree<int> tree;
			tree.add(5);
			tree.remove(5);
			Assert::AreEqual(0, tree.count());
		}
		
		TEST_METHOD(clear)
		{
			Tree<int> tree;
			tree.add(5);
			tree.clear();
			Assert::AreEqual(0, tree.count());
		}

		TEST_METHOD(printPreOrder)
		{
			Tree<int> tree;
			tree.add(5);
			tree.add(10);
			tree.add(15);
			tree.printPreOrder();
			Assert::AreEqual(3, tree.count());
		}
	};
}
