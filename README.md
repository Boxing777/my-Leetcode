# 🚀 LeetCode 刷題筆記 (C++)

這個倉庫紀錄了我個人的 LeetCode 刷題歷程與心得。

## 📊 刷題概覽
- **主要語言**: C++
- **目標**: 熟練基礎演算法邏輯與常見資料結構應用。

---

## 📂 題目分類

### 🌊 滑動窗口 (Sliding Window)
| 題號 | 題目名稱 | 關鍵筆記 |
| :--- | :--- | :--- |
| 209 | [Minimum Size Subarray Sum](./209.%20Minimum%20Size%20Subarray%20Sum) | $O(n)$ 窗口收縮，注意 `current_sum >= target` 的邊界。 |
| 904 | [Fruit Into Baskets](./904.%20Fruit%20Into%20Baskets) | 使用 `unordered_map` 統計種類，種類 > 2 時移動左指標並 `erase`。 |
| 219 | [Contains Duplicate II](./219.%20Contains%20Duplicate%20II.cpp) | 固定大小窗口的雜湊應用。 |

### 🏹 雙指標 (Two Pointers) & 陣列 (Array)
| 題號 | 題目名稱 | 關鍵筆記 |
| :--- | :--- | :--- |
| 26 | [Remove Duplicates from Sorted Array](./26.%20Remove%20Duplicates%20from%20Sorted%20Array.cpp) | 慢指標覆蓋法。 |
| 27 | [Remove Element](./27.%20Remove%20Element.cpp) | 雙指標原地修改，不增加額外空間。 |
| 125 | [Valid Palindrome](./125.%20Valid%20Palindrome.cpp) | 左右指標向中間收縮，忽略非字母數字。 |
| 392 | [Is Subsequence](./392.%20Is%20Subsequence.cpp) | 雙指標同步比對字串順序。 |
| 977 | [Squares of a Sorted Array](./977.%20Squares%20of%20a%20Sorted%20Array) | 雙指標從兩端向中間尋找較大的平方值。 |
| 88 | [Merge Sorted Array](./88.%20Merge%20Sorted%20Array.cpp) | 從後往前填充，避免覆蓋數據。 |

### 🌳 二元樹 (Binary Tree / BST)
| 題號 | 題目名稱 | 關鍵筆記 |
| :--- | :--- | :--- |
| 100 | [Same Tree](./100.%20Same%20Tree.cpp) | 遞迴比較結構與值。 |
| 101 | [Symmetric Tree](./101.%20Symmetric%20Tree.cpp) | 鏡像比較左子樹與右子樹。 |
| 104 | [Maximum Depth of Binary Tree](./104.%20Maximum%20Depth%20of%20Binary%20Tree.cpp) | 簡單遞迴深度優先搜尋 (DFS)。 |
| 226 | [Invert Binary Tree](./226.%20Invert%20Binary%20Tree.cpp) | 遞迴交換左右子節點。 |
| 637 | [Average of Levels in BT](./637.%20Average%20of%20Levels%20in%20Binary%20Tree.cpp) | 層序遍歷 (BFS) 應用。 |
| 530 | [Min Absolute Difference in BST](./530.%20Minimum%20Absolute%20Difference%20in%20BST.cpp) | 利用 BST 中序遍歷為有序陣列的特性。 |

### 🔑 雜湊表 (Hash Map / Set) & 字串
| 題號 | 題目名稱 | 關鍵筆記 |
| :--- | :--- | :--- |
| 1 | [Two Sum](./1.%20Two%20Sum.cpp) | `unordered_map` 一次遍歷法。 |
| 242 | [Valid Anagram](./242.%20Valid%20Anagram.cpp) | 字母頻率計數。 |
| 383 | [Ransom Note](./383.%20Ransom%20Note.cpp) | 使用長度 26 的陣列模擬簡易雜湊表。 |
| 205 | [Isomorphic Strings](./205.%20Isomorphic%20Strings.cpp) | 雙向映射關係檢查。 |
| 202 | [Happy Number](./202.%20Happy%20Number.cpp) | 使用 `unordered_set` 偵測循環。 |

### 🔍 其他
| 題號 | 題目名稱 | 分類 | 關鍵筆記 |
| :--- | :--- | :--- | :--- |
| 704 | [Binary Search](./704.%20Binary%20Search) | 二分搜尋 | 掌握 `[left, right]` 區間閉閉原則。 |
| 20 | [Valid Parentheses](./20.%20Valid%20Parentheses.cpp) | 棧 (Stack) | 後進先出處理括號匹配。 |
| 141 | [Linked List Cycle](./141.%20Linked%20List%20Cycle.cpp) | 鏈表 | 快慢指標（龜兔賽跑演算法）。 |

---

## 🛠️ 常用 C++ 技巧與筆記

### 1. 關於 `unordered_map`
在處理頻率與滑動窗口時，`unordered_map` 是最強大的工具：
- `m.find(key) != m.end()` 判斷是否存在。
- `m.erase(key)` 在滑動窗口中，當 Value 變為 0 時必須移除 Key，否則 `m.size()` 不會變動。

### 2. 滑動窗口模板
```cpp
int left = 0;
for (int right = 0; right < n; right++) {
    // 1. 擴張窗口
    sum += nums[right];
    // 2. 收縮窗口
    while (條件滿足) {
        ans = min(ans, right - left + 1);
        sum -= nums[left];
        left++;
    }
}
