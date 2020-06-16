class Solution:
    def isIPv4(self, IP: str) -> str:
        parts = IP.split(".")
        if len(parts) != 4:
            return False

        for x in parts:
            if len(x) == 0 or len(x) > 3:
                return False

            if x[0] == "0" and len(x) != 1:
                return False
            if not x.isdigit() or int(x) >= 256:
                return False
        return True

    def isIPv6(self, IP: str) -> str:
        parts = IP.split(":")
        if len(parts) != 8:
            return False

        for x in parts:
            if len(x) == 0 or len(x) > 4:
                return False
            if not all(ch in string.hexdigits for ch in x):
                return False
        return True

    def validIPAddress(self, IP: str) -> str:
        if self.isIPv4(IP):
            return "IPv4"
        elif self.isIPv6(IP):
            return "IPv6"
        else:
            return "Neither"
