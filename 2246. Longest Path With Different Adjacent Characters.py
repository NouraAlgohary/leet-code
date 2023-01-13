class Solution:

    final_path = 1

    def longestPath(self, parent: List[int], s: str) -> int:
        children_nodes = [[] for i in range(len(parent))]

        for i in range(1, len(parent)):
            children_nodes[parent[i]].append(i)
        
        def dfs(node):
            first_longest_path = 0
            second_longest_path = 0 
            child_path = 0

            for child in children_nodes[node]:
                child_path = dfs(child)

                if s[child] == s[node]:
                    continue
                
                if child_path > first_longest_path:
                    second_longest_path = first_longest_path
                    first_longest_path = child_path
                elif child_path > second_longest_path:
                    second_longest_path = child_path

                self.final_path = max(self.final_path, first_longest_path + second_longest_path + 1)

            return first_longest_path + 1

        dfs(0)

        return self.final_path