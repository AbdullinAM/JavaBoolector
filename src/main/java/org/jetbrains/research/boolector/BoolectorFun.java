package org.jetbrains.research.boolector;

public abstract class BoolectorFun extends BoolectorObject {

    BoolectorFun(Btor btor, long ref) {
        super(btor, ref);
    }

    public void release() {
        Native.releaseNode(btor.getRef(), ref);
    }

    public static class FunctionParam extends BoolectorFun {
        FunctionParam(Btor btor, long ref) {
            super(btor, ref);
        }

        public static FunctionParam param(BoolectorSort sort, String name) {
            Btor btor = sort.getBtor();
            return name == null ?
                    new FunctionParam(btor, Native.param(btor.getRef(), sort.getRef(), "nullInC")) :
                    new FunctionParam(btor, Native.param(btor.getRef(), sort.getRef(), name));
        }
    }
}
