{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "provenance": [],
      "authorship_tag": "ABX9TyNx+E+cuid6COgWRHONHYkW",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/AyushCN/OS_LAB/blob/main/treeincolsb.c\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "execution_count": null,
      "metadata": {
        "id": "CDFJ0GZNr54Q"
      },
      "outputs": [],
      "source": [
        "class TreeNode:\n",
        "    def __init__(self, value):\n",
        "        self.value = value  # Store the value of the node\n",
        "        self.children = []  # List to store the children nodes\n",
        "\n",
        "    def add_child(self, child_node):\n",
        "        \"\"\"Add a child node to the current node.\"\"\"\n",
        "        self.children.append(child_node)\n",
        "\n",
        "    def __repr__(self):\n",
        "        return f\"TreeNode({self.value})\"\n",
        "\n",
        "# Example usage\n",
        "\n",
        "# Creating nodes\n",
        "root = TreeNode(\"Root\")\n",
        "child_1 = TreeNode(\"Child 1\")\n",
        "child_2 = TreeNode(\"Child 2\")\n",
        "child_1_1 = TreeNode(\"Child 1.1\")\n",
        "child_2_1 = TreeNode(\"Child 2.1\")\n",
        "\n",
        "# Building the tree structure\n",
        "root.add_child(child_1)\n",
        "root.add_child(child_2)\n",
        "child_1.add_child(child_1_1)\n",
        "child_2.add_child(child_2_1)\n",
        "\n",
        "# Displaying the tree (root node and its children)\n",
        "print(root)\n",
        "print(\"Root's Children:\", root.children)\n"
      ]
    }
  ]
}