#ifndef _H_F57369A3787F0DF1B1E9C64CADBDCB20_Int8MultiArray_DCPS_H_
#define _H_F57369A3787F0DF1B1E9C64CADBDCB20_Int8MultiArray_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Int8MultiArray_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Int8MultiArray_TypeSupportInterface;

            typedef Int8MultiArray_TypeSupportInterface * Int8MultiArray_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Int8MultiArray_TypeSupportInterface> Int8MultiArray_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Int8MultiArray_TypeSupportInterface> Int8MultiArray_TypeSupportInterface_out;


            class Int8MultiArray_DataWriter;

            typedef Int8MultiArray_DataWriter * Int8MultiArray_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Int8MultiArray_DataWriter> Int8MultiArray_DataWriter_var;
            typedef DDS_DCPSInterface_out < Int8MultiArray_DataWriter> Int8MultiArray_DataWriter_out;


            class Int8MultiArray_DataReader;

            typedef Int8MultiArray_DataReader * Int8MultiArray_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Int8MultiArray_DataReader> Int8MultiArray_DataReader_var;
            typedef DDS_DCPSInterface_out < Int8MultiArray_DataReader> Int8MultiArray_DataReader_out;


            class Int8MultiArray_DataReaderView;

            typedef Int8MultiArray_DataReaderView * Int8MultiArray_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Int8MultiArray_DataReaderView> Int8MultiArray_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Int8MultiArray_DataReaderView> Int8MultiArray_DataReaderView_out;

            struct Int8MultiArray_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Int8MultiArray_, struct Int8MultiArray_Seq_uniq_> Int8MultiArray_Seq;
            typedef DDS_DCPSSequence_var < Int8MultiArray_Seq> Int8MultiArray_Seq_var;
            typedef DDS_DCPSSequence_out < Int8MultiArray_Seq> Int8MultiArray_Seq_out;

            class  Int8MultiArray_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Int8MultiArray_TypeSupportInterface_ptr _ptr_type;
                typedef Int8MultiArray_TypeSupportInterface_var _var_type;

                static Int8MultiArray_TypeSupportInterface_ptr _duplicate (Int8MultiArray_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int8MultiArray_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Int8MultiArray_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int8MultiArray_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Int8MultiArray_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Int8MultiArray_TypeSupportInterface () {};
                ~Int8MultiArray_TypeSupportInterface () {};
            private:
                Int8MultiArray_TypeSupportInterface (const Int8MultiArray_TypeSupportInterface &);
                Int8MultiArray_TypeSupportInterface & operator = (const Int8MultiArray_TypeSupportInterface &);
            };

            class  Int8MultiArray_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Int8MultiArray_DataWriter_ptr _ptr_type;
                typedef Int8MultiArray_DataWriter_var _var_type;

                static Int8MultiArray_DataWriter_ptr _duplicate (Int8MultiArray_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int8MultiArray_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Int8MultiArray_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int8MultiArray_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Int8MultiArray_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Int8MultiArray_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Int8MultiArray_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Int8MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Int8MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Int8MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Int8MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Int8MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Int8MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Int8MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Int8MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Int8MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int8MultiArray_& instance_data) = 0;

            protected:
                Int8MultiArray_DataWriter () {};
                ~Int8MultiArray_DataWriter () {};
            private:
                Int8MultiArray_DataWriter (const Int8MultiArray_DataWriter &);
                Int8MultiArray_DataWriter & operator = (const Int8MultiArray_DataWriter &);
            };

            class  Int8MultiArray_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Int8MultiArray_DataReader_ptr _ptr_type;
                typedef Int8MultiArray_DataReader_var _var_type;

                static Int8MultiArray_DataReader_ptr _duplicate (Int8MultiArray_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int8MultiArray_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Int8MultiArray_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int8MultiArray_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Int8MultiArray_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Int8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Int8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Int8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Int8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Int8MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Int8MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Int8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Int8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Int8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Int8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Int8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Int8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Int8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Int8MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int8MultiArray_& instance) = 0;

            protected:
                Int8MultiArray_DataReader () {};
                ~Int8MultiArray_DataReader () {};
            private:
                Int8MultiArray_DataReader (const Int8MultiArray_DataReader &);
                Int8MultiArray_DataReader & operator = (const Int8MultiArray_DataReader &);
            };

            class  Int8MultiArray_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Int8MultiArray_DataReaderView_ptr _ptr_type;
                typedef Int8MultiArray_DataReaderView_var _var_type;

                static Int8MultiArray_DataReaderView_ptr _duplicate (Int8MultiArray_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int8MultiArray_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Int8MultiArray_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int8MultiArray_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Int8MultiArray_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Int8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Int8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Int8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Int8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Int8MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Int8MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Int8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Int8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Int8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Int8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Int8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Int8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Int8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Int8MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int8MultiArray_& instance) = 0;

            protected:
                Int8MultiArray_DataReaderView () {};
                ~Int8MultiArray_DataReaderView () {};
            private:
                Int8MultiArray_DataReaderView (const Int8MultiArray_DataReaderView &);
                Int8MultiArray_DataReaderView & operator = (const Int8MultiArray_DataReaderView &);
            };
        }

    }

}

#endif
