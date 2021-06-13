setsid ./echo < /dev/null > test.log 2>&1 &
export TARGET_PID=$(pgrep echo)
echo "TARGET_PID=${TARGET_PID}"
sleep 0.5
rm -rf imgs && mkdir imgs
LD_LIBRARY_PATH=/home/wtx/criu/.deps-install/lib /home/wtx/criu/criu-3.15/criu/criu dump --images-dir=./imgs -t ${TARGET_PID} -vvv -o dump.log
