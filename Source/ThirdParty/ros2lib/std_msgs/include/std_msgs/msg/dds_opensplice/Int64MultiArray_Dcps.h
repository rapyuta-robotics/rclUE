#ifndef _H_A2671559D30AAD7F957DB7AA6B86C5FC_Int64MultiArray_DCPS_H_
#define _H_A2671559D30AAD7F957DB7AA6B86C5FC_Int64MultiArray_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Int64MultiArray_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Int64MultiArray_TypeSupportInterface;

            typedef Int64MultiArray_TypeSupportInterface * Int64MultiArray_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Int64MultiArray_TypeSupportInterface> Int64MultiArray_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Int64MultiArray_TypeSupportInterface> Int64MultiArray_TypeSupportInterface_out;


            class Int64MultiArray_DataWriter;

            typedef Int64MultiArray_DataWriter * Int64MultiArray_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Int64MultiArray_DataWriter> Int64MultiArray_DataWriter_var;
            typedef DDS_DCPSInterface_out < Int64MultiArray_DataWriter> Int64MultiArray_DataWriter_out;


            class Int64MultiArray_DataReader;

            typedef Int64MultiArray_DataReader * Int64MultiArray_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Int64MultiArray_DataReader> Int64MultiArray_DataReader_var;
            typedef DDS_DCPSInterface_out < Int64MultiArray_DataReader> Int64MultiArray_DataReader_out;


            class Int64MultiArray_DataReaderView;

            typedef Int64MultiArray_DataReaderView * Int64MultiArray_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Int64MultiArray_DataReaderView> Int64MultiArray_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Int64MultiArray_DataReaderView> Int64MultiArray_DataReaderView_out;

            struct Int64MultiArray_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Int64MultiArray_, struct Int64MultiArray_Seq_uniq_> Int64MultiArray_Seq;
            typedef DDS_DCPSSequence_var < Int64MultiArray_Seq> Int64MultiArray_Seq_var;
            typedef DDS_DCPSSequence_out < Int64MultiArray_Seq> Int64MultiArray_Seq_out;

            class  Int64MultiArray_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Int64MultiArray_TypeSupportInterface_ptr _ptr_type;
                typedef Int64MultiArray_TypeSupportInterface_var _var_type;

                static Int64MultiArray_TypeSupportInterface_ptr _duplicate (Int64MultiArray_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int64MultiArray_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Int64MultiArray_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int64MultiArray_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Int64MultiArray_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Int64MultiArray_TypeSupportInterface () {};
                ~Int64MultiArray_TypeSupportInterface () {};
            private:
                Int64MultiArray_TypeSupportInterface (const Int64MultiArray_TypeSupportInterface &);
                Int64MultiArray_TypeSupportInterface & operator = (const Int64MultiArray_TypeSupportInterface &);
            };

            class  Int64MultiArray_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Int64MultiArray_DataWriter_ptr _ptr_type;
                typedef Int64MultiArray_DataWriter_var _var_type;

                static Int64MultiArray_DataWriter_ptr _duplicate (Int64MultiArray_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int64MultiArray_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Int64MultiArray_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int64MultiArray_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Int64MultiArray_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Int64MultiArray_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Int64MultiArray_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Int64MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Int64MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Int64MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Int64MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Int64MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Int64MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Int64MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Int64MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Int64MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int64MultiArray_& instance_data) = 0;

            protected:
                Int64MultiArray_DataWriter () {};
                ~Int64MultiArray_DataWriter () {};
            private:
                Int64MultiArray_DataWriter (const Int64MultiArray_DataWriter &);
                Int64MultiArray_DataWriter & operator = (const Int64MultiArray_DataWriter &);
            };

            class  Int64MultiArray_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Int64MultiArray_DataReader_ptr _ptr_type;
                typedef Int64MultiArray_DataReader_var _var_type;

                static Int64MultiArray_DataReader_ptr _duplicate (Int64MultiArray_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int64MultiArray_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Int64MultiArray_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int64MultiArray_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Int64MultiArray_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Int64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Int64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Int64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Int64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Int64MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Int64MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Int64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Int64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Int64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Int64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Int64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Int64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Int64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Int64MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int64MultiArray_& instance) = 0;

            protected:
                Int64MultiArray_DataReader () {};
                ~Int64MultiArray_DataReader () {};
            private:
                Int64MultiArray_DataReader (const Int64MultiArray_DataReader &);
                Int64MultiArray_DataReader & operator = (const Int64MultiArray_DataReader &);
            };

            class  Int64MultiArray_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Int64MultiArray_DataReaderView_ptr _ptr_type;
                typedef Int64MultiArray_DataReaderView_var _var_type;

                static Int64MultiArray_DataReaderView_ptr _duplicate (Int64MultiArray_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int64MultiArray_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Int64MultiArray_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int64MultiArray_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Int64MultiArray_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Int64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Int64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Int64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Int64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Int64MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Int64MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Int64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Int64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Int64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Int64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Int64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Int64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Int64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Int64MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int64MultiArray_& instance) = 0;

            protected:
                Int64MultiArray_DataReaderView () {};
                ~Int64MultiArray_DataReaderView () {};
            private:
                Int64MultiArray_DataReaderView (const Int64MultiArray_DataReaderView &);
                Int64MultiArray_DataReaderView & operator = (const Int64MultiArray_DataReaderView &);
            };
        }

    }

}

#endif
