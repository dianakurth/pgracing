if grep -qi microsoft /proc/version; then
    systemctl status SSH
else
    env | grep -E 'BASH|SHELL' | wc -l
    env | grep -E 'BASH|SHELL'
fi