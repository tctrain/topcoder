BASEDIR=$(dirname $0)
OTHER=$BASEDIR/polkovnikov.ph/
(cd $BASEDIR; git add -A; git commit -m "Miscellaneous training"; git push)
inotifywait $OTHER -r -m -e CLOSE_WRITE | while read dir events file; do
  if [[ $file =~ ^.*\.cpp$ ]] ; then
    (cd $BASEDIR; git add -A; git commit -m "${file%.cpp}"; git push)
  fi
done
