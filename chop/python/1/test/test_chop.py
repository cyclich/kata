import unittest
from chop import chop

class TestChop(unittest.TestCase):

    def test_one_element_exists(self):
        self.assertEqual( 0, chop.chop(1, [1]))
        self.assertEqual( 0, chop.chop(0, [0,1]))
        self.assertEqual( 1, chop.chop(1, [0,1]))

    def test_element_does_not_exist(self):
        self.assertEqual( -1, chop.chop( 1, [0,2,3]))

    def test_empty_list(self):
        self.assertEqual( -1, chop.chop(-1, []))

if __name__ == '__main__':
    unittest.main()
