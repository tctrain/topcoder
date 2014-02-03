BASEDIR=$(dirname $0)
OTHER=$BASEDIR/polkovnikov.ph/
inotifywait $OTHER -r -m -e CLOSE_WRITE | while read dir events file; do
  if [[ $file =~ ^.*\.cpp$ ]] ; then
    (cd $BASEDIR; git add -A; git commit -m "${file%.cpp}"; git push)
  fi
done

# https://help.github.com/articles/post-receive-hooks
# https://productforums.google.com/forum/#!topic/docs/iCfNwOliYKY
# http://www.reddit.com/r/linux/comments/1bx0bi/entr1_run_arbitrary_commands_when_files_change/
# http://superuser.com/questions/181517/how-to-execute-a-command-whenever-a-file-changes
