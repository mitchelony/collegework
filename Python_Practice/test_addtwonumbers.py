import importlib.util
import pathlib
import typing
import unittest


MODULE_PATH = pathlib.Path(__file__).with_name("addtwonumbers.py")


def load_module():
    spec = importlib.util.spec_from_file_location("addtwonumbers", MODULE_PATH)
    module = importlib.util.module_from_spec(spec)
    # Script uses Optional in annotations without importing it.
    module.Optional = typing.Optional
    assert spec.loader is not None
    spec.loader.exec_module(module)
    return module


class AddTwoNumbersTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.mod = load_module()

    def list_to_nodes(self, digits):
        head = None
        for value in reversed(digits):
            head = self.mod.ListNode(value, head)
        return head

    def nodes_to_list(self, node):
        result = []
        while node:
            result.append(node.val)
            node = node.next
        return result

    def run_add(self, l1_digits, l2_digits):
        l1 = self.list_to_nodes(l1_digits)
        l2 = self.list_to_nodes(l2_digits)
        out = self.mod.addTwoNumbers(None, l1, l2)
        return self.nodes_to_list(out)

    def test_basic_no_carry(self):
        self.assertEqual(self.run_add([2, 4, 3], [5, 6, 4]), [7, 0, 8])

    def test_with_carry_chain(self):
        self.assertEqual(self.run_add([9, 9, 9], [1]), [0, 0, 0, 1])

    def test_different_lengths(self):
        self.assertEqual(self.run_add([1, 8], [0]), [1, 8])

    def test_both_zero(self):
        self.assertEqual(self.run_add([0], [0]), [0])

    def test_one_list_empty(self):
        self.assertEqual(self.run_add([], [3, 4, 5]), [3, 4, 5])


if __name__ == "__main__":
    unittest.main()
